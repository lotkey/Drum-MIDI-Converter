#include "Mappings.hpp"
#include "MidiNote.hpp"

MidiNote::MidiNote(const Note& note, const int8_t& octave) 
    : _value(Mappings::yamahatoi(note, octave))
{ }

MidiNote::operator uint8_t() const {
    return _value;
}

uint8_t MidiNote::value() const {
    return _value;
}