#include <cinttypes>

#include "./Mappings.hpp"
#include "../Midi/Note.hpp"

uint8_t Mappings::yamahatoi(const Note& note, const int8_t& octave) {
    return 12 * (octave + 2) + (int)note;
}

uint8_t Mappings::yamahatoi(const std::pair<Note, int8_t>& pair) {
    return 12 * (pair.second + 2) + (int)pair.first;
}