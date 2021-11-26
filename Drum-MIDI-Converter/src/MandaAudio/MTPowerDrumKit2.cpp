#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::MandaAudio::getMTPowerDrumKit2Mapping() {
    return Mapping("MTPowerDrumKit2", {
        {Cymbal::Hit::China::china1_hit, yamahatoi(Note::E, 2)},
        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::C_SHARP, 2)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::A, 2)},
        {Cymbal::Choke::Crash::crash2_choke, yamahatoi(Note::A_SHARP, 2)},
        {Cymbal::Hit::Splash::splash1_hit, yamahatoi(Note::G, 2)},
        {Cymbal::Bell::Ride::ride1_bell, yamahatoi(Note::F, 2)},
        {Cymbal::Hit::Ride::ride1_hit, yamahatoi(Note::D_SHARP, 2)},

        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::F, 1)},
        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::C, 2)},
        {Tom::Hit::Rack::tom_rack2, yamahatoi(Note::A, 1)},

        {Hat::Closed::hat_closed_edge, yamahatoi(Note::F_SHARP, 1)},
        {Hat::Open::hat_open0, yamahatoi(Note::G_SHARP, 1)},
        {Hat::Open::hat_open1, yamahatoi(Note::A_SHARP, 1)},
        {Hat::Closed::hat_pedal_close_foot, yamahatoi(Note::F, 3)},

        {Kick::kick_hit, yamahatoi(Note::C, 1)},

        {Snare::snare_hit, yamahatoi(Note::D, 1)},
        {Snare::snare_sidestick, yamahatoi(Note::C_SHARP, 1)}
    });
}