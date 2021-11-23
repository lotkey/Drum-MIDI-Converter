#ifndef MAPPINGS_H
#define MAPPINGS_H

#include <stdint.h>

#include "Mapping.h"
#include "Note.h"

namespace Mappings {

	class GetGoodDrums {
	private:
		static uint8_t getMidiNote(const Note& note, const uint8_t& octave);
	public:
		static Mapping getModernAndMassiveMapping();
		static Mapping getInvasionMapping();
	};

	class MandaAudio {
	private:
		static uint8_t getMidiNote(const Note& note, const uint8_t& octave);
	public:
		static Mapping getMTPowerDrumKit2Mapping();
	};

	class Toontrack {
	private:
		static uint8_t getMidiNote(const Note& note, const uint8_t& octave);
	public:
		static Mapping getEZDrummerMapping();
	};

}

#endif