#include "./Mapping.hpp"
#include "../Helpers/stringpp.hpp"

#include <iostream>
#include <stdexcept>

Mapping::Mapping()
    : m_name("undefined mapping")
{
}

// Construct from name
Mapping::Mapping(const std::string &name)
    : m_name(name)
{
}

// Construct from name and mapping
Mapping::Mapping(const std::string &name, const std::map<std::string, MidiNoteGroup> &map)
    : m_map(map), m_name(name)
{
}

// Construct from name and other mapping
Mapping::Mapping(const std::string &name, const Mapping &map)
    : m_name(name), m_map(map.m_map)
{
}

// Return the name
std::string Mapping::name() const
{
    return m_name;
}

// Insert string -> MIDI note group pair
void Mapping::insert(const std::map<std::string, MidiNoteGroup> &mapping)
{
    for (const auto &pair : mapping)
        m_map.insert(pair);
}

// Returns true if mapping maps the provided key to some value
bool Mapping::containsKey(const std::string &key) const
{
    return m_map.find(key) != m_map.end();
}

// Returns true if mapping maps to the provided value
bool Mapping::containsValue(const MidiNote &value) const
{
    for (const auto &[key, group] : m_map)
        if (group.contains(value))
            return true;
    return false;
}

double Mapping::getPercentMatch(const smf::MidiFile &mf) const
{
    double total = 0, matched = 0;
    for (int i = 0; i < mf.getNumTracks(); i++)
    {
        for (int j = 0; j < mf[i].size(); j++)
        {
            if (mf[i][j].isNote())
            {
                total++;
                if (containsValue(mf[i][j].getKeyNumber()))
                    matched++;
            }
        }
    }
    return matched / total;
}

// Returns all keys in the mapping
std::vector<std::string> Mapping::getKeys() const
{
    std::vector<std::string> keys;
    for (const auto &[key, val] : m_map)
        keys.push_back(key);
    return keys;
}

// Returns the key that maps to the provided value
std::string Mapping::operator[](const MidiNote &value) const
{
    for (const auto &[key, val] : m_map)
        if (val == value)
            return key;
    throw std::invalid_argument("Value is not in mapping.");
}

// Returns the value that the provided key maps to
MidiNoteGroup Mapping::operator[](const std::string &key) const
{
    return m_map.at(key);
}

// Returns the key that maps to the provided value
std::string Mapping::at(const MidiNote &value) const
{
    return operator[](value);
}

// Returns the value that the provided key maps to
MidiNoteGroup Mapping::at(const std::string &key) const
{
    return operator[](key);
}

// Print mapping
void Mapping::print() const
{
    unsigned int difference = 0;
    std::cout << m_name << std::endl;
    std::string keyHeader = "Key:", valueHeader = "Value(s):";
    int maxLen = keyHeader.length();
    for (const auto &[key, _] : m_map)
        if (key.length() > maxLen)
            maxLen = key.length();

    std::cout << keyHeader << stringpp::repeat(" ", maxLen - keyHeader.length()) << "  " << valueHeader << std::endl;

    for (const auto &[key, group] : m_map)
    {
        difference = maxLen - key.length();
        std::cout << key << stringpp::repeat(" ", difference) << "  " << group.toString() << std::endl;
    }
}