#include "../../../../../SampleTree/Keys.hpp"
#include "../../../../Mapping.hpp"
#include "../../../../Mappings.hpp"
#include "../../../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::OneKitWonder::ClassicRock::getHalpernMapping() {
    using namespace Keys;
    return Mapping("GGD OKW Classic Rock - Halpern", {
        {Perc::Cowbell::hit, {{Note::F, 4}, {Note::E, 4}}},
        {Perc::sticks, {{Note::A_SHARP, 4}, {Note::B, 4}}},

        {Cymbal::Hit::Crash::_1, {{Note::D, 3}}},
        {Cymbal::Choke::Crash::_1, {{Note::E, 3}}},
        {Cymbal::Hit::Crash::_2, {{Note::G, 3}}},
        {Cymbal::Choke::Crash::_2, {{Note::A, 3}}},
        {Cymbal::Bell::Ride::_1, {{Note::D, 4}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::C, 4}}},

        {Tom::Hit::Floor::_1, {{Note::C_SHARP, 1}}},
        {Tom::Hit::Floor::_2, {{Note::B, 0}, {Note::D_SHARP, 1}}},
        {Tom::Hit::Rack::_1, {{Note::A, 0}}},

        {Hat::Hit::Closed::Edge::_1, {{Note::C, 2}}},
        {Hat::Hit::Closed::Tip::_1, {{Note::B, 1}}},
        {Hat::Hit::Open::_0, {{Note::F, 2}}},
        {Hat::Hit::Open::_1, {{Note::F_SHARP, 2}}},
        {Hat::Hit::Open::_2, {{Note::G_SHARP, 2}, {Note::G_SHARP, 1}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::G, 1}}},
        {Hat::Hit::Closed::Edge::Tight::_1, {{Note::A_SHARP, 2}}},
        {Hat::Hit::Closed::Tip::Tight::_1, {{Note::A, 1}}},

        {Kick::_1, {{Note::C, 0}}},

        {Snare::Hit::_1, {{Note::D, 0}}},
        {Snare::Alt::Side::stick, {{Note::F_SHARP, 0}}}
    });
}