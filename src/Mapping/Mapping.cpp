#include <iostream>
#include <stdexcept>

#include "./Mapping.hpp"
#include "../Helpers/stringpp.hpp"

Mapping::Mapping()
    : _name("unnamed map")
{ }

Mapping::Mapping(const std::string &name)
    : _name(name)
{ }

Mapping::Mapping(const std::string& name, const std::map<std::string, MidiNoteGroup>& map) 
    : _map(map), _name(name)
{ }

Mapping::Mapping(const std::string& name, const Mapping& map)
    : _name(name), _map(map._map)
{ }

std::string Mapping::name() const {
    return _name;
}

void Mapping::insert(const std::string &key, const MidiNote& value) {
    _map.insert({key, {value}});
}

void Mapping::insert(const std::map<std::string, MidiNoteGroup> &mapping) {
    for (const auto &pair : mapping)
        _map.insert(pair);
}

bool Mapping::containsKey(const std::string &key) const {
    return _map.find(key) != _map.end();
}

bool Mapping::containsValue(const MidiNote& value) const {
    for (const auto &[key, group] : _map)
        if (group.contains(value))
            return true;
    return false;
}

std::vector<std::string> Mapping::getKeys() const {
    std::vector<std::string> keys;
    for (const auto &[key, val] : _map)
        keys.push_back(key);
    return keys;
}

std::string Mapping::operator[](const MidiNote& value) const {
    for (const auto &[key, val] : _map)
        if (val == value)
            return key;
    throw std::invalid_argument("Value is not in mapping.");
}

MidiNoteGroup Mapping::operator[](const std::string &key) const {
    return _map.at(key);
}

std::string Mapping::at(const MidiNote& value) const {
    return operator[](value);
}

MidiNoteGroup Mapping::at(const std::string& key) const {
    return operator[](key);
}

void Mapping::print() const {
    unsigned int difference = 0;
    std::cout << _name << std::endl;
    std::string keyHeader = "Key:", valueHeader = "Value(s):";
    int maxLen = keyHeader.length();
    for (const auto &[key, _] : _map)
        if (key.length() > maxLen)
            maxLen = key.length();

    std::cout << keyHeader << stringpp::repeat(" ", maxLen - keyHeader.length()) << "  " << valueHeader << std::endl;

    for (const auto &[key, group] : _map) {
        difference = maxLen - key.length();
        std::cout << key << stringpp::repeat(" ", difference) << "  " << group.toString() << std::endl;
    }
}