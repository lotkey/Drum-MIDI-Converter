#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::XLNAudio::getAddictiveDrums2Mapping() {
    using namespace Keys;
    return Mapping("XLN Audio Addictive Drums 2", {
        {Perc::Cowbell::cowbell_hit, {{Note::B, 1}}},
        {Perc::sticks, {{Note::D_SHARP, 4}}},

        {Cymbal::Hit::China::china1_hit, {{Note::G, 5}}},
        {Cymbal::Choke::China::china1_choke, {{Note::G_SHARP, 5}}},
        {Cymbal::Hit::Crash::crash1_hit, {{Note::F, 4}, {Note::A_SHARP, 1}}},
        {Cymbal::Choke::Crash::crash1_choke, {{Note::F_SHARP, 4}}},
        {Cymbal::Hit::Crash::crash2_hit, {{Note::G, 4}}},
        {Cymbal::Choke::Crash::crash2_choke, {{Note::G_SHARP, 4}}},
        {Cymbal::Hit::Crash::crash3_hit, {{Note::A, 4}}},
        {Cymbal::Choke::Crash::crash3_choke, {{Note::A_SHARP, 4}}},
        {Cymbal::Hit::Crash::crash4_hit, {{Note::F, 5}}},
        {Cymbal::Choke::Crash::crash4_choke, {{Note::F_SHARP, 5}}},
        {Cymbal::Hit::Crash::crash5_hit, {{Note::A, 5}}},
        {Cymbal::Choke::Crash::crash5_choke, {{Note::A_SHARP, 5}}},
        {Cymbal::Bell::Ride::ride1_bell, {{Note::C_SHARP, 3}}},
        {Cymbal::Hit::Ride::Bow::ride1_bow, {{Note::D, 3}}},
        {Cymbal::Hit::Ride::Bow::Tip::ride1_bow_tip, {{Note::A, 1}, {Note::C, 3}}},
        {Cymbal::Choke::Ride::ride1_choke, {{Note::D_SHARP, 3}}},
        {Cymbal::Bell::Ride::ride2_bell, {{Note::C_SHARP, 5}}},
        {Cymbal::Hit::Ride::Bow::ride2_bow, {{Note::D, 5}}},
        {Cymbal::Hit::Ride::Bow::Tip::ride2_bow_tip, {{Note::C, 5}}},
        {Cymbal::Choke::Ride::ride2_choke, {{Note::D_SHARP, 5}}},

        {Tom::Hit::Floor::tom_floor1, {{Note::F, 3}}},
        {Tom::Rimshot::Floor::tom_floor1_rimshot, {{Note::F_SHARP, 3}}},
        {Tom::Hit::Rack::tom_rack1, {{Note::F, 3}}},
        {Tom::Rimshot::Rack::tom_rack1_rimshot, {{Note::F_SHARP, 3}}},
        {Tom::Hit::Rack::tom_rack2, {{Note::A, 3}}},
        {Tom::Rimshot::Rack::tom_rack2_rimshot, {{Note::A_SHARP, 3}}},
        {Tom::Hit::Rack::tom_rack3, {{Note::G, 3}}},
        {Tom::Rimshot::Rack::tom_rack3_rimshot, {{Note::G_SHARP, 3}}},

        {Hat::Closed::Bell::hat_closed_bell, {{Note::F, 2}}},
        {Hat::Closed::Edge::hat_closed_edge, {{Note::E, 2}}},
        {Hat::Closed::Tip::hat_closed_tip, {{Note::D_SHARP, 2}}},
        {Hat::Open::hat_loose, {{Note::F_SHARP, 2}}},
        {Hat::Open::hat_open0, {{Note::G, 2}}},
        {Hat::Open::Bell::hat_open0_bell, {{Note::A_SHARP, 2}}},
        {Hat::Open::hat_open1, {{Note::G_SHARP, 2}}},
        {Hat::Open::hat_open2, {{Note::A, 2}}},
        {Hat::Closed::hat_pedal_close_foot, {{Note::C, 2}}},
        {Hat::Open::hat_pedal_splash, {{Note::B, 2}}},
        {Hat::Closed::Edge::hat_tight_edge, {{Note::D, 2}}},
        {Hat::Closed::Tip::hat_tight_tip, {{Note::C_SHARP, 2}}},

        {Kick::kick_hit, {{Note::C, 1}}},

        {Snare::Hit::snare_hit, {{Note::D, 1}, {Note::E, 1}, {Note::G, 1}}},
        {Snare::Hit::electric_snare, {{Note::F, 6}}},
        {Snare::Side::snare_rim, {{Note::G_SHARP, 1}}},
        {Snare::Side::snare_rimshot, {{Note::C_SHARP, 1}}},
        {Snare::Side::snare_sidestick, {{Note::F_SHARP, 1}}}
    });
}