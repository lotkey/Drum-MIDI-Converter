#include "Mappings.h"
#include "Note.h"

uint8_t Mappings::Toontrack::getMidiNote(const Note& note, const uint8_t& octave) {
	return octave * 12 + as_integer(note) + 24;
}