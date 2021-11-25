#include <cinttypes>

#include "Mappings.h"
#include "Note.h"

uint8_t Mappings::yamahatoi(const Note& note, const int8_t& octave) {
    return 12 * (octave + 2) + (int)note;
}