#ifndef CONVERSIONMAP_HPP
#define CONVERSIONMAP_HPP

#include <cinttypes>
#include <map>
#include <optional>
#include <string>

#include "../Mapping/Mapping.hpp"
#include "../Midi/MidiNote.hpp"
#include "../Midi/MidiNoteGroup.hpp"

class ConversionMap {
private:
    const std::string _mapFrom, _mapTo;
    std::map<MidiNoteGroup, MidiNote> _map;
public:
    ConversionMap(const std::string&, const std::string&);
    ConversionMap(const std::string&, const std::string&, const std::map<MidiNoteGroup, MidiNote>&);
    void insert(const MidiNoteGroup&, const uint8_t&);
    bool containsKey(const MidiNote&) const;
    bool containsValue(const MidiNote&) const;
    MidiNote operator[](const MidiNote&) const;
    MidiNote at(const MidiNote&) const;
    std::optional<MidiNoteGroup> keyFromValue(const MidiNote&) const;
    void print() const;
};

#endif