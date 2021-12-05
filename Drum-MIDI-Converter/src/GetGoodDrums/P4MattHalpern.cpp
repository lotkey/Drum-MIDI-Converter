#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::GetGoodDrums::getP4MattHalpernMapping() {
    return Mapping("GGD P4 Matt Halpern", {
        {Cymbal::Hit::China::china1_hit, yamahatoi(Note::F, 3)},
        {Cymbal::Choke::China::china1_choke, yamahatoi(Note::F_SHARP, 3)},
        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::G_SHARP, 2)},
        {Cymbal::Choke::Crash::crash1_choke, yamahatoi(Note::A, 2)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::E, 2)},
        {Cymbal::Choke::Crash::crash2_choke, yamahatoi(Note::F, 2)},
        {Cymbal::Hit::Crash::crash3_hit, yamahatoi(Note::F_SHARP, 2)},
        {Cymbal::Choke::Crash::crash3_choke, yamahatoi(Note::G, 2)},
        {Cymbal::Hit::Splash::splash1_hit, yamahatoi(Note::C_SHARP, 4)},
        {Cymbal::Choke::Splash::splash1_choke, yamahatoi(Note::D, 4)},
        {Cymbal::Hit::Splash::splash2_hit, yamahatoi(Note::D_SHARP, 4)},
        {Cymbal::Choke::Splash::splash2_choke, yamahatoi(Note::E, 4)},
        {Cymbal::Hit::Splash::splash3_hit, yamahatoi(Note::E, 4)},
        {Cymbal::Choke::Splash::splash3_choke, yamahatoi(Note::F, 4)},
        {Cymbal::Hit::Stack::stack1_hit, yamahatoi(Note::F_SHARP, 4)},
        {Cymbal::Bell::Ride::ride1_bell, yamahatoi(Note::C_SHARP, 3)},
        {Cymbal::Hit::Ride::ride1_bow, yamahatoi(Note::D, 3)},

        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::B, 0)},
        {Tom::Hit::Floor::tom_floor2, yamahatoi(Note::C, 1)},
        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::A, 0)},
        {Tom::Hit::Rack::tom_rack2, yamahatoi(Note::A_SHARP, 0)}
    });
}