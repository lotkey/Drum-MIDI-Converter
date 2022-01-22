#include <cinttypes>
#include <filesystem>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>

#include "./ConversionMap.hpp"
#include "./Mapping.hpp"
#include "./Mappings.hpp"
#include "../Helpers/stringpp.hpp"

ConversionMap ConversionMap::load(const std::filesystem::path& path) {
    std::ifstream infile(path);
    std::string fromStr, toStr, line;
    uint8_t from, to;

    std::getline(infile, fromStr);
    std::getline(infile, toStr);
    ConversionMap map(fromStr, toStr);

    while (infile >> from && infile >> to && from != 128 && to != 128) {
        map.insert(from, to);
    }
    std::getline(infile, line);

    return map;
}

std::vector<ConversionMap> ConversionMap::loadMultiple(const std::filesystem::path& path) {
    std::ifstream infile(path);
    std::string fromStr, toStr, line;
    uint8_t from, to;
    std::vector<ConversionMap> cmaps;

    if (infile) {
        std::getline(infile, fromStr);
        std::getline(infile, toStr);
        cmaps.push_back(ConversionMap(fromStr, toStr));

        while (infile >> from && infile >> to && from != 128 && to != 128) {
            cmaps.back().insert(from, to);
        }
        std::getline(infile, line);
    }

    return cmaps;
}

void ConversionMap::saveAll(const std::vector<ConversionMap>& conversionMaps, const std::filesystem::path& path) {
    conversionMaps[0].save(path);
    
    for (unsigned int i = 1; i < conversionMaps.size(); i++)
        conversionMaps[i].save(path, true);
}

// Construct from names of mappings
ConversionMap::ConversionMap(const std::string& from, const std::string& to)
    : _mapFrom(from), _mapTo(to)
{ }

// Insert a key -> value pair
void ConversionMap::insert(const MidiNoteGroup& group, const uint8_t& value) {
    auto s = group.getSet();
    for (const auto& note : s)
        _map.insert({note, value});
}

void ConversionMap::insert(const uint8_t& from, const uint8_t& to) {
    _map.insert({from, to});
}

// Boolean predicate, returns true if this maps contains a MIDI note group that contains the provided key
bool ConversionMap::containsKey(const uint8_t& key) const {
    return _map.find(key) != _map.end();
}

// Returns true if mapping maps to the provided value
bool ConversionMap::containsValue(const uint8_t& value) const {
    for (const auto& [_, val] : _map)
        if (val == value) return true;
    return false;
}

// Returns the MIDI note mapped to by the provided key
uint8_t ConversionMap::operator[](const uint8_t& key) const {
    return _map.at(key);
}

// Returns the MIDI note mapped to by the provided key
uint8_t ConversionMap::at(const uint8_t& key) const {
    return operator[](key);
}

// Returns the key that maps to the provided value
std::optional<uint8_t> ConversionMap::keyFromValue(const uint8_t& value) const {
    for (const auto& [key, val] : _map)
        if (val == value)
            return key;
    return {}; 
}

// Prints the conversion mapping
void ConversionMap::print() const {
    unsigned int difference = 0;
    std::string label;
    int maxLen = _mapFrom.length() + 1;
    for (const auto& [from, to] : _map) {
        label = std::to_string(from);
        if (label.length() > maxLen) maxLen = label.length();
    }

    std::cout << _mapFrom << ":" << stringpp::repeat(" ", maxLen - _mapFrom.length()) << " " << _mapTo << ":" << std::endl;

    for (const auto& [from, to] : _map) {
        difference = maxLen - std::to_string(from).length();
        std::cout << std::to_string(from) << stringpp::repeat(" ", difference) << "  " << (int)to << std::endl;
    }
}

void ConversionMap::save(const std::filesystem::path& path, const bool& append) const {
    std::ofstream outfile;
    if (append) {
        outfile.open(path, std::ios_base::app);
    } else {
        outfile.open(path);
    }

    outfile << _mapFrom << "\n";
    outfile << _mapTo << "\n";
    for (const auto& [from, to] : _map)
        outfile << from << to;
    outfile << (uint8_t)128 << (uint8_t)128 << "\n";
    outfile.close();
}