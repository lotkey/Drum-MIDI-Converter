#include "Keys.h"
#include "Mappings.h"
#include "SampleGroupTags.h"

Mapping Mappings::GetGoodDrums::getModernAndMassiveMapping() {
	SampleGroup kick = SampleGroup(Keys::Kick::hit, {
		{Keys::Kick::hit, getMidiNote(Note::C, 0)}
		});

	SampleGroup snare = SampleGroup(Keys::Snare::hit, {
		{Keys::Snare::hit, getMidiNote(Note::D, 0)},
		{Keys::Snare::flam, getMidiNote(Note::D_SHARP, 0)},
		{Keys::Snare::ruff, getMidiNote(Note::E, 0)},
		{Keys::Snare::off, getMidiNote(Note::F, 0)},
		{Keys::Snare::sidestick, getMidiNote(Note::F_SHARP, 0)},
		});

	SampleGroup toms = SampleGroup(Keys::Tom::rack1, {
		{Keys::Tom::rack1, getMidiNote(Note::A, 0)},
		{Keys::Tom::floor1, getMidiNote(Note::C_SHARP, 1)},
		{Keys::Tom::floor2, getMidiNote(Note::D_SHARP, 1)},
		});

	SampleGroup hat = SampleGroup(Keys::Hat::open0, {
		{Keys::Hat::tight_edge, getMidiNote(Note::A, 1)},
		{Keys::Hat::ching, getMidiNote(Note::G_SHARP, 1)},
		{Keys::Hat::closed_edge, getMidiNote(Note::B, 1)},
		{Keys::Hat::loose, getMidiNote(Note::C, 2)},
		{Keys::Hat::open0, getMidiNote(Note::F, 2)},
		{Keys::Hat::open1, getMidiNote(Note::F_SHARP, 2)},
		{Keys::Hat::open2, getMidiNote(Note::G_SHARP, 2)},
		{Keys::Hat::open3, getMidiNote(Note::A_SHARP, 2)},
		{Keys::Hat::pedal_close_foot, getMidiNote(Note::G, 1)},
		});

	SampleGroup ride = SampleGroup(Keys::Ride::hit, {
		{Keys::Ride::bell, getMidiNote(Note::D, 4)},
		{Keys::Ride::hit, getMidiNote(Note::C_SHARP, 4)},
		{Keys::Ride::tip, getMidiNote(Note::C, 4)}
		});

	SampleGroup cymbal = SampleGroup(Keys::Cymbal::crash1_hit, {
		{Keys::Cymbal::crash1_hit, getMidiNote(Note::D, 3)},
		{Keys::Cymbal::crash1_choke, getMidiNote(Note::E, 3)},
		{Keys::Cymbal::crash2_hit, getMidiNote(Note::G, 3)},
		{Keys::Cymbal::crash2_choke, getMidiNote(Note::A, 3)},
		{Keys::Cymbal::china1_hit, getMidiNote(Note::E, 4)},
		{Keys::Cymbal::china1_choke, getMidiNote(Note::F, 4)},
		{Keys::Cymbal::splash1_hit, getMidiNote(Note::B, 4)},
		{Keys::Cymbal::splash1_choke, getMidiNote(Note::A_SHARP, 4)}
		});

	Mapping m = Mapping({
		{SampleGroupTags::kick, kick},
		{SampleGroupTags::snare, snare},
		{SampleGroupTags::tom, toms},
		{SampleGroupTags::ride, ride},
		{SampleGroupTags::hat, hat},
		{SampleGroupTags::cymbal, cymbal}
		});

	return m;
}