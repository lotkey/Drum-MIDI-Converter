#pragma once

#include "./Note.hpp"

#include <cinttypes>
#include <map>
#include <tuple>

// Class for converting MIDI notes to/from integers
class MidiNote
{
public:
    MidiNote(const uint8_t &);
    MidiNote(const Note &, const int8_t &);
    operator uint8_t() const;
    uint8_t value() const;

private:
    const uint8_t m_value;
};