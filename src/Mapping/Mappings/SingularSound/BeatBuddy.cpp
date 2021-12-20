#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::SingularSound::getBeatBuddyMapping() {
    using namespace Keys;
    return Mapping("Singular Sound Beat Buddy", {
        {Perc::clap, {{Note::D_SHARP, 1}}},
        {Perc::Cowbell::hit, {{Note::G_SHARP, 2}}},
        {Perc::shaker, {{Note::A_SHARP, 4}}},
        {Perc::sticks, {{Note::A, 0}}},
        {Perc::Tambourine::hit, {{Note::F_SHARP, 2}}},

        {Cymbal::Hit::Crash::_1, {{Note::C_SHARP, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::A, 2}}},
        {Cymbal::Hit::Splash::_1, {{Note::G, 2}}},
        {Cymbal::Hit::Splash::_2, {{Note::B, 2}}},
        {Cymbal::Hit::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D_SHARP, 2}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Hit::Rack::_1, {{Note::D, 2}}},
        {Tom::Hit::Rack::_2, {{Note::C, 2}}},
        {Tom::Hit::Rack::_3, {{Note::A, 1}}},

        {Hat::Closed::_0, {{Note::F_SHARP, 1}}},
        {Hat::Closed::foot, {{Note::G_SHARP, 1}}},
        {Hat::Open::_0, {{Note::F_SHARP, 1}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}}
    });
}