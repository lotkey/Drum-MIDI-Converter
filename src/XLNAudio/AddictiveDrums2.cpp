#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::XLNAudio::getAddictiveDrums2Mapping() {
    return Mapping("XLN Audio Addictive Drums 2", {
        {Perc::Cowbell::cowbell_hit, yamahatoi(Note::B, 1)},
        {Perc::sticks, yamahatoi(Note::D_SHARP, 4)},

        {Cymbal::Hit::China::china1_hit, yamahatoi(Note::G, 5)},
        {Cymbal::Choke::China::china1_choke, yamahatoi(Note::G_SHARP, 5)},
        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::F, 4)},
        {Cymbal::Choke::Crash::crash1_choke, yamahatoi(Note::F_SHARP, 4)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::G, 4)},
        {Cymbal::Choke::Crash::crash2_choke, yamahatoi(Note::G_SHARP, 4)},
        {Cymbal::Hit::Crash::crash3_hit, yamahatoi(Note::A, 4)},
        {Cymbal::Choke::Crash::crash3_choke, yamahatoi(Note::A_SHARP, 4)},
        {Cymbal::Hit::Crash::crash4_hit, yamahatoi(Note::F, 5)},
        {Cymbal::Choke::Crash::crash4_choke, yamahatoi(Note::F_SHARP, 5)},
        {Cymbal::Hit::Crash::crash5_hit, yamahatoi(Note::A, 5)},
        {Cymbal::Choke::Crash::crash5_choke, yamahatoi(Note::A_SHARP, 5)},
        {Cymbal::Bell::Ride::ride1_bell, yamahatoi(Note::C_SHARP, 3)},
        {Cymbal::Hit::Ride::Bow::ride1_bow, yamahatoi(Note::D, 3)},
        {Cymbal::Hit::Ride::Bow::Tip::ride1_bow_tip, yamahatoi(Note::A, 1)},
        {Cymbal::Choke::Ride::ride1_choke, yamahatoi(Note::D_SHARP, 3)},
        {Cymbal::Bell::Ride::ride2_bell, yamahatoi(Note::C_SHARP, 5)},
        {Cymbal::Hit::Ride::Bow::ride2_bow, yamahatoi(Note::D, 5)},
        {Cymbal::Hit::Ride::Bow::Tip::ride2_bow_tip, yamahatoi(Note::C, 5)},
        {Cymbal::Choke::Ride::ride2_choke, yamahatoi(Note::D_SHARP, 5)},

        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::F, 3)},
        {Tom::Rimshot::Floor::tom_floor1_rimshot, yamahatoi(Note::F_SHARP, 3)},
        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::F, 3)},
        {Tom::Rimshot::Rack::tom_rack1_rimshot, yamahatoi(Note::F_SHARP, 3)},
        {Tom::Hit::Rack::tom_rack2, yamahatoi(Note::A, 3)},
        {Tom::Rimshot::Rack::tom_rack2_rimshot, yamahatoi(Note::A_SHARP, 3)},
        {Tom::Hit::Rack::tom_rack3, yamahatoi(Note::G, 3)},
        {Tom::Rimshot::Rack::tom_rack3_rimshot, yamahatoi(Note::G_SHARP, 3)},

        {Hat::Closed::Bell::hat_closed_bell, yamahatoi(Note::F, 2)},
        {Hat::Closed::Edge::hat_closed_edge, yamahatoi(Note::E, 2)},
        {Hat::Closed::Tip::hat_closed_tip, yamahatoi(Note::D_SHARP, 2)},
        {Hat::Open::hat_loose, yamahatoi(Note::F_SHARP, 2)},
        {Hat::Open::hat_open0, yamahatoi(Note::G, 2)},
        {Hat::Open::Bell::hat_open0_bell, yamahatoi(Note::A_SHARP, 2)},
        {Hat::Open::hat_open1, yamahatoi(Note::G_SHARP, 2)},
        {Hat::Open::hat_open2, yamahatoi(Note::A, 2)},
        {Hat::Closed::hat_pedal_close_foot, yamahatoi(Note::C, 2)},
        {Hat::Open::hat_pedal_splash, yamahatoi(Note::B, 2)},
        {Hat::Closed::Edge::hat_tight_edge, yamahatoi(Note::D, 2)},
        {Hat::Closed::Tip::hat_tight_tip, yamahatoi(Note::C_SHARP, 2)},

        {Kick::kick_hit, yamahatoi(Note::C, 1)},

        {Snare::Hit::electric_snare, yamahatoi(Note::F, 6)},
        {Snare::Side::snare_rim, yamahatoi(Note::G_SHARP, 1)},
        {Snare::Side::snare_rimshot, yamahatoi(Note::C_SHARP, 1)},
        {Snare::Side::snare_sidestick, yamahatoi(Note::F_SHARP, 1)}
    });
}