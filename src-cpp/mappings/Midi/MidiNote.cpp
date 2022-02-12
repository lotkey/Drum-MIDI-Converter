#include "./MidiNote.hpp"
#include "../Mapping/Mappings.hpp"

// Construct from integer
MidiNote::MidiNote(const uint8_t &value)
    : m_value(value)
{
}

// Construct from a note and octave
MidiNote::MidiNote(const Note &note, const int8_t &octave)
    : m_value(Mappings::yamahatoi(note, octave))
{
}

// Cast as integer
MidiNote::operator uint8_t() const
{
    return m_value;
}

// Returns integer value
uint8_t MidiNote::value() const
{
    return m_value;
}