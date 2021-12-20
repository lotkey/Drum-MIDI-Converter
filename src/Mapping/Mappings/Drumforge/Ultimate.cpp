#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

using namespace Keys;

Mapping Mappings::Drumforge::getUltimateMapping() {
    return Mapping("Drumforge Ultimate", {
        {Cymbal::Hit::Crash::crash1_hit, {{Note::C, 3}}},
        {Cymbal::Choke::Crash::crash1_choke, {{Note::C_SHARP, 3}}},
        {Cymbal::Hit::Crash::crash2_hit, {{Note::D, 3}}},
        {Cymbal::Choke::Crash::crash2_choke, {{Note::D_SHARP, 3}}},
        {Cymbal::Hit::Crash::crash3_hit, {{Note::F, 3}}},
        {Cymbal::Choke::Crash::crash3_choke, {{Note::F_SHARP, 3}}},
        {Cymbal::Bell::Ride::ride1_bell, {{Note::A, 3}}},
        {Cymbal::Bell::Ride::Tip::ride1_bell_tip, {{Note::A_SHARP, 3}}},
        {Cymbal::Hit::Ride::Bow::ride1_bow, {{Note::G, 3}}},
        {Cymbal::Hit::Ride::Bow::Tip::ride1_bow_tip, {{Note::G_SHARP, 3}}},

        {Tom::Hit::Floor::tom_floor1, {{Note::G, 1}}},
        {Tom::Hit::Rack::tom_rack1, {{Note::E, 1}}},

        {Hat::Closed::Edge::hat_closed_edge, {{Note::G, 2}}},
        {Hat::Closed::Tip::hat_closed_tip, {{Note::G_SHARP, 2}}},
        {Hat::Open::hat_open0, {{Note::F, 2}}},
        {Hat::Open::hat_open1, {{Note::E, 2}}},
        {Hat::Closed::hat_pedal_close_foot, {{Note::F_SHARP, 2}}},
        {Hat::Closed::Edge::hat_tight_edge, {{Note::A, 2}}},
        {Hat::Closed::Tip::hat_tight_tip, {{Note::A_SHARP, 2}}},

        {Kick::kick_hit, {{Note::C, 1}}},

        {Snare::Hit::snare_hit, {{Note::D, 1}}},
        {Snare::Hit::snare_ruff, {{Note::D_SHARP, 1}}}
    });
}