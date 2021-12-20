#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

using namespace Keys;

Mapping Mappings::MandaAudio::getMTPowerDrumKit2Mapping() {
    return Mapping("Manda Audio MTPowerDrumKit2", {
        {Cymbal::Hit::China::china1_hit, {{Note::E, 2}}},
        {Cymbal::Hit::Crash::crash1_hit, {{Note::C_SHARP, 2}}},
        {Cymbal::Hit::Crash::crash2_hit, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::crash2_choke, {{Note::A_SHARP, 2}}},
        {Cymbal::Hit::Splash::splash1_hit, {{Note::G, 2}}},
        {Cymbal::Bell::Ride::ride1_bell, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::ride1_hit, {{Note::D_SHARP, 2}}},

        {Tom::Hit::Floor::tom_floor1, {{Note::F, 1}}},
        {Tom::Hit::Rack::tom_rack1, {{Note::C, 2}}},
        {Tom::Hit::Rack::tom_rack2, {{Note::A, 1}}},

        {Hat::Closed::hat_closed0, {{Note::F_SHARP, 1}}},
        {Hat::Open::hat_open0, {{Note::G_SHARP, 1}}},
        {Hat::Open::hat_open1, {{Note::A_SHARP, 1}}},
        {Hat::Closed::hat_pedal_close_foot, {{Note::F, 3}}},

        {Kick::kick_hit, {{Note::C, 1}}},

        {Snare::Hit::snare_hit, {{Note::D, 1}}},
        {Snare::Side::snare_sidestick, {{Note::C_SHARP, 1}}}
    });
}