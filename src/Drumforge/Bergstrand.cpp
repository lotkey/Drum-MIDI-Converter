#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::Drumforge::getBergstrandMapping() {
    return Mapping("Drumforge Bergstrand", {
        {Cymbal::Bell::Crash::crash1_bell, yamahatoi(Note::A, 3)},
        {Cymbal::Hit::China::china1_hit, yamahatoi(Note::F, 4)},
        {Cymbal::Choke::China::china1_choke, yamahatoi(Note::F_SHARP, 4)},
        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::C, 3)},
        {Cymbal::Choke::Crash::crash1_choke, yamahatoi(Note::C_SHARP, 3)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::D, 3)},
        {Cymbal::Choke::Crash::crash2_choke, yamahatoi(Note::D_SHARP, 3)},
        {Cymbal::Hit::Crash::crash3_hit, yamahatoi(Note::F, 3)},
        {Cymbal::Choke::Crash::crash3_choke, yamahatoi(Note::F_SHARP, 3)},
        {Cymbal::Hit::Splash::splash1_hit, yamahatoi(Note::G, 4)},
        {Cymbal::Choke::Splash::splash1_choke, yamahatoi(Note::G_SHARP, 4)},
        {Cymbal::Hit::Splash::splash2_hit, yamahatoi(Note::A, 4)},
        {Cymbal::Choke::Splash::splash2_choke, yamahatoi(Note::A_SHARP, 4)},
        {Cymbal::Bell::Ride::ride1_bell, yamahatoi(Note::A_SHARP, 3)},
        {Cymbal::Hit::Ride::Bow::Tip::ride1_bow_tip, yamahatoi(Note::G, 3)},
        {Cymbal::Hit::Ride::Edge::ride1_edge, yamahatoi(Note::G_SHARP, 3)},

        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::G_SHARP, 1)},
        {Tom::Hit::Floor::tom_floor2, yamahatoi(Note::A, 1)},
        {Tom::Hit::Floor::tom_floor3, yamahatoi(Note::A_SHARP, 1)},
        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::E, 1)},
        {Tom::Hit::Rack::tom_rack2, yamahatoi(Note::F, 1)},
        {Tom::Hit::Rack::tom_rack3, yamahatoi(Note::G, 1)},

        {Hat::Closed::Edge::hat_closed_edge, yamahatoi(Note::G, 2)},
        {Hat::Closed::Tip::hat_closed_tip, yamahatoi(Note::G_SHARP, 2)},
        {Hat::Open::hat_open0, yamahatoi(Note::F, 2)},
        {Hat::Open::hat_open1, yamahatoi(Note::E, 2)},
        {Hat::Open::hat_open2, yamahatoi(Note::D_SHARP, 2)},
        {Hat::Open::hat_open3, yamahatoi(Note::D, 2)},
        {Hat::Closed::hat_pedal_close_foot, yamahatoi(Note::F_SHARP, 2)},
        {Hat::Closed::Edge::hat_tight_edge, yamahatoi(Note::A, 2)},
        {Hat::Closed::Tip::hat_tight_tip, yamahatoi(Note::A_SHARP, 2)},

        {Kick::kick_hit, yamahatoi(Note::C, 1)},
        {Kick::kick_left, yamahatoi(Note::C_SHARP, 1)},

        {Snare::Hit::snare_hit, yamahatoi(Note::D, 1)}
    });
}