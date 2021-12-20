#include <cinttypes>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::XLNAudio::getAddictiveDrums2Mapping() {
    using namespace Keys;
    return Mapping("XLN Audio Addictive Drums 2", {
        {Perc::Cowbell::hit, {{Note::B, 1}}},
        {Perc::sticks, {{Note::D_SHARP, 4}}},

        {Cymbal::Hit::China::_1, {{Note::G, 5}}},
        {Cymbal::Choke::China::_1, {{Note::G_SHARP, 5}}},
        {Cymbal::Hit::Crash::_1, {{Note::F, 4}, {Note::A_SHARP, 1}}},
        {Cymbal::Choke::Crash::_1, {{Note::F_SHARP, 4}}},
        {Cymbal::Hit::Crash::_2, {{Note::G, 4}}},
        {Cymbal::Choke::Crash::_2, {{Note::G_SHARP, 4}}},
        {Cymbal::Hit::Crash::_3, {{Note::A, 4}}},
        {Cymbal::Choke::Crash::_3, {{Note::A_SHARP, 4}}},
        {Cymbal::Hit::Crash::_4, {{Note::F, 5}}},
        {Cymbal::Choke::Crash::_4, {{Note::F_SHARP, 5}}},
        {Cymbal::Hit::Crash::_5, {{Note::A, 5}}},
        {Cymbal::Choke::Crash::_5, {{Note::A_SHARP, 5}}},
        {Cymbal::Bell::Ride::_1, {{Note::C_SHARP, 3}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D, 3}}},
        {Cymbal::Hit::Ride::Bow::Tip::_1, {{Note::A, 1}, {Note::C, 3}}},
        {Cymbal::Choke::Ride::_1, {{Note::D_SHARP, 3}}},
        {Cymbal::Bell::Ride::_2, {{Note::C_SHARP, 5}}},
        {Cymbal::Hit::Ride::Bow::_2, {{Note::D, 5}}},
        {Cymbal::Hit::Ride::Bow::Tip::_2, {{Note::C, 5}}},
        {Cymbal::Choke::Ride::_2, {{Note::D_SHARP, 5}}},

        {Tom::Hit::Floor::_1, {{Note::F, 3}}},
        {Tom::Rimshot::Floor::_1, {{Note::F_SHARP, 3}}},
        {Tom::Hit::Rack::_1, {{Note::F, 3}}},
        {Tom::Rimshot::Rack::_1, {{Note::F_SHARP, 3}}},
        {Tom::Hit::Rack::_2, {{Note::A, 3}}},
        {Tom::Rimshot::Rack::_2, {{Note::A_SHARP, 3}}},
        {Tom::Hit::Rack::_3, {{Note::G, 3}}},
        {Tom::Rimshot::Rack::_3, {{Note::G_SHARP, 3}}},

        {Hat::Closed::Bell::_1, {{Note::F, 2}}},
        {Hat::Closed::Edge::_1, {{Note::E, 2}}},
        {Hat::Closed::Tip::_1, {{Note::D_SHARP, 2}}},
        {Hat::Open::loose, {{Note::F_SHARP, 2}}},
        {Hat::Open::_0, {{Note::G, 2}}},
        {Hat::Open::Bell::_0, {{Note::A_SHARP, 2}}},
        {Hat::Open::_1, {{Note::G_SHARP, 2}}},
        {Hat::Open::_2, {{Note::A, 2}}},
        {Hat::Closed::foot, {{Note::C, 2}}},
        {Hat::Open::pedal_splash, {{Note::B, 2}}},
        {Hat::Closed::Edge::tight1, {{Note::D, 2}}},
        {Hat::Closed::Tip::tight1, {{Note::C_SHARP, 2}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::_1, {{Note::D, 1}, {Note::E, 1}, {Note::G, 1}}},
        {Snare::Hit::electric, {{Note::F, 6}}},
        {Snare::Alt::Rim::_1, {{Note::G_SHARP, 1}}},
        {Snare::Alt::Rim::Shot::_1, {{Note::C_SHARP, 1}}},
        {Snare::Alt::Side::stick, {{Note::F_SHARP, 1}}}
    });
}