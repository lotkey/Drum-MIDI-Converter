#include "../../../SampleTree/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::StevenSlateDrums::getSSDMapping() {
    using namespace Keys;
    return Mapping("Steven Slate Drums", {
        {Perc::Cowbell::hit, {{Note::D_SHARP, 4}, {Note::D, 4}}},
        {Perc::Tambourine::hit, {{Note::G, 4}, {Note::F_SHARP, 4}, {Note::F, 4}}},
        {Perc::shaker, {{Note::A_SHARP, 4}, {Note::A, 4}, {Note::G_SHARP, 4}}},

        {Cymbal::Bell::Crash::_1, {{Note::B, 4}}},
        {Cymbal::Bell::Crash::_2, {{Note::C, 5}}},
        {Cymbal::Hit::China::Bow::Tip::_1, {{Note::A, 5}}},
        {Cymbal::Hit::China::_1, {{Note::G, 0}}},
        {Cymbal::Choke::China::_1, {{Note::G_SHARP, 0}}},
        {Cymbal::Hit::Crash::Bow::Tip::_1, {{Note::G, 5}}},
        {Cymbal::Hit::Crash::_1, {{Note::G, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::F_SHARP, 2}}},
        {Cymbal::Hit::Crash::Bow::Tip::_2, {{Note::G_SHARP, 5}}},
        {Cymbal::Hit::Crash::_2, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::G_SHARP, 2}}},
        {Cymbal::Hit::Crash::Bow::Tip::_3, {{Note::B, 5}}},
        {Cymbal::Hit::Crash::_3, {{Note::E, 0}}},
        {Cymbal::Choke::Crash::_3, {{Note::D_SHARP, 0}}},
        {Cymbal::Hit::Crash::Bow::Tip::_4, {{Note::A_SHARP, 5}}},
        {Cymbal::Hit::Crash::_4, {{Note::F, 0}}},
        {Cymbal::Choke::Crash::_4, {{Note::F_SHARP, 0}}},
        {Cymbal::Hit::Splash::_1, {{Note::F_SHARP, 5}, {Note::D, 2}}},
        {Cymbal::Choke::Splash::_1, {{Note::C_SHARP, 2}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::E, 2}}},
        {Cymbal::Hit::Ride::Bow::Tip::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::B, 2}}},
        {Cymbal::Choke::Ride::_1, {{Note::A_SHARP, 2}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Rim::Floor::_1, {{Note::D, -1}}},
        {Tom::Hit::Floor::_2, {{Note::F, 1}}},
        {Tom::Rim::Floor::_2, {{Note::C, -1}}},
        {Tom::Hit::Rack::_1, {{Note::C, 2}}},
        {Tom::Rim::Rack::_1, {{Note::G, -1}}},
        {Tom::Hit::Rack::_2, {{Note::B, 1}}},
        {Tom::Rim::Rack::_2, {{Note::F, -1}}},
        {Tom::Hit::Rack::_3, {{Note::A, 1}}},
        {Tom::Rim::Rack::_3, {{Note::A, -1}}},

        {Hat::Midi::cc, {{Note::A_SHARP, 1}, {Note::D, 0}}},
        {Hat::Hit::Closed::Edge::_1, {{Note::C_SHARP, 3}, {Note::A_SHARP, -1}}},
        {Hat::Hit::Closed::Tip::_1, {{Note::G, 3}, {Note::F_SHARP, 1}}},
        {Hat::Hit::Open::Loose::_1, {{Note::D, 3}}},
        {Hat::Hit::Open::Tip::Loose::_1, {{Note::G_SHARP, 3}}},
        {Hat::Hit::Open::_0, {{Note::D_SHARP, 3}}},
        {Hat::Hit::Open::Tip::_0, {{Note::A, 3}}},
        {Hat::Hit::Open::_1, {{Note::E, 3}}},
        {Hat::Hit::Open::Tip::_1, {{Note::A_SHARP, 3}}},
        {Hat::Hit::Open::_2, {{Note::F, 3}}},
        {Hat::Hit::Open::Tip::_2, {{Note::B, 3}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::C, 4}, {Note::G_SHARP, 1}}},
        {Hat::Hit::Open::Pedal::Splash::_1, {{Note::C_SHARP, 4}}},
        {Hat::Hit::Closed::Edge::Tight::_1, {{Note::C, 3}}},
        {Hat::Hit::Closed::Tip::Tight::_1, {{Note::F_SHARP, 3}}},

        {Kick::_1, {{Note::C, 1}}},
        {Kick::left, {{Note::B, 0}}},

        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Alt::Side::_1, {{Note::A_SHARP, 0}}},
        {Snare::Alt::Rim::_1, {{Note::D_SHARP, 1}}},
        {Snare::Alt::Rim::Shot::_1, {{Note::E, 1}, {Note::A, 0}}},
        {Snare::Hit::ruff, {{Note::A, -1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}},
        {Snare::Hit::electric, {{Note::E, 4}}}
    });
}