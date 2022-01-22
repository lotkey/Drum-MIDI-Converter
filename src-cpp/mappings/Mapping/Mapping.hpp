#pragma once

#include <cinttypes>
#include <map>
#include <string>
#include <vector>

#include "../Midi/MidiNote.hpp"
#include "../Midi/MidiNoteGroup.hpp"

#include "../../midifile/include/MidiFile.h"

// Maps string -> MIDI note group
class Mapping {
private:
    const std::string _name;
    std::map<std::string, MidiNoteGroup> _map;
public:
    Mapping();
    Mapping(const std::string&);
    Mapping(const std::string&, const std::map<std::string, MidiNoteGroup>&);
    Mapping(const std::string&, const Mapping&);
    std::string name() const;
    void insert(const std::string&, const MidiNoteGroup&);
    void insert(const std::map<std::string, MidiNoteGroup>&);
    bool containsKey(const std::string&) const;
    bool containsValue(const MidiNote&) const;
    double getPercentMatch(const smf::MidiFile&) const;
    std::vector<std::string> getKeys() const;
    MidiNoteGroup operator[](const std::string&) const;
    std::string operator[](const MidiNote&) const;
    MidiNoteGroup at(const std::string&) const;
    std::string at(const MidiNote&) const;
    void print() const;
};