#ifndef MIDINOTE_H
#define MIDINOTE_H

#include <cinttypes>
#include <map>
#include <tuple>

#include "./Note.hpp"

class MidiNote {
private:
    const uint8_t _value;
public:
    MidiNote(const uint8_t&);
    MidiNote(const Note&, const int8_t&);
    operator uint8_t() const;
    uint8_t value() const;
};

#endif