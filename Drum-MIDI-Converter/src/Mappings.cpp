#include <cinttypes>

#include "Mappings.hpp"
#include "Note.hpp"

uint8_t Mappings::yamahatoi(const Note& note, const int8_t& octave) {
    return 12 * (octave + 2) + (int)note;
}