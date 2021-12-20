#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

using namespace Keys;

Mapping Mappings::SingularSound::getBeatBuddyMapping() {
    return Mapping("Singular Sound Beat Buddy", {
        {Perc::clap, {{Note::D_SHARP, 1}}},
        {Perc::Cowbell::cowbell_hit, {{Note::G_SHARP, 2}}},
        {Perc::shaker, {{Note::A_SHARP, 4}}},
        {Perc::sticks, {{Note::A, 0}}},
        {Perc::Tambourine::tambourine_hit, {{Note::F_SHARP, 2}}},

        {Cymbal::Hit::Crash::crash1_hit, {{Note::C_SHARP, 2}}},
        {Cymbal::Hit::Crash::crash2_hit, {{Note::A, 2}}},
        {Cymbal::Hit::Splash::splash1_hit, {{Note::G, 2}}},
        {Cymbal::Hit::Splash::splash2_hit, {{Note::B, 2}}},
        {Cymbal::Hit::Ride::ride1_hit, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::ride1_bow, {{Note::D_SHARP, 2}}},

        {Tom::Hit::Floor::tom_floor1, {{Note::G, 1}}},
        {Tom::Hit::Rack::tom_rack1, {{Note::D, 2}}},
        {Tom::Hit::Rack::tom_rack2, {{Note::C, 2}}},
        {Tom::Hit::Rack::tom_rack3, {{Note::A, 1}}},

        {Hat::Closed::hat_closed0, {{Note::F_SHARP, 1}}},
        {Hat::Closed::hat_pedal_close_foot, {{Note::G_SHARP, 1}}},
        {Hat::Open::hat_open0, {{Note::F_SHARP, 1}}},

        {Kick::kick_hit, {{Note::C, 1}}},

        {Snare::Hit::snare_hit, {{Note::D, 1}}},
        {Snare::Side::snare_sidestick, {{Note::C_SHARP, 1}}}
    });
}