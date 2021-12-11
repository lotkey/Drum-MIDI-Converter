#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::StevenSlateDrums::getSSD5Mapping() {
    return Mapping("Steven Slate Drums", {
        {Cymbal::Hit::China::Bow::Tip::china1_bow_tip, yamahatoi(Note::A, 5)},
        {Cymbal::Hit::Crash::Bow::Tip::crash1_bow_tip, yamahatoi(Note::G_SHARP, 1)},
        {Cymbal::Hit::Crash::Bow::Tip::crash2_bow_tip, yamahatoi(Note::G, 5)},
        {Cymbal::Hit::Splash::Tip::splash1_tip, yamahatoi(Note::F_SHARP, 5)},

        {Perc::Tambourine::tambourine_hit, yamahatoi(Note::G, 4)},
        {Perc::Tambourine::tambourine_down, yamahatoi(Note::F_SHARP, 4)},
        {Perc::Tambourine::tambourine_up, yamahatoi(Note::F, 4)},
        {Perc::clap, yamahatoi(Note::E, 4)},
        {Perc::Cowbell::cowbell_tip, yamahatoi(Note::D_SHARP, 4)},
        {Perc::Cowbell::cowbell_shank, yamahatoi(Note::D, 4)},
    
        {Hat::Open::hat_pedal_splash, yamahatoi(Note::C_SHARP, 4)},
        {Hat::Closed::hat_pedal_close_foot, yamahatoi(Note::C, 4)},
        {Hat::Open::Tip::hat_open0_tip, yamahatoi(Note::A, 3)},
        {Hat::Open::Tip::hat_open1_tip, yamahatoi(Note::A_SHARP, 3)},
        {Hat::Open::Tip::hat_open2_tip, yamahatoi(Note::B, 3)},
        {Hat::Open::Tip::hat_loose_tip, yamahatoi(Note::G_SHARP, 3)},
        {Hat::Closed::Tip::hat_closed_tip, yamahatoi(Note::G, 3)},
        {Hat::Closed::Tip::hat_tight_tip, yamahatoi(Note::F_SHARP, 3)},
        {Hat::Open::Shank::hat_shank_open2, yamahatoi(Note::F, 3)},
        {Hat::Open::Shank::hat_shank_open1, yamahatoi(Note::E, 3)},
        {Hat::Open::Shank::hat_shank_open0, yamahatoi(Note::D_SHARP, 3)},
        {Hat::Open::Shank::hat_shank_loosen, yamahatoi(Note::D, 3)},
        {Hat::Closed::Shank::hat_shank_closed, yamahatoi(Note::C_SHARP, 3)},
        {Hat::Closed::Shank::hat_shank_closed_tight, yamahatoi(Note::C, 3)},
        {Hat::Open::hat_cc, yamahatoi(Note::A_SHARP, 1)},

        {Cymbal::Hit::Ride::Edge::ride1_edge, yamahatoi(Note::B, 2)},
        {Cymbal::Choke::Ride::ride1_choke, yamahatoi(Note::A_SHARP, 2)},
        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::A, 2)},
        {Cymbal::Choke::Crash::crash1_choke, yamahatoi(Note::G_SHARP, 2)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::G, 2)},
        {Cymbal::Choke::Crash::crash2_choke, yamahatoi(Note::F_SHARP, 2)},
        {Cymbal::Bell::Ride::ride1_bell, yamahatoi(Note::F, 2)},
        {Cymbal::Hit::Ride::Bow::ride1_bow, yamahatoi(Note::E, 2)},
        {Cymbal::Hit::Ride::Bow::Tip::ride1_bow_tip, yamahatoi(Note::D_SHARP, 2)},
        {Cymbal::Hit::Splash::splash1_hit, yamahatoi(Note::D, 2)},
        {Cymbal::Choke::Splash::splash1_choke, yamahatoi(Note::C_SHARP, 2)},
        {Cymbal::Choke::China::china1_choke, yamahatoi(Note::G_SHARP, 0)},
        {Cymbal::Hit::China::china1_hit, yamahatoi(Note::G, 0)},

        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::C, 2)},
        {Tom::Hit::Rack::tom_rack2, yamahatoi(Note::B, 1)},
        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::G, 1)},
        {Tom::Hit::Floor::tom_floor2, yamahatoi(Note::F, 1)},
        {Tom::Rimshot::Rack::tom_rack1_rimshot, yamahatoi(Note::G, -1)},
        {Tom::Rimshot::Rack::tom_rack2_rimshot, yamahatoi(Note::F, -1)},
        {Tom::Rimshot::Floor::tom_floor1_rimshot, yamahatoi(Note::D, -1)},
        {Tom::Rimshot::Floor::tom_floor2_rimshot, yamahatoi(Note::C, -1)},

        {Snare::Side::snare_rimshot, yamahatoi(Note::E, 1)},
        {Snare::Side::snare_rimclick, yamahatoi(Note::D_SHARP, 1)},
        {Snare::Hit::snare_hit, yamahatoi(Note::D, 1)},
        {Snare::Side::snare_sidestick, yamahatoi(Note::C_SHARP, 1)},
        {Snare::Side::snare_side, yamahatoi(Note::A_SHARP, 0)},
        {Snare::Side::snare_rimshot_edge, yamahatoi(Note::A, 0)},
        {Snare::Hit::snare_roll, yamahatoi(Note::A, -1)},

        {Kick::kick_hit, yamahatoi(Note::C, 1)},
        {Kick::kick_left, yamahatoi(Note::B, 0)}
    });
}