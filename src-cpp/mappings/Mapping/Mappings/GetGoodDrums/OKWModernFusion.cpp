#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::getOKWModernFusionMapping() {
    using namespace Keys;
    return Mapping("GGD OKW Modern Fusion", {
        {Cymbal::Hit::China::_1, {{Note::F, 3}}},
        {Cymbal::Choke::China::_1, {{Note::F_SHARP, 3}}},
        {Cymbal::Hit::Crash::_1, {{Note::E, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::F_SHARP, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::G, 2}}},
        {Cymbal::Hit::Splash::_1, {{Note::C_SHARP, 4}}},
        {Cymbal::Choke::Splash::_1, {{Note::D, 4}}},
        {Cymbal::Hit::Stack::_1, {{Note::F_SHARP, 4}}},
        {Cymbal::Bell::Ride::_1, {{Note::C_SHARP, 3}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D, 3}}},

        {Tom::Hit::Floor::_1, {{Note::B, 0}}},
        {Tom::Hit::Rack::_1, {{Note::A, 0}}},
        {Tom::Hit::Rack::_2, {{Note::A_SHARP, 0}}},

        {Hat::Open::cc, {{Note::F, -1}}},
        {Hat::Closed::Edge::_1, {{Note::G_SHARP, 1}}},
        {Hat::Closed::Tip::_1, {{Note::G, 1}}},
        {Hat::Open::_0, {{Note::A, 1}}},
        {Hat::Open::_1, {{Note::A_SHARP, 1}}},
        {Hat::Open::_2, {{Note::B, 1}}},
        {Hat::Closed::foot, {{Note::C, 2}}},
        {Hat::Closed::Edge::_1, {{Note::F_SHARP, 1}}},
        {Hat::Closed::Tip::_1, {{Note::F, 1}}},

        {Kick::_1, {{Note::C, 0}}},

        {Snare::Hit::_1, {{Note::D, 0}}},
        {Snare::Alt::Side::stick, {{Note::F_SHARP, 0}}}
    });
}