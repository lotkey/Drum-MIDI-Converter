#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::GetGoodDrums::getModernAndMassiveMapping() {
    return Mapping("GGD Modern & Massive", {
        {Kick::kick_hit, yamahatoi(Note::C, 0)},
        
        {Snare::Hit::snare_flam, yamahatoi(Note::D_SHARP, 0)},
        {Snare::Hit::snare_hit, yamahatoi(Note::D, 0)},
        {Snare::Hit::snare_ruff, yamahatoi(Note::E, 0)},
        {Snare::Side::snare_sidestick, yamahatoi(Note::F_SHARP, 0)},
        {Snare::Hit::snare_off, yamahatoi(Note::F, 0)},

        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::A, 0)},
        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::C_SHARP, 1)},
        {Tom::Hit::Floor::tom_floor2, yamahatoi(Note::D_SHARP, 1)},

        {Hat::Closed::hat_tight, yamahatoi(Note::A, 1)},
        {Hat::Open::hat_ching, yamahatoi(Note::G_SHARP, 1)},
        {Hat::Closed::hat_closed0, yamahatoi(Note::B, 1)},
        {Hat::Closed::hat_closed_loose, yamahatoi(Note::C, 2)},
        {Hat::Open::hat_open0, yamahatoi(Note::F, 2)},
        {Hat::Open::hat_open1, yamahatoi(Note::F_SHARP, 2)},
        {Hat::Open::hat_open2, yamahatoi(Note::G_SHARP, 2)},
        {Hat::Open::hat_open3, yamahatoi(Note::A_SHARP, 2)},
        {Hat::Closed::hat_pedal_close_foot, yamahatoi(Note::G, 1)},

        {Cymbal::Bell::Ride::ride1_bell, yamahatoi(Note::D, 4)},
        {Cymbal::Hit::Ride::ride1_hit, yamahatoi(Note::C_SHARP, 4)},
        {Cymbal::Hit::Ride::Edge::ride1_edge, yamahatoi(Note::C, 4)},
        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::D, 3)},
        {Cymbal::Choke::Crash::crash1_choke, yamahatoi(Note::E, 3)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::G, 3)},
        {Cymbal::Choke::Crash::crash2_choke, yamahatoi(Note::A, 3)},
        {Cymbal::Hit::China::china2_hit, yamahatoi(Note::E, 4)},
        {Cymbal::Choke::China::china1_choke, yamahatoi(Note::F, 4)},
        {Cymbal::Choke::Splash::splash1_choke, yamahatoi(Note::A_SHARP, 4)},
        {Cymbal::Hit::Splash::splash2_hit, yamahatoi(Note::B, 4)}
    });
}