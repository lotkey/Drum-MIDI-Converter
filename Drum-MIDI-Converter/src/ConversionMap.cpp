#include <cinttypes>
#include <iostream>
#include <map>
#include <string>

#include "ConversionMap.hpp"
#include "stringpp.hpp"

ConversionMap::ConversionMap(const std::string& from, const std::string& to)
    : _mapFrom(from), _mapTo(to)
{ }

ConversionMap::ConversionMap(const std::string& from, const std::string& to, const std::map<uint8_t, uint8_t>& map) 
    : _map(map), _mapFrom(from), _mapTo(to)
{ }

void ConversionMap::insert(const uint8_t& key, const uint8_t& value) {
    _map.insert({key, value});
}

void ConversionMap::insert(const std::map<uint8_t, uint8_t>& mapping) {
    for (const auto& pair : mapping)
        _map.insert(pair);
}

bool ConversionMap::containsKey(const uint8_t& key) const {
    return _map.find(key) != _map.end();
}

bool ConversionMap::containsValue(const uint8_t& value) const {
    for (const auto& pair : _map)
        if (pair.second == value) return true;
    return false;
}

uint8_t ConversionMap::operator[](const uint8_t& key) const {
    return _map.at(key);
}

uint8_t ConversionMap::at(const uint8_t& key) const {
    return operator[](key);
}

int8_t ConversionMap::keyFromValue(const uint8_t& value) const {
    for (const auto& pair : _map)
        if (pair.second == value) return pair.first;
    return -1; 
}

void ConversionMap::print() const {
    unsigned int difference = 0;
    std::string label;
    int maxLen = _mapFrom.length() + 1;
    for (const auto& pair : _map) {
        label = std::to_string(pair.first);
        if (label.length() > maxLen) maxLen = label.length();
    }

    std::cout << _mapFrom << ":" << stringpp::repeat(" ", maxLen - _mapFrom.length()) << " " << _mapTo << ":" << std::endl;

    for (const auto& pair : _map) {
        label = std::to_string(pair.first);
        difference = maxLen - label.length();
        std::cout << label << stringpp::repeat(" ", difference) << "  " << (int)pair.second << std::endl;
    }
}