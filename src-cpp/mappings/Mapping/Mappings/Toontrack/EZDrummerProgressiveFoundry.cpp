#include <cinttypes>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::Toontrack::getEZDrummerProgressiveFoundryMapping() {
    using namespace Keys;
    return Mapping("Toontrack EZdrummer Progressive Foundry", {
        {Perc::clap, {{Note::C_SHARP, -2}}},
        {Perc::shaker, {{Note::D, -2}}},
        {Perc::Tambourine::hit, {{Note::D_SHARP, 2}}},

        {Cymbal::Hit::China::_1, {{Note::D_SHARP, 0}}},
        {Cymbal::Choke::China::_1, {{Note::B, 4}}},
        {Cymbal::Hit::China::_2, {{Note::E, 2}}},
        {Cymbal::Hit::Crash::_1, {{Note::E, 0}}},
        {Cymbal::Choke::Crash::_1, {{Note::A_SHARP, 4}}},
        {Cymbal::Hit::Crash::_2, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::D, 2}}},
        {Cymbal::Hit::Crash::_3, {{Note::F_SHARP, 0}}},
        {Cymbal::Choke::Crash::_3, {{Note::B, 5}}},
        {Cymbal::Hit::Crash::_4, {{Note::G, 0}}},
        {Cymbal::Choke::Crash::_4, {{Note::A_SHARP, 6}}},
        {Cymbal::Hit::Crash::_5, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::_5, {{Note::A_SHARP, 2}}},
        {Cymbal::Hit::Crash::_6, {{Note::G_SHARP, 0}}},
        {Cymbal::Choke::Crash::_6, {{Note::B, 6}}},
        {Cymbal::Hit::Splash::_1, {{Note::G, 2}}},
        {Cymbal::Choke::Splash::_1, {{Note::G_SHARP, 2}}},
        {Cymbal::Hit::Stack::_1, {{Note::F, 0}}},
        {Cymbal::Choke::Stack::_1, {{Note::E, 4}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::Tip::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::B, 2}}},
        {Cymbal::Choke::Ride::_1, {{Note::A_SHARP, 7}}},

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
        {Hat::Open::loose, {{Note::E, 3}}},
        {Hat::Open::_0, {{Note::C, 0}}},
        {Hat::Open::_1, {{Note::C_SHARP, 0}}},
        {Hat::Open::_2, {{Note::D, 0}}},
        {Hat::Open::_3, {{Note::C, 3}}},
        {Hat::Open::_4, {{Note::F, -1}, {Note::F_SHARP, -1}, {Note::G, -1}}},
        {Hat::Closed::foot, {{Note::A, -1}}},
        {Hat::Open::pedal_splash, {{Note::B, -1}}},
        {Hat::Open::seq, {{Note::F, 3}}},
        {Hat::Closed::Edge::tight1, {{Note::D, 3}}},
        {Hat::Closed::Tip::tight1, {{Note::D_SHARP, 3}}},

        {Kick::_1, {{Note::C, 1}, {Note::A_SHARP, 0}}},

        {Snare::Hit::_1, {{Note::D, 1}, {Note::F_SHARP, -2}}},
        {Snare::Alt::Side::_1, {{Note::A, 0}}},
        {Snare::Alt::Rim::Shot::_1, {{Note::E, 1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}}
    });
}