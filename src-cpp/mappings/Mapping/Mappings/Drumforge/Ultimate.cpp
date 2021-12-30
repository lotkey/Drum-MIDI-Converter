#include <cinttypes>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::Drumforge::getUltimateMapping() {
    using namespace Keys;
    return Mapping("Drumforge Ultimate", {
        {Cymbal::Hit::Crash::_1, {{Note::C, 3}}},
        {Cymbal::Choke::Crash::_1, {{Note::C_SHARP, 3}}},
        {Cymbal::Hit::Crash::_2, {{Note::D, 3}}},
        {Cymbal::Choke::Crash::_2, {{Note::D_SHARP, 3}}},
        {Cymbal::Hit::Crash::_3, {{Note::F, 3}}},
        {Cymbal::Choke::Crash::_3, {{Note::F_SHARP, 3}}},
        {Cymbal::Bell::Ride::_1, {{Note::A, 3}}},
        {Cymbal::Bell::Ride::Tip::_1, {{Note::A_SHARP, 3}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::G, 3}}},
        {Cymbal::Hit::Ride::Bow::Tip::_1, {{Note::G_SHARP, 3}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Hit::Rack::_1, {{Note::E, 1}}},

        {Hat::Closed::Edge::_1, {{Note::G, 2}}},
        {Hat::Closed::Tip::_1, {{Note::G_SHARP, 2}}},
        {Hat::Open::_0, {{Note::F, 2}}},
        {Hat::Open::_1, {{Note::E, 2}}},
        {Hat::Closed::foot, {{Note::F_SHARP, 2}}},
        {Hat::Closed::Edge::tight1, {{Note::A, 2}}},
        {Hat::Closed::Tip::tight1, {{Note::A_SHARP, 2}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Hit::ruff, {{Note::D_SHARP, 1}}}
    });
}