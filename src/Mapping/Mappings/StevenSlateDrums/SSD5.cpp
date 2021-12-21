#include <cinttypes>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::StevenSlateDrums::getSSD5Mapping() {
    using namespace Keys;
    return Mapping("Steven Slate Drums", {
        {Cymbal::Hit::China::Bow::Tip::_1, {{Note::A, 5}}},
        {Cymbal::Hit::Crash::Bow::Tip::_1, {{Note::G_SHARP, 5}}},
        {Cymbal::Hit::Crash::Bow::Tip::_2, {{Note::G, 5}}},
        {Cymbal::Hit::Splash::Tip::_1, {{Note::F_SHARP, 5}}},

        {Perc::Tambourine::hit, {{Note::G, 4}}},
        {Perc::Tambourine::down, {{Note::F_SHARP, 4}}},
        {Perc::Tambourine::up, {{Note::F, 4}}},
        {Perc::clap, {{Note::E, 4}}},
        {Perc::Cowbell::tip, {{Note::D_SHARP, 4}}},
        {Perc::Cowbell::shank, {{Note::D, 4}}},
    
        {Hat::Open::pedal_splash, {{Note::C_SHARP, 4}}},
        {Hat::Closed::foot, {{Note::C, 4}, {Note::G_SHARP, 1}}},
        {Hat::Open::Tip::_0, {{Note::A, 3}}},
        {Hat::Open::Tip::_1, {{Note::A_SHARP, 3}}},
        {Hat::Open::Tip::_2, {{Note::B, 3}}},
        {Hat::Open::Tip::loose1, {{Note::G_SHARP, 3}}},
        {Hat::Closed::Tip::_1, {{Note::G, 3}, {Note::F_SHARP, 1}}},
        {Hat::Closed::Tip::tight1, {{Note::F_SHARP, 3}}},
        {Hat::Open::Shank::_2, {{Note::F, 3}}},
        {Hat::Open::Shank::_1, {{Note::E, 3}}},
        {Hat::Open::Shank::_0, {{Note::D_SHARP, 3}}},
        {Hat::Open::Shank::loose1, {{Note::D, 3}}},
        {Hat::Closed::Shank::_1, {{Note::C_SHARP, 3}, {Note::A_SHARP, -1}}},
        {Hat::Closed::Shank::tight1, {{Note::C, 3}}},
        {Hat::Open::cc, {{Note::A_SHARP, 1}, {Note::D, 0}}},

        {Cymbal::Hit::Ride::Edge::_1, {{Note::B, 2}}},
        {Cymbal::Choke::Ride::_1, {{Note::A_SHARP, 2}}},
        {Cymbal::Hit::Crash::_1, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::G_SHARP, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::G, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::F_SHARP, 2}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::E, 2}}},
        {Cymbal::Hit::Ride::Bow::Tip::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::Splash::_1, {{Note::D, 2}}},
        {Cymbal::Choke::Splash::_1, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::China::_1, {{Note::G_SHARP, 0}}},
        {Cymbal::Hit::China::_1, {{Note::G, 0}}},

        {Tom::Hit::Rack::_1, {{Note::C, 2}}},
        {Tom::Hit::Rack::_2, {{Note::B, 1}}},
        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Hit::Floor::_2, {{Note::F, 1}}},
        {Tom::Rimshot::Rack::_1, {{Note::G, -1}}},
        {Tom::Rimshot::Rack::_2, {{Note::F, -1}}},
        {Tom::Rimshot::Floor::_1, {{Note::D, -1}}},
        {Tom::Rimshot::Floor::_2, {{Note::C, -1}}},

        {Snare::Alt::Rim::Shot::_1, {{Note::E, 1}}},
        {Snare::Alt::Rim::rimclick, {{Note::D_SHARP, 1}}},
        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}},
        {Snare::Alt::Side::_1, {{Note::A_SHARP, 0}}},
        {Snare::Alt::Rim::Shot::edge1, {{Note::A, 0}}},
        {Snare::Hit::roll, {{Note::A, -1}}},

        {Kick::_1, {{Note::C, 1}}},
        {Kick::left, {{Note::B, 0}}}
    });
}