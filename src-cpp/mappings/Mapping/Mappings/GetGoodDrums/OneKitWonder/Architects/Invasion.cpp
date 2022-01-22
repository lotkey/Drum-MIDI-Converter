#include "../../../../../SampleTree/Keys.hpp"
#include "../../../../Mapping.hpp"
#include "../../../../Mappings.hpp"
#include "../../../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::OneKitWonder::Architects::getInvasionMapping() {
    using namespace Keys;
    return Mapping("GGD OKW Architects - Invasion (Default)", {
        {Kick::_1, {{Note::C, 0}}},

        {Snare::Hit::_1, {{Note::D, 0}}},
        {Snare::Alt::Side::stick, {{Note::F_SHARP, 0}}},

        {Tom::Hit::Rack::_1, {{Note::B, 0}}},
        {Tom::Hit::Rack::_2, {{Note::C, 1}}},
        {Tom::Hit::Floor::_1, {{Note::C_SHARP, 1}}},

        {Cymbal::Bell::Ride::_1, {{Note::C_SHARP, 3}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D, 3}}},
        {Cymbal::Hit::Ride::_1, {{Note::D_SHARP, 3}}},
        {Cymbal::Choke::Ride::_1, {{Note::E, 3}}},
        {Cymbal::Hit::Crash::_1, {{Note::E, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::F_SHARP, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::G, 2}}},
        {Cymbal::Hit::Crash::_3, {{Note::A_SHARP, 2}}},
        {Cymbal::Choke::Crash::_3, {{Note::B, 2}}},
        {Cymbal::Hit::China::_1, {{Note::G, 3}}},
        {Cymbal::Choke::China::_1, {{Note::G_SHARP, 3}}},
        {Cymbal::Hit::China::_2, {{Note::F, 3}}},
        {Cymbal::Choke::China::_2, {{Note::F_SHARP, 3}}},
        {Cymbal::Hit::Splash::_1, {{Note::C_SHARP, 4}}},
        {Cymbal::Choke::Splash::_1, {{Note::D, 4}}},

        {Hat::Hit::Closed::Tip::Tight::_1, {{Note::F, 1}}},
        {Hat::Hit::Closed::Edge::Tight::_1, {{Note::F_SHARP, 1}}},
        {Hat::Hit::Closed::Tip::_1, {{Note::G, 1}}},
        {Hat::Hit::Closed::Edge::_1, {{Note::G_SHARP, 1}}},
        {Hat::Hit::Open::_0, {{Note::A, 1}}},
        {Hat::Hit::Open::_1, {{Note::A_SHARP, 1}}},
        {Hat::Hit::Open::_2, {{Note::B, 1}}},
        {Hat::Midi::cc, {{Note::F, 1}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::C, 2}}},
        {Hat::Hit::Open::X::_1, {{Note::F_SHARP, 4}}}
    });
}