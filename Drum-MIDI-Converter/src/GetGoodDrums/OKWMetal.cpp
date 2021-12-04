#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::GetGoodDrums::getOKWMetalMapping() {
    return Mapping("GGD OKW Metal", {
        {Cymbal::Hit::China::china1_hit, yamahatoi(Note::F, 3)},
        {Cymbal::Choke::China::china1_choke, yamahatoi(Note::F_SHARP, 3)},
        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::E, 2)},
        {Cymbal::Choke::Crash::crash1_choke, yamahatoi(Note::F, 2)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::F_SHARP, 2)},
        {Cymbal::Choke::Crash::crash2_choke, yamahatoi(Note::G, 2)},
        {Cymbal::Hit::Crash::crash3_hit, yamahatoi(Note::A_SHARP, 2)},
        {Cymbal::Choke::Crash::crash3_choke, yamahatoi(Note::B, 2)},
        {Cymbal::Hit::Splash::splash1_hit, yamahatoi(Note::C_SHARP, 4)},
        {Cymbal::Choke::Splash::splash1_choke, yamahatoi(Note::D, 4)},
        {Cymbal::Hit::Splash::splash2_hit, yamahatoi(Note::D_SHARP, 4)},
        {Cymbal::Choke::Splash::splash2_choke, yamahatoi(Note::E, 4)},
        {Cymbal::Bell::Ride::ride1_bell, yamahatoi(Note::C_SHARP, 3)},
        {Cymbal::Hit::Ride::ride1_bow, yamahatoi(Note::D, 3)},

        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::B, 0)},
        {Tom::Hit::Floor::tom_floor2, yamahatoi(Note::C, 1)},
        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::A, 0)},
        {Tom::Hit::Rack::tom_rack2, yamahatoi(Note::A_SHARP, 0)},

        {Hat::Open::hat_cc, yamahatoi(Note::F, -1)},
        {Hat::Open::hat_open0_edge, yamahatoi(Note::G_SHARP, 1)},
        {Hat::Open::hat_open0_tip, yamahatoi(Note::G, 1)},
        {Hat::Open::hat_open0, yamahatoi(Note::A, 1)},
        {Hat::Open::hat_open1, yamahatoi(Note::A_SHARP, 1)},
        {Hat::Open::hat_open2, yamahatoi(Note::B, 1)},
        {Hat::Closed::hat_pedal_close_foot, yamahatoi(Note::C, 2)},
        {Hat::Closed::hat_tight_edge, yamahatoi(Note::F_SHARP, 1)},
        {Hat::Closed::hat_tight_tip, yamahatoi(Note::F, 1)},
        
        {Kick::kick_hit, yamahatoi(Note::C, 0)},
        {Kick::kick_adk, yamahatoi(Note::A_SHARP, -1)},
        {Kick::kick_left, yamahatoi(Note::B, -1)},

        {Snare::Hit::snare_hit, yamahatoi(Note::D, 0)},
        {Snare::Side::snare_sidestick, yamahatoi(Note::F_SHARP, 0)}
    });
}