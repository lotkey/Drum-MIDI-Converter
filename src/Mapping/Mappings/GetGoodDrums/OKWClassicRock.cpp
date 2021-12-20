#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::getOKWClassicRockMapping() {
    using namespace Keys;
    return Mapping("GGD OKW Classic Rock", {
        {Perc::Cowbell::hit, {{Note::F, 3}}},
        {Perc::sticks, {{Note::D_SHARP, 4}}},

        {Cymbal::Hit::Crash::_1, {{Note::E, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::A_SHARP, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::B, 2}}},
        {Cymbal::Bell::Ride::_1, {{Note::C_SHARP, 3}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D, 3}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::F_SHARP, 2}}},

        {Tom::Hit::Floor::_1, {{Note::A_SHARP, 0}}},
        {Tom::Hit::Floor::_2, {{Note::B, 0}}},
        {Tom::Hit::Rack::_1, {{Note::A, 0}}},

        {Hat::Open::cc, {{Note::F, -1}}},
        {Hat::Closed::Edge::_1, {{Note::G_SHARP, 1}}},
        {Hat::Closed::Tip::_1, {{Note::G, 1}}},
        {Hat::Open::_0, {{Note::A, 1}}},
        {Hat::Open::_1, {{Note::A_SHARP, 1}}},
        {Hat::Open::_2, {{Note::B, 1}}},
        {Hat::Closed::foot, {{Note::C, 2}}},
        {Hat::Closed::Edge::tight1, {{Note::F_SHARP, 1}}},
        {Hat::Closed::Tip::tight1, {{Note::F, 1}}},

        {Kick::_1, {{Note::C, 0}}},
        
        {Snare::Hit::_1, {{Note::D, 0}}},
        {Snare::Alt::Side::stick, {{Note::F_SHARP, 0}}}
    });
}