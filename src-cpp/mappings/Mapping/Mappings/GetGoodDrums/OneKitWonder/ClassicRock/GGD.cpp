#include "../../../../../SampleTree/Keys.hpp"
#include "../../../../Mapping.hpp"
#include "../../../../Mappings.hpp"
#include "../../../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::OneKitWonder::ClassicRock::getGGDMapping() {
    using namespace Keys;
    return Mapping("GGD OKW Classic Rock - GGD", {
        {Perc::Cowbell::hit, {{Note::C, 4}, {Note::B, 3}}},
        {Perc::sticks, {{Note::B, 4}, {Note::F, 4}}},

        {Cymbal::Hit::Crash::_1, {{Note::A_SHARP, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::B, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::C_SHARP, 3}}},
        {Cymbal::Choke::Crash::_2, {{Note::D, 3}}},
        {Cymbal::Choke::Ride::_1, {{Note::D, 4}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::C_SHARP, 4}}},

        {Tom::Hit::Floor::_1, {{Note::A, 1}}},
        {Tom::Hit::Floor::_2, {{Note::G, 1}, {Note::A_SHARP, 1}}},
        {Tom::Hit::Rack::_1, {{Note::F_SHARP, 1}}},

        {Hat::Hit::Closed::Tip::_1, {{Note::C_SHARP, 2}}},
        {Hat::Hit::Open::_0, {{Note::E, 2}}},
        {Hat::Hit::Open::_1, {{Note::F, 2}}},
        {Hat::Hit::Open::_2, {{Note::A, 2}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::G, 2}}},
        {Hat::Hit::Closed::Edge::_1, {{Note::F_SHARP, 2}}},
        {Hat::Hit::Closed::Tip::_1, {{Note::C, 2}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::_1, {{Note::C_SHARP, 1}}},
        {Snare::Alt::Side::stick, {{Note::E, 1}}},
    });
}