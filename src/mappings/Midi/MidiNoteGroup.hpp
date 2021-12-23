#ifndef MIDINOTEGROUP_HPP
#define MIDINOTEGROUP_HPP

#include <initializer_list>
#include <set>
#include <string>

#include "./MidiNote.hpp"

// Group of MIDI notes
class MidiNoteGroup {
private:
    std::set<MidiNote> _notes;
public:
    MidiNoteGroup(const std::initializer_list<MidiNote>&);
    std::set<MidiNote> getSet() const;
    operator int() const;
    void add(const MidiNote&);
    bool contains(const int8_t&) const;
    std::string toString() const;
};

#endif