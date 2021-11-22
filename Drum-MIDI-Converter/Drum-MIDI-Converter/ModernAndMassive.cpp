#include "Keys.h"
#include "Mappings.h"
#include "SampleGroupTags.h"

Mapping Mappings::GGD::getModernAndMassiveMapping() {
	SampleGroup kick = SampleGroup(Keys::Kick, {
		{Keys::Kick, getMidiNote(Note::C, 0)}
		});

	SampleGroup snare = SampleGroup(Keys::Snare::hit, {
		{Keys::Snare::hit, getMidiNote(Note::D, 0)},
		{Keys::Snare::flam, getMidiNote(Note::D_SHARP, 0)},
		{Keys::Snare::ruff, getMidiNote(Note::E, 0)},
		{Keys::Snare::off, getMidiNote(Note::F, 0)},
		{Keys::Snare::sidestick, getMidiNote(Note::F_SHARP, 0)},
		});

	SampleGroup toms = SampleGroup(Keys::Tom::rack, {
		{Keys::Tom::rack, getMidiNote(Note::A, 0)},
		{Keys::Tom::floor1, getMidiNote(Note::C_SHARP, 1)},
		{Keys::Tom::floor2, getMidiNote(Note::D_SHARP, 1)},
		});

	SampleGroup hat = SampleGroup(Keys::Hat::open0, {
		{Keys::Hat::tight, getMidiNote(Note::A, 1)},
		{Keys::Hat::ching, getMidiNote(Note::G_SHARP, 1)},
		{Keys::Hat::closed, getMidiNote(Note::B, 1)},
		{Keys::Hat::closed_loose, getMidiNote(Note::C, 2)},
		{Keys::Hat::open0, getMidiNote(Note::F, 2)},
		{Keys::Hat::open1, getMidiNote(Note::F_SHARP, 2)},
		{Keys::Hat::open2, getMidiNote(Note::G_SHARP, 2)},
		{Keys::Hat::open3, getMidiNote(Note::A_SHARP, 2)},
		{Keys::Hat::pedal_chick, getMidiNote(Note::G, 1)},
		});

	SampleGroup ride = SampleGroup(Keys::Ride::hit, {
		{Keys::Ride::bell, getMidiNote(Note::D, 4)},
		{Keys::Ride::hit, getMidiNote(Note::C_SHARP, 4)},
		{Keys::Ride::tip, getMidiNote(Note::C, 4)}
		});

	SampleGroup crash = SampleGroup(Keys::Crash::L::hit, {
		{Keys::Crash::L::hit, getMidiNote(Note::D, 3)},
		{Keys::Crash::L::choke, getMidiNote(Note::E, 3)},
		{Keys::Crash::R::hit, getMidiNote(Note::G, 3)},
		{Keys::Crash::R::choke, getMidiNote(Note::A, 3)}
		});

	SampleGroup china = SampleGroup(Keys::China::hit, {
		{Keys::China::hit, getMidiNote(Note::E, 4)},
		{Keys::China::choke, getMidiNote(Note::F, 4)}
		});

	SampleGroup splash = SampleGroup(Keys::Splash::hit, {
		{Keys::Splash::hit, getMidiNote(Note::B, 4)},
		{Keys::Splash::choke, getMidiNote(Note::A_SHARP, 4)}
		});

	Mapping m = Mapping({
		{SampleGroupTags::kick, kick},
		{SampleGroupTags::snare, snare},
		{SampleGroupTags::tom, toms},
		{SampleGroupTags::ride, ride},
		{SampleGroupTags::hat, hat},
		{SampleGroupTags::crash, crash},
		{SampleGroupTags::china, china},
		{SampleGroupTags::splash, splash}
		});

	return m;
}