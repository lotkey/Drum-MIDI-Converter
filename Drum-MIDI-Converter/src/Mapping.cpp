#include <iostream>
#include <stdexcept>

#include "Mapping.h"
#include "stringpp.h"

Mapping::Mapping() 
{ }

Mapping::Mapping(const std::map<std::string, uint8_t>& map) 
    : _map(map)
{ }

void Mapping::insert(const std::string& key, const uint8_t& value) {
    _map.insert({key, value});
}

void Mapping::insert(const std::map<std::string, uint8_t>& mapping) {
    for (const auto& pair : mapping)
        _map.insert({pair.first, pair.second});
}

bool Mapping::containsKey(const std::string& key) const {
    return _map.find(key) != _map.end();
}

bool Mapping::containsValue(const uint8_t& value) const {
    for (const auto& pair : _map)
        if (pair.second == value) return true;
    return false;
}

std::string Mapping::operator[](const uint8_t& value) const {
    for (const auto& pair : _map)
        if (pair.second == value) return pair.first;
    throw std::invalid_argument("Value is not in mapping.");
}

uint8_t Mapping::operator[](const std::string& key) const {
    return _map.at(key);
}

std::string Mapping::at(const uint8_t& value) const {
    return operator[](value);
}

uint8_t Mapping::at(const std::string& key) const {
    return operator[](key);
}

void Mapping::print() const {
    unsigned int difference = 0;
    std::string keyHeader = "Key:", valueHeader = "Value:";
    int maxLen = keyHeader.length();
    for (const auto& pair : _map)
        if (pair.first.length() > maxLen) maxLen = pair.first.length();

    std::cout << keyHeader << stringpp::repeat(" ", maxLen - keyHeader.length()) << "  " << valueHeader << std::endl;

    for (const auto& pair : _map) {
        difference = maxLen - pair.first.length();
        std::cout << pair.first << stringpp::repeat(" ", difference) << "  " << (int)pair.second << std::endl;
    }
}