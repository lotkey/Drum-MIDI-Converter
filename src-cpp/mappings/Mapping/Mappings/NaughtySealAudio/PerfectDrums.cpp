#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::NaughtySealAudio::getPerfectDrumsMapping() {
    using namespace Keys;
    return Mapping("Naughty Seal Audio Perfect Drums", {
        {Cymbal::Bell::Crash::_1, {{Note::G_SHARP, 2}}},
        {Cymbal::Hit::China::_1, {{Note::D, 2}}},
        {Cymbal::Hit::China::_2, {{Note::E, 2}}},
        {Cymbal::Hit::Crash::_1, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::C_SHARP, 3}}},
        {Cymbal::Hit::Crash::_2, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::A, 3}}},
        {Cymbal::Hit::Crash::_3, {{Note::C, 2}}},
        {Cymbal::Choke::Crash::_3, {{Note::C, 3}}},
        {Cymbal::Hit::Crash::_4, {{Note::A_SHARP, 2}}},
        {Cymbal::Choke::Crash::_4, {{Note::A_SHARP, 3}}},
        {Cymbal::Hit::Splash::_1, {{Note::G, 2}}},
        {Cymbal::Hit::Splash::_2, {{Note::B, 2}}},
        {Cymbal::Hit::Ride::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},

        {Tom::Hit::Floor::_1, {{Note::F, 1}}},
        {Tom::Hit::Rack::_1, {{Note::A, 1}}},
        {Tom::Hit::Rack::_2, {{Note::G, 1}}},

        {Hat::Closed::Edge::_1, {{Note::F, 1}}},
        {Hat::Closed::Tip::_1, {{Note::D_SHARP, 3}}},
        {Hat::Open::_0, {{Note::A_SHARP, 1}}},
        {Hat::Open::_1, {{Note::F, 3}}},
        {Hat::Open::_2, {{Note::F_SHARP, 3}}},
        {Hat::Closed::foot, {{Note::G_SHARP, 1}}},
        
        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Alt::Rim::Shot::_1, {{Note::E, 1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}}
    });
}