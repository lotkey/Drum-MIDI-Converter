#include <algorithm>
#include <initializer_list>
#include <string>
#include <vector>

#include "./MidiNoteGroup.hpp"

// Construct from initializer list
MidiNoteGroup::MidiNoteGroup(const std::initializer_list<MidiNote>& list) {
    for (const auto& note : list)
        _notes.insert(note);
}

// Cast as integer
MidiNoteGroup::operator int() const {
    return *_notes.begin();
}

// Add a note to the group
void MidiNoteGroup::add(const MidiNote& mn) {
    _notes.insert(mn);
}

// Get the set of notes
std::set<MidiNote> MidiNoteGroup::getSet() const {
    return _notes;
}

// Boolean predicate, true if the group contains the note
bool MidiNoteGroup::contains(const int8_t& mn) const {
    return std::find(_notes.begin(), _notes.end(), mn) != _notes.end();
}

// Converts to string
std::string MidiNoteGroup::toString() const {
    std::string s;
    
    for (const auto& note : _notes)
        s += std::to_string((int)note) + ", ";

    s = s.substr(0, s.length() - 2);
    return s;
}