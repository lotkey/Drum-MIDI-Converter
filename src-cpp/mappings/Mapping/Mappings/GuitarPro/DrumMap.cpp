#include <cinttypes>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::GuitarPro::getDrumMapMapping() {
    using namespace Keys;
    return Mapping("Guitar Pro Drum Map", {
        {Perc::Cowbell::hit, {{Note::G_SHARP, 2}, {Note::D_SHARP, 6}, {Note::E, 6}, {Note::F, 6}, {Note::F_SHARP, 6}, {Note::G, 6}}},

        {Cymbal::Hit::China::_1, {{Note::E, 2}}},
        {Cymbal::Choke::China::_1, {{Note::C, 6}}},
        {Cymbal::Hit::Crash::_1, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::C_SHARP, 6}}},
        {Cymbal::Hit::Crash::_2, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::D, 6}}},
        {Cymbal::Hit::Splash::_1, {{Note::G, 2}}},
        {Cymbal::Choke::Splash::_1, {{Note::B, 5}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}, {Note::G, 8}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D_SHARP, 2}, {Note::F_SHARP, 8}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::B, 2}, {Note::A, 5}}},
        {Cymbal::Choke::Ride::_1, {{Note::A_SHARP, 5}}},

        {Snare::Hit::electric, {{Note::E, 1}}},

        {Tom::Hit::Floor::_1, {{Note::D, 2}}},
        {Tom::Hit::Floor::_2, {{Note::F, 1}}},
        {Tom::Hit::Rack::_1, {{Note::C, 2}}},
        {Tom::Hit::Rack::_2, {{Note::B, 1}}},
        {Tom::Hit::Rack::_3, {{Note::A, 1}}},
        {Tom::Hit::Rack::_4, {{Note::G, 1}}},

        {Hat::Closed::_0, {{Note::F_SHARP, 1}}},
        {Hat::Open::_0, {{Note::G_SHARP, 5}}},
        {Hat::Open::_1, {{Note::A_SHARP, 1}}},
        {Hat::Closed::foot, {{Note::G_SHARP, 1}}},

        {Kick::_1, {{Note::C, 1}}},
        {Kick::left, {{Note::B, 0}}},

        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Alt::Rim::Shot::_1, {{Note::G, 5}}},
        {Snare::Alt::Side::stick, {{Note::G, 0}, {Note::C_SHARP, 1}}}
    });
}