#include "Keys.h"
#include "Mappings.h"

uint8_t Mappings::MandaAudio::getMidiNote(const Note& note, const uint8_t& octave) {
	return octave * 12 + as_integer(note) + 24;
}