#include <cinttypes>

#include "./Mappings.hpp"
#include "../Midi/Note.hpp"

// Converts from Yamaha standard to integer
uint8_t Mappings::yamahatoi(const Note& note, const int8_t& octave) {
    return 12 * (octave + 2) + (int)note;
}