#include "../../../../../SampleTree/Keys.hpp"
#include "../../../../Mapping.hpp"
#include "../../../../Mappings.hpp"
#include "../../../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::OneKitWonder::ClassicRock::getGMMapping() {
    using namespace Keys;
    return Mapping("GGD OKW Classic Rock - GM", {
        {Perc::Cowbell::hit, {{Note::G, 2}}},
        {Perc::sticks, {{Note::E, 2}}},

        {Cymbal::Hit::Crash::_1, {{Note::C_SHARP, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::A, 2}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D_SHARP, 2}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Hit::Floor::_2, {{Note::C, 2}, {Note::F, 1}}},
        {Tom::Hit::Rack::_1, {{Note::D, 2}}},

        {Hat::Hit::Closed::Tip::_1, {{Note::F_SHARP, 2}}},
        {Hat::Hit::Open::_0, {{Note::A_SHARP, 1}}},
        {Hat::Hit::Open::_1, {{Note::A_SHARP, 2}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::G_SHARP, 1}}},
        {Hat::Hit::Closed::Tip::Tight::_1, {{Note::F_SHARP, 1}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::_1, {{Note::D, 1}}}
    });
}