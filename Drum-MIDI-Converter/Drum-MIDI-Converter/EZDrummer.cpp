#include "Keys.h"
#include "Mappings.h"
#include "SampleGroupTags.h"

Mapping Mappings::Toontrack::getEZDrummerMapping() {

	SampleGroup perc = SampleGroup(Keys::Perc::clap, {
		{Keys::Perc::clap, getMidiNote(Note::C_SHARP, -2)},
		{Keys::Perc::shaker, getMidiNote(Note::D, -2)},
		{Keys::Perc::tambourine, getMidiNote(Note::D_SHARP, -2)}
		});

	SampleGroup cymbal = SampleGroup(Keys::Cymbal::crash1_hit, {
		{Keys::Cymbal::crash1_hit, getMidiNote(Note::G, 2)},
		{Keys::Cymbal::crash2_hit, getMidiNote(Note::C_SHARP, 2)},
		{Keys::Cymbal::crash3_hit, getMidiNote(Note::A, 2)},
		{Keys::Cymbal::crash4_hit, getMidiNote(Note::E, 2)},
		{Keys::Cymbal::crash1_choke, getMidiNote(Note::G_SHARP, 2)},
		{Keys::Cymbal::crash2_choke, getMidiNote(Note::D, 2)},
		{Keys::Cymbal::crash3_choke, getMidiNote(Note::A_SHARP, 2)},
		{Keys::Cymbal::crash4_choke, getMidiNote(Note::F_SHARP, 2)}
		});

	SampleGroup kick = SampleGroup(Keys::Kick::hit, {
		{Keys::Kick::hit, getMidiNote(Note::C, 1)}
		});

	SampleGroup tom = SampleGroup(Keys::Tom::floor1, {
		{Keys::Tom::floor1, getMidiNote(Note::G, 1)},
		{Keys::Tom::floor1_rimshot, getMidiNote(Note::D_SHARP, 4)},
		{Keys::Tom::floor2, getMidiNote(Note::F, 1)},
		{Keys::Tom::floor2_rimshot, getMidiNote(Note::C_SHARP, 4)},
		{Keys::Tom::rack1, getMidiNote(Note::C, 2)},
		{Keys::Tom::rack1_rimshot, getMidiNote(Note::A_SHARP, 4)},
		{Keys::Tom::rack2, getMidiNote(Note::B, 1)},
		{Keys::Tom::rack2_rimshot, getMidiNote(Note::G_SHARP, 4)},
		{Keys::Tom::rack3, getMidiNote(Note::A, 1)},
		{Keys::Tom::rack3_rimshot, getMidiNote(Note::F_SHARP, 4)}
		});

	SampleGroup hat = SampleGroup(Keys::Hat::open0, {
		{Keys::Hat::closed_edge, getMidiNote(Note::A_SHARP, -1)},
		{Keys::Hat::closed_tip, getMidiNote(Note::F_SHARP, -1)},
		{Keys::Hat::loose, getMidiNote(Note::C, 0)},
		{Keys::Hat::open0, getMidiNote(Note::C_SHARP, 0)},
		{Keys::Hat::open1, getMidiNote(Note::D, 0)},
		{Keys::Hat::open2, getMidiNote(Note::C, 3)},
		{Keys::Hat::open3, getMidiNote(Note::F, -1)},
		{Keys::Hat::pedal_close_foot, getMidiNote(Note::A, -1)},
		{Keys::Hat::pedal_splash, getMidiNote(Note::B, -1)},
		{Keys::Hat::seq, getMidiNote(Note::F, 3)},
		{Keys::Hat::tight_edge, getMidiNote(Note::D, 3)},
		{Keys::Hat::tight_tip, getMidiNote(Note::D_SHARP, 3)}
		});

	SampleGroup snare = SampleGroup(Keys::Snare::hit, {
		{Keys::Snare::hit, getMidiNote(Note::D, 1)},
		{Keys::Snare::rimshot, getMidiNote(Note::E, 1)},
		{Keys::Snare::sidestick, getMidiNote(Note::C_SHARP, 1)}
		});

	SampleGroup ride = SampleGroup(Keys::Ride::hit, {
		{Keys::Ride::bell, getMidiNote(Note::F, 2)},
		{Keys::Ride::bow, getMidiNote(Note::D_SHARP, 2)},
		{Keys::Ride::hit, getMidiNote(Note::B, 2)},
		{Keys::Ride::mute, getMidiNote(Note::B, 4)}
		});

	Mapping m = Mapping({
		{SampleGroupTags::kick, kick},
		{SampleGroupTags::perc, perc},
		{SampleGroupTags::cymbal, cymbal},
		{SampleGroupTags::hat, hat},
		{SampleGroupTags::snare, snare},
		{SampleGroupTags::tom, tom},
		{SampleGroupTags::ride, ride}
		});

	return m;
}