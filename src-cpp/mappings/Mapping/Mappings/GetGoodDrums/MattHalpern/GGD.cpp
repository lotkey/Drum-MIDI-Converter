#include "../../../../SampleTree/Keys.hpp"
#include "../../../Mapping.hpp"
#include "../../../Mappings.hpp"
#include "../../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::MattHalpern::getGGDMapping() {
    using namespace Keys;
    return Mapping("GGD Matt Halpern - GGD", {
        {Cymbal::Hit::China::_1, {{Note::B, 3}}},
        {Cymbal::Choke::China::_1, {{Note::C, 4}}},
        {Cymbal::Hit::Crash::Bow::Tip::_1, {{Note::C, 5}}},
        {Cymbal::Hit::Crash::_1, {{Note::A_SHARP, 2}, {Note::C, 3}}},
        {Cymbal::Choke::Crash::_1, {{Note::B, 2}}},
        {Cymbal::Hit::Crash::Bow::_2, {{Note::C_SHARP, 5}}},
        {Cymbal::Hit::Crash::_2, {{Note::C_SHARP, 3}, {Note::D_SHARP, 3}}},
        {Cymbal::Choke::Crash::_2, {{Note::D, 3}}},
        {Cymbal::Hit::Splash::_1, {{Note::F, 4}}},
        {Cymbal::Hit::Stack::_1, {{Note::A_SHARP, 4}, {Note::B, 4}}},
        {Cymbal::Bell::Ride::_1, {{Note::D_SHARP, 4}}},
        {Cymbal::Bell::Ride::Tip::_1, {{Note::D, 4}}},
        {Cymbal::Hit::Ride::Bow::Tip::_1, {{Note::C_SHARP, 4}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::E, 4}}},

        {Tom::Hit::Floor::_1, {{Note::A_SHARP, 1}}},
        {Tom::Rim::Floor::_1, {{Note::A_SHARP, 0}}},
        {Tom::Hit::Rack::_1, {{Note::F_SHARP, 1}}},
        {Tom::Rim::Rack::_1, {{Note::C_SHARP, 1}}},
        {Tom::Hit::Rack::_2, {{Note::G, 1}}},
        {Tom::Rim::Rack::_2, {{Note::C, 1}}},
        {Tom::Hit::Rack::_3, {{Note::A, 1}}},
        {Tom::Rim::Rack::_3, {{Note::B, 0}}},

        {Hat::Hit::Closed::Tip::_1, {{Note::C_SHARP, 2}}},
        {Hat::Hit::Open::Edge::Loose::_1, {{Note::D, 2}}},
        {Hat::Hit::Open::_0, {{Note::D_SHARP, 2}}},
        {Hat::Hit::Open::_1, {{Note::E, 2}}},
        {Hat::Hit::Open::_2, {{Note::F, 2}}},
        {Hat::Hit::Open::_3, {{Note::F_SHARP, 2}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::G, 2}}},
        {Hat::Hit::Closed::Tip::Tight::_1, {{Note::C, 2}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::flam, {{Note::D, 1}}},
        {Snare::Hit::_1, {{Note::C_SHARP, 1}}},
        {Snare::Hit::off, {{Note::F, 1}}},
        {Snare::Hit::ruff, {{Note::D_SHARP, 1}}},
        {Snare::Alt::Side::stick, {{Note::E, 1}}}
    });
}