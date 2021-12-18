#include <algorithm>
#include <initializer_list>
#include <string>
#include <vector>

#include "./MidiNoteGroup.hpp"

MidiNoteGroup::MidiNoteGroup(const std::initializer_list<MidiNote>& list) {
    for (const auto& note : list)
        _notes.insert(note);
}

MidiNoteGroup::operator int() const {
    return *_notes.begin();
}

void MidiNoteGroup::add(const MidiNote& mn) {
    _notes.insert(mn);
}

std::set<MidiNote> MidiNoteGroup::getSet() const {
    return _notes;
}

bool MidiNoteGroup::contains(const int8_t& mn) const {
    return std::find(_notes.begin(), _notes.end(), mn) != _notes.end();
}

std::string MidiNoteGroup::toString() const {
    std::string s;
    
    for (const auto& note : _notes)
        s += std::to_string((int)note) + ", ";

    s = s.substr(0, s.length() - 2);
    return s;
}