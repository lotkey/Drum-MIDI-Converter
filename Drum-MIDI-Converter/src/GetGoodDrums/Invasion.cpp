#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::GetGoodDrums::getInvasionMapping() {
    return Mapping({
        {Cymbal::Bell::Crash::crash1_bell, yamahatoi(Note::G, 4)},
        {Cymbal::Bell::Crash::crash2_bell, yamahatoi(Note::G_SHARP, 4)},
        
        {Cymbal::Hit::China::china1_hit, yamahatoi(Note::F, 3)},
        {Cymbal::Choke::China::china1_choke, yamahatoi(Note::F_SHARP, 3)},
        {Cymbal::Hit::China::china2_hit, yamahatoi(Note::G, 3)},
        {Cymbal::Choke::China::china2_choke, yamahatoi(Note::G_SHARP, 3)},

        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::E, 2)},
        {Cymbal::Choke::Crash::crash1_choke, yamahatoi(Note::F, 2)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::F_SHARP, 2)},
        {Cymbal::Choke::Crash::crash2_choke, yamahatoi(Note::G, 2)},
        {Cymbal::Hit::Crash::crash3_hit, yamahatoi(Note::G_SHARP, 2)},
        {Cymbal::Choke::Crash::crash3_choke, yamahatoi(Note::A, 2)},
        {Cymbal::Hit::Crash::crash4_hit, yamahatoi(Note::A_SHARP, 2)},
        {Cymbal::Choke::Crash::crash4_choke, yamahatoi(Note::B, 2)},

        {Cymbal::Hit::Splash::splash1_hit, yamahatoi(Note::C_SHARP, 4)},
        {Cymbal::Choke::Splash::splash1_choke, yamahatoi(Note::D, 4)},
        {Cymbal::Hit::Splash::splash2_hit, yamahatoi(Note::D_SHARP, 4)},
        {Cymbal::Choke::Splash::splash2_choke, yamahatoi(Note::E, 4)},    

        {Cymbal::Hit::Stack::stack1_hit, yamahatoi(Note::F_SHARP, 4)},

        {Cymbal::Bell::Ride::ride1_bell, yamahatoi(Note::C_SHARP, 3)},
        {Cymbal::Hit::Ride::ride1_bow, yamahatoi(Note::D, 3)},
        {Cymbal::Hit::Ride::ride1_tip, yamahatoi(Note::D_SHARP, 3)},

        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::C, 1)},
        {Tom::Hit::Floor::tom_floor2, yamahatoi(Note::C_SHARP, 1)},
        {Tom::Hit::Floor::tom_floor3, yamahatoi(Note::D, 1)},
        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::A, 0)},
        {Tom::Hit::Rack::tom_rack2, yamahatoi(Note::A_SHARP, 0)},
        {Tom::Hit::Rack::tom_rack3, yamahatoi(Note::B, 0)},

        {Hat::Open::hat_cc, yamahatoi(Note::F, -1)},
        {Hat::Closed::hat_closed_edge, yamahatoi(Note::G_SHARP, 1)},
        {Hat::Closed::hat_closed_tip, yamahatoi(Note::G, 1)},
        {Hat::Open::hat_open0, yamahatoi(Note::A, 1)},
        {Hat::Open::hat_open1, yamahatoi(Note::A_SHARP, 1)},
        {Hat::Open::hat_open2, yamahatoi(Note::B, 1)},
        {Hat::Closed::hat_pedal_close_foot, yamahatoi(Note::C, 2)},
        {Hat::Closed::hat_tight_edge, yamahatoi(Note::F_SHARP, 1)},
        {Hat::Closed::hat_tight_tip, yamahatoi(Note::F, 1)},
        {Hat::Closed::hat_x_closed, yamahatoi(Note::A_SHARP, 3)},
        {Hat::Open::hat_x_open, yamahatoi(Note::B, 3)},

        {Kick::kick_hit, yamahatoi(Note::C, 0)},
        {Kick::kick_adk, yamahatoi(Note::A_SHARP, -1)},
        {Kick::kick_left, yamahatoi(Note::B, -1)},

        {Snare::snare_flam, yamahatoi(Note::D_SHARP, 0)},
        {Snare::snare_hit, yamahatoi(Note::D, 0)},
        {Snare::snare_off, yamahatoi(Note::F, 0)},
        {Snare::snare_ruff, yamahatoi(Note::E, 0)},
        {Snare::snare_sidestick, yamahatoi(Note::F_SHARP, 0)}
    });
}