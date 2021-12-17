#include <cinttypes>
#include <iostream>
#include <map>
#include <set>

#include "./ConversionMap.hpp"
#include "../Helpers/stringpp.hpp"

ConversionMap::ConversionMap(const std::string& from, const std::string& to)
    : _mapFrom(from), _mapTo(to)
{ }

ConversionMap::ConversionMap(const std::string& from, const std::string& to, const std::map<MidiNoteGroup, MidiNote>& map) 
    : _map(map), _mapFrom(from), _mapTo(to)
{ }

void ConversionMap::insert(const MidiNoteGroup& group, const uint8_t& value) {
    _map.insert({group, value});
}

bool ConversionMap::containsKey(const MidiNote& key) const {
    for (const auto& [group, note] : _map)
        if (group.contains(key))
            return true;
    return false;
}

bool ConversionMap::containsValue(const MidiNote& value) const {
    for (const auto& [_, val] : _map)
        if (val == value) return true;
    return false;
}

MidiNote ConversionMap::operator[](const MidiNote& key) const {
    for (const auto& [group, val] : _map)
        if (group.contains(key)) return (int)group;
    throw std::runtime_error("Conversion map does not contain key \"" + (int)key + std::string("\"."));
}

MidiNote ConversionMap::at(const MidiNote& key) const {
    return operator[](key);
}

std::optional<MidiNoteGroup> ConversionMap::keyFromValue(const MidiNote& value) const {
    for (const auto& [group, val] : _map)
        if (val == value) return group;
    return {}; 
}

void ConversionMap::print() const {
    unsigned int difference = 0;
    std::string label;
    int maxLen = _mapFrom.length() + 1;
    for (const auto& [from, to] : _map) {
        label = from.toString();
        if (label.length() > maxLen) maxLen = label.length();
    }

    std::cout << _mapFrom << ":" << stringpp::repeat(" ", maxLen - _mapFrom.length()) << " " << _mapTo << ":" << std::endl;

    for (const auto& [from, to] : _map) {
        difference = maxLen - from.toString().length();
        std::cout << from.toString() << stringpp::repeat(" ", difference) << "  " << (int)to << std::endl;
    }
}