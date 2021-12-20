#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

using namespace Keys;

Mapping Mappings::GetGoodDrums::getOKWArchitectsMapping() {
    return Mapping("GGD OKW Architects", {
        {Kick::kick_hit, {{Note::C, 0}}},

        {Snare::Hit::snare_hit, {{Note::D, 0}}},
        {Snare::Side::snare_sidestick, {{Note::F_SHARP, 0}}},

        {Tom::Hit::Rack::tom_rack1, {{Note::B, 0}}},
        {Tom::Hit::Rack::tom_rack2, {{Note::C, 1}}},
        {Tom::Hit::Floor::tom_floor1, {{Note::C_SHARP, 1}}},

        {Cymbal::Bell::Ride::ride1_bell, {{Note::C_SHARP, 3}}},
        {Cymbal::Hit::Ride::Bow::ride1_bow, {{Note::D, 3}}},
        {Cymbal::Hit::Ride::ride1_hit, {{Note::D_SHARP, 3}}},
        {Cymbal::Choke::Ride::ride1_choke, {{Note::E, 3}}},
        {Cymbal::Hit::Crash::crash1_hit, {{Note::E, 2}}},
        {Cymbal::Choke::Crash::crash1_choke, {{Note::F, 2}}},
        {Cymbal::Hit::Crash::crash2_hit, {{Note::F_SHARP, 2}}},
        {Cymbal::Choke::Crash::crash2_choke, {{Note::G, 2}}},
        {Cymbal::Hit::Crash::crash3_hit, {{Note::A_SHARP, 2}}},
        {Cymbal::Choke::Crash::crash3_choke, {{Note::B, 2}}},
        {Cymbal::Hit::China::china1_hit, {{Note::G, 3}}},
        {Cymbal::Choke::China::china1_choke, {{Note::G_SHARP, 3}}},
        {Cymbal::Hit::China::china2_hit, {{Note::F, 3}}},
        {Cymbal::Choke::China::china2_choke, {{Note::F_SHARP, 3}}},
        {Cymbal::Hit::Splash::splash1_hit, {{Note::C_SHARP, 4}}},
        {Cymbal::Choke::Splash::splash1_choke, {{Note::D, 4}}},

        {Hat::Closed::Tip::hat_tight_tip, {{Note::F, 1}}},
        {Hat::Closed::Edge::hat_tight_edge, {{Note::F_SHARP, 1}}},
        {Hat::Closed::Tip::hat_closed_tip, {{Note::G, 1}}},
        {Hat::Closed::Edge::hat_closed_edge, {{Note::G_SHARP, 1}}},
        {Hat::Open::hat_open0, {{Note::A, 1}}},
        {Hat::Open::hat_open1, {{Note::A_SHARP, 1}}},
        {Hat::Open::hat_open2, {{Note::B, 1}}},
        {Hat::Open::hat_cc, {{Note::F, 1}}},
        {Hat::Closed::hat_pedal_close_foot, {{Note::C, 2}}},
        {Hat::Open::hat_x_open, {{Note::F_SHARP, 4}}}
    });
}