#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::Toontrack::getEZDrummerMapping() {
    using namespace Keys;
    return Mapping("Toontrack EZdrummer", {
        {Perc::clap, {{Note::C_SHARP, -2}}},
        {Perc::shaker, {{Note::D, -1}}},
        {Perc::Tambourine::hit, {{Note::D_SHARP, -2}}},

        {Cymbal::Hit::Crash::_1, {{Note::G, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::G_SHARP, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::D, 2}}},
        {Cymbal::Hit::Crash::_3, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::_3, {{Note::A_SHARP, 2}}},
        {Cymbal::Hit::Crash::_4, {{Note::E, 2}}},
        {Cymbal::Choke::Crash::_4, {{Note::F_SHARP, 2}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::B, 2}}},
        {Cymbal::Choke::Ride::_1, {{Note::B, 4}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Rimshot::Floor::_1, {{Note::D_SHARP, 4}}},
        {Tom::Hit::Floor::_2, {{Note::F, 1}}},
        {Tom::Rimshot::Floor::_2, {{Note::C_SHARP, 4}}},
        {Tom::Hit::Rack::_1, {{Note::C, 2}}},
        {Tom::Rimshot::Rack::_1, {{Note::A_SHARP, 4}}},
        {Tom::Hit::Rack::_2, {{Note::B, 1}}},
        {Tom::Rimshot::Rack::_2, {{Note::G_SHARP, 4}}},
        {Tom::Hit::Rack::_3, {{Note::A, 1}}},
        {Tom::Rimshot::Rack::_3, {{Note::F_SHARP, 4}}},

        {Hat::Closed::Edge::_1, {{Note::A_SHARP, -1}}},
        {Hat::Closed::Tip::_1, {{Note::F_SHARP, 1}}},
        {Hat::Open::loose, {{Note::C, 0}}},
        {Hat::Open::_0, {{Note::C_SHARP, 0}}},
        {Hat::Open::_1, {{Note::D, 0}}},
        {Hat::Open::_2, {{Note::C, 3}}},
        {Hat::Open::_3, {{Note::F, -1}}},
        {Hat::Closed::foot, {{Note::A, -1}}},
        {Hat::Open::pedal_splash, {{Note::B, -1}}},
        {Hat::Open::seq, {{Note::F, 3}}},
        {Hat::Closed::Edge::tight1, {{Note::D, 3}}},
        {Hat::Closed::Tip::tight1, {{Note::D_SHARP, 3}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Alt::Rim::Shot::_1, {{Note::E, 1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}}
    });
}