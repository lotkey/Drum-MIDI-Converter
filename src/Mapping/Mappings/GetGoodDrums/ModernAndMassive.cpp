#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::GetGoodDrums::getModernAndMassiveMapping() {
    using namespace Keys;
    return Mapping("GGD Modern & Massive", {
        {Kick::kick_hit, {{Note::C, 0}}},
        
        {Snare::Hit::snare_flam, {{Note::D_SHARP, 0}}},
        {Snare::Hit::snare_hit, {{Note::D, 0}}},
        {Snare::Hit::snare_ruff, {{Note::E, 0}}},
        {Snare::Side::snare_sidestick, {{Note::F_SHARP, 0}}},
        {Snare::Hit::snare_off, {{Note::F, 0}}},

        {Tom::Hit::Rack::tom_rack1, {{Note::A, 0}}},
        {Tom::Hit::Floor::tom_floor1, {{Note::C_SHARP, 1}}},
        {Tom::Hit::Floor::tom_floor2, {{Note::D_SHARP, 1}}},

        {Hat::Closed::hat_tight, {{Note::A, 1}}},
        {Hat::Open::hat_ching, {{Note::G_SHARP, 1}}},
        {Hat::Closed::hat_closed0, {{Note::B, 1}}},
        {Hat::Closed::hat_closed_loose, {{Note::C, 2}}},
        {Hat::Open::hat_open0, {{Note::F, 2}}},
        {Hat::Open::hat_open1, {{Note::F_SHARP, 2}}},
        {Hat::Open::hat_open2, {{Note::G_SHARP, 2}}},
        {Hat::Open::hat_open3, {{Note::A_SHARP, 2}}},
        {Hat::Closed::hat_pedal_close_foot, {{Note::G, 1}}},

        {Cymbal::Bell::Ride::ride1_bell, {{Note::D, 4}}},
        {Cymbal::Hit::Ride::ride1_hit, {{Note::C_SHARP, 4}}},
        {Cymbal::Hit::Ride::Edge::ride1_edge, {{Note::C, 4}}},
        {Cymbal::Hit::Crash::crash1_hit, {{Note::D, 3}}},
        {Cymbal::Choke::Crash::crash1_choke, {{Note::E, 3}}},
        {Cymbal::Hit::Crash::crash2_hit, {{Note::G, 3}}},
        {Cymbal::Choke::Crash::crash2_choke, {{Note::A, 3}}},
        {Cymbal::Hit::China::china2_hit, {{Note::E, 4}}},
        {Cymbal::Choke::China::china1_choke, {{Note::F, 4}}},
        {Cymbal::Choke::Splash::splash1_choke, {{Note::A_SHARP, 4}}},
        {Cymbal::Hit::Splash::splash2_hit, {{Note::B, 4}}}
    });
}