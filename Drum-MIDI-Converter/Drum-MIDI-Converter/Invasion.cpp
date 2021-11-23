#include "Keys.h"
#include "Mappings.h"
#include "SampleGroupTags.h"

Mapping Mappings::GetGoodDrums::getInvasionMapping() {
	SampleGroup cymbal = SampleGroup(Keys::Cymbal::crash1_hit, {
		{Keys::Cymbal::bell1, getMidiNote(Note::G, 4)},
		{Keys::Cymbal::bell2, getMidiNote(Note::G_SHARP, 4)},
		{Keys::Cymbal::china1_hit, getMidiNote(Note::F, 3)},
		{Keys::Cymbal::china1_choke, getMidiNote(Note::F_SHARP, 3)},
		{Keys::Cymbal::china2_hit, getMidiNote(Note::G, 3)},
		{Keys::Cymbal::china2_choke, getMidiNote(Note::G_SHARP, 3)},
		{Keys::Cymbal::crash1_hit, getMidiNote(Note::E, 2)},
		{Keys::Cymbal::crash1_choke, getMidiNote(Note::F, 2)},
		{Keys::Cymbal::crash2_hit, getMidiNote(Note::F_SHARP, 2)},
		{Keys::Cymbal::crash2_choke, getMidiNote(Note::G, 2)},
		{Keys::Cymbal::crash3_hit, getMidiNote(Note::G_SHARP, 2)},
		{Keys::Cymbal::crash3_choke, getMidiNote(Note::A, 2)},
		{Keys::Cymbal::crash4_hit, getMidiNote(Note::A_SHARP, 2)},
		{Keys::Cymbal::crash4_choke, getMidiNote(Note::B, 3)},
		{Keys::Cymbal::splash1_hit, getMidiNote(Note::C_SHARP, 4)},
		{Keys::Cymbal::splash1_choke, getMidiNote(Note::D, 4)},
		{Keys::Cymbal::splash2_hit, getMidiNote(Note::D_SHARP, 4)},
		{Keys::Cymbal::splash2_choke, getMidiNote(Note::E, 4)},
		{Keys::Cymbal::stack1_hit, getMidiNote(Note::F_SHARP, 4)}
		});
}