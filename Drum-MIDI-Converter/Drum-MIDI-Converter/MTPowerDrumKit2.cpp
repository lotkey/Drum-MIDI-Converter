#include "Keys.h"
#include "Mappings.h"
#include "SampleGroupTags.h"

Mapping Mappings::MandaAudio::getMTPowerDrumKit2Mapping() {
	SampleGroup kick = SampleGroup(Keys::Kick::hit, {
		{Keys::Kick::hit, getMidiNote(Note::C, 1)}
		});

	SampleGroup snare = SampleGroup(Keys::Snare::hit, {
		{Keys::Snare::hit, getMidiNote(Note::D, 1)},
		{Keys::Snare::sidestick, getMidiNote(Note::C_SHARP, 1)}
		});

	SampleGroup hat = SampleGroup(Keys::Hat::open0, {
		{Keys::Hat::open0, getMidiNote(Note::A_SHARP, 1)},
		{Keys::Hat::loose, getMidiNote(Note::G_SHARP, 1)},
		{Keys::Hat::closed_edge, getMidiNote(Note::F_SHARP, 1)},
		{Keys::Hat::pedal_close_foot, getMidiNote(Note::F, 3)}
		});

	SampleGroup toms = SampleGroup(Keys::Tom::floor1, {
		{Keys::Tom::rack1, getMidiNote(Note::C, 2)},
		{Keys::Tom::floor1, getMidiNote(Note::A, 1)},
		{Keys::Tom::floor2, getMidiNote(Note::F, 1)}
		});

	SampleGroup ride = SampleGroup(Keys::Ride::hit, {
		{Keys::Ride::hit, getMidiNote(Note::D_SHARP, 2)},
		{Keys::Ride::bell, getMidiNote(Note::F, 2)}
		});

	SampleGroup cymbal = SampleGroup(Keys::Cymbal::crash1_hit, {
		{Keys::Cymbal::crash1_hit, getMidiNote(Note::C_SHARP, 2)},
		{Keys::Cymbal::crash1_choke, getMidiNote(Note::A_SHARP, 2)},
		{Keys::Cymbal::crash2_hit, getMidiNote(Note::A, 2)},
		{Keys::Cymbal::china1_hit, getMidiNote(Note::E, 2)},
		{Keys::Cymbal::splash1_hit, getMidiNote(Note::G, 2)}
		});

	Mapping m = Mapping({
		{SampleGroupTags::kick, kick},
		{SampleGroupTags::snare, snare},
		{SampleGroupTags::hat, hat},
		{SampleGroupTags::tom, toms},
		{SampleGroupTags::ride, ride},
		{SampleGroupTags::cymbal, cymbal}
		});

	return m;
}