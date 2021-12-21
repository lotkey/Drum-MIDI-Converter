#include "../Mapping/Mappings.hpp"
#include "./MidiNote.hpp"

// Construct from integer
MidiNote::MidiNote(const uint8_t& value) 
    :_value(value)
{ }

// Construct from a note and octave
MidiNote::MidiNote(const Note& note, const int8_t& octave) 
    : _value(Mappings::yamahatoi(note, octave))
{ }

// Cast as integer
MidiNote::operator uint8_t() const {
    return _value;
}

// Returns integer value
uint8_t MidiNote::value() const {
    return _value;
}