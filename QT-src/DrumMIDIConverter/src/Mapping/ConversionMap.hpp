#ifndef CONVERSIONMAP_HPP
#define CONVERSIONMAP_HPP

#include <cinttypes>
#include <map>
#include <optional>
#include <string>

#include "../Mapping/Mapping.hpp"
#include "../Midi/MidiNote.hpp"
#include "../Midi/MidiNoteGroup.hpp"

// Mapping of MIDI note group -> MIDI note
// Where the key is the note value(s) from the mapping to convert from,
// and the value is from the mapping to convert to.
class ConversionMap {
private:
    const std::string _mapFrom, _mapTo;
    std::map<MidiNote, MidiNote> _map;
public:
    ConversionMap(const std::string&, const std::string&);
    void insert(const MidiNoteGroup&, const uint8_t&);
    bool containsKey(const MidiNote&) const;
    bool containsValue(const MidiNote&) const;
    MidiNote operator[](const MidiNote&) const;
    MidiNote at(const MidiNote&) const;
    std::optional<MidiNote> keyFromValue(const MidiNote&) const;
    void print() const;
};

#endif