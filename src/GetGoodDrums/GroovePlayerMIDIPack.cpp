#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::GetGoodDrums::getGroovePlayerMIDIPackMapping() {
    return Mapping("GGD Groove Player MIDI Pack", {
        {Cymbal::Hit::China::china1_hit, yamahatoi(Note::E, 2)},
        {Cymbal::Hit::China::china2_hit, yamahatoi(Note::D, 4)},
        {Cymbal::Hit::Crash::crash1_hit, yamahatoi(Note::C_SHARP, 2)},
        {Cymbal::Choke::Crash::crash1_choke, yamahatoi(Note::F_SHARP, 3)},
        {Cymbal::Hit::Crash::crash2_hit, yamahatoi(Note::A, 2)},
        {Cymbal::Choke::Crash::crash2_choke, yamahatoi(Note::B, 5)},
        {Cymbal::Hit::Splash::splash1_hit, yamahatoi(Note::G, 2)},
        {Cymbal::Hit::Splash::splash2_hit, yamahatoi(Note::E, 3)},
        {Cymbal::Hit::Stack::stack1_hit, yamahatoi(Note::D_SHARP, 4)},
        {Cymbal::Bell::Ride::ride1_bell, yamahatoi(Note::F, 2)},
        {Cymbal::Hit::Ride::Bow::ride1_bow, yamahatoi(Note::D_SHARP, 2)},
        {Cymbal::Hit::Ride::Edge::ride1_edge, yamahatoi(Note::B, 2)},

        {Tom::Hit::Floor::tom_floor1, yamahatoi(Note::G, 1)},
        {Tom::Hit::Floor::tom_floor2, yamahatoi(Note::F, 1)},
        {Tom::Hit::Rack::tom_rack1, yamahatoi(Note::D, 2)},
        {Tom::Hit::Rack::tom_rack2, yamahatoi(Note::C, 2)},

        {Hat::Closed::Edge::hat_closed_edge, yamahatoi(Note::F_SHARP, 2)},
        {Hat::Closed::Tip::hat_closed_tip, yamahatoi(Note::A_SHARP, -2)},
        {Hat::Open::hat_open0, yamahatoi(Note::A_SHARP, 2)},
        {Hat::Open::hat_open1, yamahatoi(Note::A_SHARP, 1)},
        {Hat::Open::hat_open2, yamahatoi(Note::A_SHARP, 3)},
        {Hat::Closed::hat_pedal_close_foot, yamahatoi(Note::G_SHARP, 1)},
        {Hat::Closed::Edge::hat_tight_edge, yamahatoi(Note::F_SHARP, 1)},
        {Hat::Closed::Tip::hat_tight_tip, yamahatoi(Note::D, 3)},
        {Hat::Open::hat_x_open, yamahatoi(Note::G_SHARP, 2)},

        {Kick::kick_hit, yamahatoi(Note::C, 1)},

        {Snare::Hit::snare_flam, yamahatoi(Note::A, 3)},
        {Snare::Hit::snare_hit, yamahatoi(Note::D, 1)},
        {Snare::Hit::snare_ruff, yamahatoi(Note::D_SHARP, 1)},
        {Snare::Side::snare_sidestick, yamahatoi(Note::C_SHARP, 1)}
    });
}