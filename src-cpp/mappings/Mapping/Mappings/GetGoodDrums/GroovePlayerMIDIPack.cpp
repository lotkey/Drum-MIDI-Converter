#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::getGroovePlayerMIDIPackMapping() {
    using namespace Keys;
    return Mapping("GGD Groove Player MIDI Pack", {
        {Cymbal::Hit::China::_1, {{Note::E, 2}}},
        {Cymbal::Hit::China::_2, {{Note::D, 4}}},
        {Cymbal::Hit::Crash::_1, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::F_SHARP, 3}}},
        {Cymbal::Hit::Crash::_2, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::B, 5}}},
        {Cymbal::Hit::Splash::_1, {{Note::G, 2}}},
        {Cymbal::Hit::Splash::_2, {{Note::E, 3}}},
        {Cymbal::Hit::Stack::_1, {{Note::D_SHARP, 4}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::B, 2}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Hit::Floor::_2, {{Note::F, 1}}},
        {Tom::Hit::Rack::_1, {{Note::D, 2}}},
        {Tom::Hit::Rack::_2, {{Note::C, 2}}},

        {Hat::Closed::Edge::_1, {{Note::F_SHARP, 2}}},
        {Hat::Closed::Tip::_1, {{Note::A_SHARP, -2}}},
        {Hat::Open::_0, {{Note::A_SHARP, 2}}},
        {Hat::Open::_1, {{Note::A_SHARP, 1}}},
        {Hat::Open::_2, {{Note::A_SHARP, 3}}},
        {Hat::Closed::foot, {{Note::G_SHARP, 1}}},
        {Hat::Closed::Edge::tight1, {{Note::F_SHARP, 1}}},
        {Hat::Closed::Tip::tight1, {{Note::D, 3}}},
        {Hat::Open::x, {{Note::G_SHARP, 2}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::flam, {{Note::A, 3}}},
        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Hit::ruff, {{Note::D_SHARP, 1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}}
    });
}