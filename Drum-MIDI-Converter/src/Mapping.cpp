#include <iostream>
#include <stdexcept>

#include "Mapping.hpp"
#include "stringpp.hpp"

Mapping::Mapping()
    : _name("unnamed map")
{ }

Mapping::Mapping(const std::string &name)
    : _name(name)
{ }

Mapping::Mapping(const std::string &name, const std::map<std::string, uint8_t> &map)
    : _map(map), _name(name)
{ }

Mapping::Mapping(const std::string& name, const Mapping& map)
    : _name(name), _map(map._map)
{ }

std::string Mapping::name() const {
    return _name;
}

void Mapping::insert(const std::string &key, const uint8_t &value) {
    _map.insert({key, value});
}

void Mapping::insert(const std::map<std::string, uint8_t> &mapping) {
    for (const auto &pair : mapping)
        _map.insert(pair);
}

bool Mapping::containsKey(const std::string &key) const {
    return _map.find(key) != _map.end();
}

bool Mapping::containsValue(const uint8_t &value) const {
    for (const auto &[key, val] : _map)
        if (val == value)
            return true;
    return false;
}

std::vector<std::string> Mapping::getKeys() const {
    std::vector<std::string> keys;
    for (const auto &[key, val] : _map)
        keys.push_back(key);
    return keys;
}

std::string Mapping::operator[](const uint8_t &value) const {
    for (const auto &[key, val] : _map)
        if (val == value)
            return key;
    throw std::invalid_argument("Value is not in mapping.");
}

uint8_t Mapping::operator[](const std::string &key) const {
    return _map.at(key);
}

std::string Mapping::at(const uint8_t &value) const {
    return operator[](value);
}

uint8_t Mapping::at(const std::string &key) const {
    return operator[](key);
}

void Mapping::print() const {
    unsigned int difference = 0;
    std::cout << _name << std::endl;
    std::string keyHeader = "Key:", valueHeader = "Value:";
    int maxLen = keyHeader.length();
    for (const auto &[key, val] : _map)
        if (key.length() > maxLen)
            maxLen = key.length();

    std::cout << keyHeader << stringpp::repeat(" ", maxLen - keyHeader.length()) << "  " << valueHeader << std::endl;

    for (const auto &[key, val] : _map) {
        difference = maxLen - key.length();
        std::cout << key << stringpp::repeat(" ", difference) << "  " << (int)val << std::endl;
    }
}