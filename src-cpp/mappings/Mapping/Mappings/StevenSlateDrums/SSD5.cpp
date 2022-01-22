#include "../../../SampleTree/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::StevenSlateDrums::getSSD5Mapping() {
    using namespace Keys;
    return Mapping("Steven Slate Drums 5", {
        {Perc::Tambourine::hit, {{Note::G, 4}}},
        {Perc::Tambourine::down, {{Note::F_SHARP, 4}}},
        {Perc::Tambourine::up, {{Note::F, 4}}},
        {Perc::clap, {{Note::E, 4}}},
        {Perc::Cowbell::tip, {{Note::D_SHARP, 4}}},
        {Perc::Cowbell::shank, {{Note::D, 4}}},
    
        {Hat::Hit::Open::Pedal::Splash::_1, {{Note::C_SHARP, 4}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::C, 4}, {Note::G_SHARP, 1}}},
        {Hat::Hit::Open::Tip::_0, {{Note::A, 3}}},
        {Hat::Hit::Open::Tip::_1, {{Note::A_SHARP, 3}}},
        {Hat::Hit::Open::Tip::_2, {{Note::B, 3}}},
        {Hat::Hit::Open::Tip::Loose::_1, {{Note::G_SHARP, 3}}},
        {Hat::Hit::Closed::Tip::_1, {{Note::G, 3}, {Note::F_SHARP, 1}}},
        {Hat::Hit::Closed::Tip::Tight::_1, {{Note::F_SHARP, 3}}},
        {Hat::Hit::Open::Shank::_2, {{Note::F, 3}}},
        {Hat::Hit::Open::Shank::_1, {{Note::E, 3}}},
        {Hat::Hit::Open::Shank::_0, {{Note::D_SHARP, 3}}},
        {Hat::Hit::Open::Shank::Loose::_1, {{Note::D, 3}}},
        {Hat::Hit::Closed::Shank::_1, {{Note::C_SHARP, 3}, {Note::A_SHARP, -1}}},
        {Hat::Hit::Closed::Shank::Tight::_1, {{Note::C, 3}}},
        {Hat::Midi::cc, {{Note::A_SHARP, 1}, {Note::D, 0}}},

        {Cymbal::Hit::China::Bow::Tip::_1, {{Note::A, 5}}},
        {Cymbal::Hit::Crash::Bow::Tip::_1, {{Note::G_SHARP, 5}}},
        {Cymbal::Hit::Crash::Bow::Tip::_2, {{Note::G, 5}}},
        {Cymbal::Hit::Splash::Tip::_1, {{Note::F_SHARP, 5}}},
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
        {Tom::Rim::Shot::Rack::_1, {{Note::G, -1}}},
        {Tom::Rim::Shot::Rack::_2, {{Note::F, -1}}},
        {Tom::Rim::Shot::Floor::_1, {{Note::D, -1}}},
        {Tom::Rim::Shot::Floor::_2, {{Note::C, -1}}},

        {Snare::Alt::Rim::Shot::_1, {{Note::E, 1}}},
        {Snare::Alt::Rim::click, {{Note::D_SHARP, 1}}},
        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}},
        {Snare::Alt::Side::_1, {{Note::A_SHARP, 0}}},
        {Snare::Alt::Rim::Shot::edge1, {{Note::A, 0}}},
        {Snare::Hit::roll, {{Note::A, -1}}},

        {Kick::_1, {{Note::C, 1}}},
        {Kick::left, {{Note::B, 0}}}
    });
}