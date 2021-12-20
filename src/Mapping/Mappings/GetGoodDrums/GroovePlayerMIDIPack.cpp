#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

using namespace Keys;

Mapping Mappings::GetGoodDrums::getGroovePlayerMIDIPackMapping() {
    return Mapping("GGD Groove Player MIDI Pack", {
        {Cymbal::Hit::China::china1_hit, {{Note::E, 2}}},
        {Cymbal::Hit::China::china2_hit, {{Note::D, 4}}},
        {Cymbal::Hit::Crash::crash1_hit, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::Crash::crash1_choke, {{Note::F_SHARP, 3}}},
        {Cymbal::Hit::Crash::crash2_hit, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::crash2_choke, {{Note::B, 5}}},
        {Cymbal::Hit::Splash::splash1_hit, {{Note::G, 2}}},
        {Cymbal::Hit::Splash::splash2_hit, {{Note::E, 3}}},
        {Cymbal::Hit::Stack::stack1_hit, {{Note::D_SHARP, 4}}},
        {Cymbal::Bell::Ride::ride1_bell, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::ride1_bow, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::Ride::Edge::ride1_edge, {{Note::B, 2}}},

        {Tom::Hit::Floor::tom_floor1, {{Note::G, 1}}},
        {Tom::Hit::Floor::tom_floor2, {{Note::F, 1}}},
        {Tom::Hit::Rack::tom_rack1, {{Note::D, 2}}},
        {Tom::Hit::Rack::tom_rack2, {{Note::C, 2}}},

        {Hat::Closed::Edge::hat_closed_edge, {{Note::F_SHARP, 2}}},
        {Hat::Closed::Tip::hat_closed_tip, {{Note::A_SHARP, -2}}},
        {Hat::Open::hat_open0, {{Note::A_SHARP, 2}}},
        {Hat::Open::hat_open1, {{Note::A_SHARP, 1}}},
        {Hat::Open::hat_open2, {{Note::A_SHARP, 3}}},
        {Hat::Closed::hat_pedal_close_foot, {{Note::G_SHARP, 1}}},
        {Hat::Closed::Edge::hat_tight_edge, {{Note::F_SHARP, 1}}},
        {Hat::Closed::Tip::hat_tight_tip, {{Note::D, 3}}},
        {Hat::Open::hat_x_open, {{Note::G_SHARP, 2}}},

        {Kick::kick_hit, {{Note::C, 1}}},

        {Snare::Hit::snare_flam, {{Note::A, 3}}},
        {Snare::Hit::snare_hit, {{Note::D, 1}}},
        {Snare::Hit::snare_ruff, {{Note::D_SHARP, 1}}},
        {Snare::Side::snare_sidestick, {{Note::C_SHARP, 1}}}
    });
}