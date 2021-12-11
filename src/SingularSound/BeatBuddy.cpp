#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::SingularSound::getBeatBuddyMapping() {
    return Mapping("Singular Sound Beat Buddy", {
        {Perc::clap, yamahatoi(Note::D_SHARP, 1)},
        {Perc::Cowbell::cowbell_hit, yamahatoi(Note::G_SHARP, 2)},
        {Perc::shaker, yamahatoi(Note::A_SHARP, 4)},
        {Perc::sticks, yamahatoi(Note::A, 0)},
        {Perc::Tambourine::tambourine_hit, yamahatoi(Note::F_SHARP, 2)},

        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::C_SHARP, 2)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::A, 2)},
        {Cymbal::Hit::Splash::splash1_hit, yamahatoi(Note::G, 2)},
        {Cymbal::Hit::Splash::splash2_hit, yamahatoi(Note::B, 2)},
        {Cymbal::Hit::Ride::ride1_hit, yamahatoi(Note::F, 2)},
        {Cymbal::Hit::Ride::Bow::ride1_bow, yamahatoi(Note::D_SHARP, 2)},

        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::G, 1)},
        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::D, 2)},
        {Tom::Hit::Rack::tom_rack2, yamahatoi(Note::C, 2)},
        {Tom::Hit::Rack::tom_rack3, yamahatoi(Note::A, 1)},

        {Hat::Closed::hat_closed0, yamahatoi(Note::F_SHARP, 1)},
        {Hat::Closed::hat_pedal_close_foot, yamahatoi(Note::G_SHARP, 1)},
        {Hat::Open::hat_open0, yamahatoi(Note::F_SHARP, 1)},

        {Kick::kick_hit, yamahatoi(Note::C, 1)},

        {Snare::Hit::snare_hit, yamahatoi(Note::D, 1)},
        {Snare::Side::snare_sidestick, yamahatoi(Note::C_SHARP, 1)}
    });
}