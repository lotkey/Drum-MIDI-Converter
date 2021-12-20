#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

using namespace Keys;

Mapping Mappings::StevenSlateDrums::getSSD5Mapping() {
    return Mapping("Steven Slate Drums", {
        {Cymbal::Hit::China::Bow::Tip::china1_bow_tip, {{Note::A, 5}}},
        {Cymbal::Hit::Crash::Bow::Tip::crash1_bow_tip, {{Note::G_SHARP, 1}}},
        {Cymbal::Hit::Crash::Bow::Tip::crash2_bow_tip, {{Note::G, 5}}},
        {Cymbal::Hit::Splash::Tip::splash1_tip, {{Note::F_SHARP, 5}}},

        {Perc::Tambourine::tambourine_hit, {{Note::G, 4}}},
        {Perc::Tambourine::tambourine_down, {{Note::F_SHARP, 4}}},
        {Perc::Tambourine::tambourine_up, {{Note::F, 4}}},
        {Perc::clap, {{Note::E, 4}}},
        {Perc::Cowbell::cowbell_tip, {{Note::D_SHARP, 4}}},
        {Perc::Cowbell::cowbell_shank, {{Note::D, 4}}},
    
        {Hat::Open::hat_pedal_splash, {{Note::C_SHARP, 4}}},
        {Hat::Closed::hat_pedal_close_foot, {{Note::C, 4}}},
        {Hat::Open::Tip::hat_open0_tip, {{Note::A, 3}}},
        {Hat::Open::Tip::hat_open1_tip, {{Note::A_SHARP, 3}}},
        {Hat::Open::Tip::hat_open2_tip, {{Note::B, 3}}},
        {Hat::Open::Tip::hat_loose_tip, {{Note::G_SHARP, 3}}},
        {Hat::Closed::Tip::hat_closed_tip, {{Note::G, 3}}},
        {Hat::Closed::Tip::hat_tight_tip, {{Note::F_SHARP, 3}}},
        {Hat::Open::Shank::hat_shank_open2, {{Note::F, 3}}},
        {Hat::Open::Shank::hat_shank_open1, {{Note::E, 3}}},
        {Hat::Open::Shank::hat_shank_open0, {{Note::D_SHARP, 3}}},
        {Hat::Open::Shank::hat_shank_loosen, {{Note::D, 3}}},
        {Hat::Closed::Shank::hat_shank_closed, {{Note::C_SHARP, 3}}},
        {Hat::Closed::Shank::hat_shank_closed_tight, {{Note::C, 3}}},
        {Hat::Open::hat_cc, {{Note::A_SHARP, 1}}},

        {Cymbal::Hit::Ride::Edge::ride1_edge, {{Note::B, 2}}},
        {Cymbal::Choke::Ride::ride1_choke, {{Note::A_SHARP, 2}}},
        {Cymbal::Hit::Crash::crash1_hit, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::crash1_choke, {{Note::G_SHARP, 2}}},
        {Cymbal::Hit::Crash::crash2_hit, {{Note::G, 2}}},
        {Cymbal::Choke::Crash::crash2_choke, {{Note::F_SHARP, 2}}},
        {Cymbal::Bell::Ride::ride1_bell, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::ride1_bow, {{Note::E, 2}}},
        {Cymbal::Hit::Ride::Bow::Tip::ride1_bow_tip, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::Splash::splash1_hit, {{Note::D, 2}}},
        {Cymbal::Choke::Splash::splash1_choke, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::China::china1_choke, {{Note::G_SHARP, 0}}},
        {Cymbal::Hit::China::china1_hit, {{Note::G, 0}}},

        {Tom::Hit::Rack::tom_rack1, {{Note::C, 2}}},
        {Tom::Hit::Rack::tom_rack2, {{Note::B, 1}}},
        {Tom::Hit::Floor::tom_floor1, {{Note::G, 1}}},
        {Tom::Hit::Floor::tom_floor2, {{Note::F, 1}}},
        {Tom::Rimshot::Rack::tom_rack1_rimshot, {{Note::G, -1}}},
        {Tom::Rimshot::Rack::tom_rack2_rimshot, {{Note::F, -1}}},
        {Tom::Rimshot::Floor::tom_floor1_rimshot, {{Note::D, -1}}},
        {Tom::Rimshot::Floor::tom_floor2_rimshot, {{Note::C, -1}}},

        {Snare::Side::snare_rimshot, {{Note::E, 1}}},
        {Snare::Side::snare_rimclick, {{Note::D_SHARP, 1}}},
        {Snare::Hit::snare_hit, {{Note::D, 1}}},
        {Snare::Side::snare_sidestick, {{Note::C_SHARP, 1}}},
        {Snare::Side::snare_side, {{Note::A_SHARP, 0}}},
        {Snare::Side::snare_rimshot_edge, {{Note::A, 0}}},
        {Snare::Hit::snare_roll, {{Note::A, -1}}},

        {Kick::kick_hit, {{Note::C, 1}}},
        {Kick::kick_left, {{Note::B, 0}}}
    });
}