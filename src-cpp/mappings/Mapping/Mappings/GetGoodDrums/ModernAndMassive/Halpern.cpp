#include "../../../../SampleTree/Keys.hpp"
#include "../../../Mapping.hpp"
#include "../../../Mappings.hpp"
#include "../../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::ModernAndMassive::getHalpernMapping() {
    using namespace Keys;
    return Mapping("GGD Modern & Massive - Halpern (Default)", {
        {Kick::_1, {{Note::C, 0}}},
        
        {Snare::Hit::flam, {{Note::D_SHARP, 0}}},
        {Snare::Hit::_1, {{Note::D, 0}}},
        {Snare::Hit::ruff, {{Note::E, 0}}},
        {Snare::Alt::Side::stick, {{Note::F_SHARP, 0}}},
        {Snare::Hit::off, {{Note::F, 0}}},

        {Tom::Hit::Rack::_1, {{Note::A, 0}}},
        {Tom::Hit::Floor::_1, {{Note::C_SHARP, 1}, {Note::B, 0}}},
        {Tom::Hit::Floor::_2, {{Note::D_SHARP, 1}}},

        {Hat::Hit::Closed::Tight::_1, {{Note::A, 1}}},
        {Hat::Hit::Open::Ching::_1, {{Note::G_SHARP, 1}}},
        {Hat::Hit::Closed::_0, {{Note::B, 1}}},
        {Hat::Hit::Closed::Loose::_1, {{Note::C, 2}}},
        {Hat::Hit::Open::_0, {{Note::F, 2}}},
        {Hat::Hit::Open::_1, {{Note::F_SHARP, 2}}},
        {Hat::Hit::Open::_2, {{Note::G_SHARP, 2}}},
        {Hat::Hit::Open::_3, {{Note::A_SHARP, 2}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::G, 1}}},

        {Cymbal::Bell::Ride::_1, {{Note::D, 4}}},
        {Cymbal::Hit::Ride::_1, {{Note::C_SHARP, 4}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::C, 4}}},
        {Cymbal::Hit::Crash::_1, {{Note::D, 3}}},
        {Cymbal::Choke::Crash::_1, {{Note::E, 3}}},
        {Cymbal::Hit::Crash::_2, {{Note::G, 3}}},
        {Cymbal::Choke::Crash::_2, {{Note::A, 3}}},
        {Cymbal::Hit::China::_2, {{Note::E, 4}}},
        {Cymbal::Choke::China::_1, {{Note::F, 4}}},
        {Cymbal::Choke::Splash::_1, {{Note::A_SHARP, 4}}},
        {Cymbal::Hit::Splash::_2, {{Note::B, 4}}}
    });
}