#pragma once

#include "./MidiNote.hpp"

#include <initializer_list>
#include <set>
#include <string>

// Group of MIDI notes
class MidiNoteGroup
{
public:
    MidiNoteGroup(const std::initializer_list<MidiNote> &);
    std::set<MidiNote> getSet() const;
    operator int() const;
    void add(const MidiNote &);
    bool contains(const int8_t &) const;
    std::string toString() const;

private:
    std::set<MidiNote> m_notes;
};