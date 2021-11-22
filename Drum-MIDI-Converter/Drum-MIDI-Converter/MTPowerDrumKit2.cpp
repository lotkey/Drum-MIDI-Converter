#include "Keys.h"
#include "Mappings.h"
#include "SampleGroupTags.h"

Mapping Mappings::MandaAudio::getMTPowerDrumKit2Mapping() {
	SampleGroup kick = SampleGroup(Keys::Kick, {
		{Keys::Kick, getMidiNote(Note::C, 1)}
		});

	SampleGroup snare = SampleGroup(Keys::Snare::hit, {
		{Keys::Snare::hit, getMidiNote(Note::D, 1)},
		{Keys::Snare::sidestick, getMidiNote(Note::C_SHARP, 1)}
		});

	SampleGroup hat = SampleGroup(Keys::Hat::open0, {
		{Keys::Hat::open0, getMidiNote(Note::A_SHARP, 1)},
		{Keys::Hat::closed_loose, getMidiNote(Note::G_SHARP, 1)},
		{Keys::Hat::closed, getMidiNote(Note::F_SHARP, 1)},
		{Keys::Hat::pedal_chick, getMidiNote(Note::F, 3)}
		});

	SampleGroup toms = SampleGroup(Keys::Tom::floor1, {
		{Keys::Tom::rack, getMidiNote(Note::C, 2)},
		{Keys::Tom::floor1, getMidiNote(Note::A, 1)},
		{Keys::Tom::floor2, getMidiNote(Note::F, 1)}
		});

	SampleGroup ride = SampleGroup(Keys::Ride::hit, {
		{Keys::Ride::hit, getMidiNote(Note::D_SHARP, 2)},
		{Keys::Ride::bell, getMidiNote(Note::F, 2)}
		});

	SampleGroup crash = SampleGroup(Keys::Crash::L::hit, {
		{Keys::Crash::L::hit, getMidiNote(Note::C_SHARP, 2)},
		{Keys::Crash::R::hit, getMidiNote(Note::A, 2)},
		{Keys::Crash::R::choke, getMidiNote(Note::A_SHARP, 2)}
		});

	SampleGroup china = SampleGroup(Keys::China::hit, {
		{Keys::China::hit, getMidiNote(Note::E, 2)}
		});

	SampleGroup splash = SampleGroup(Keys::Splash::hit, {
		{Keys::Splash::hit, getMidiNote(Note::G, 2)}
		});

	Mapping m = Mapping({
		{SampleGroupTags::kick, kick},
		{SampleGroupTags::snare, snare},
		{SampleGroupTags::hat, hat},
		{SampleGroupTags::tom, toms},
		{SampleGroupTags::ride, ride},
		{SampleGroupTags::crash, crash},
		{SampleGroupTags::china, china},
		{SampleGroupTags::splash, splash}
		});

	return m;
}