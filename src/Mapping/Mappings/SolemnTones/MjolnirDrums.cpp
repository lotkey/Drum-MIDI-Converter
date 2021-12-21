#include <cinttypes>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::SolemnTones::getMjolnirDrumsMapping() {
    using namespace Keys;
    return Mapping("Solemn Tones Mjolnir Drums", {
        {Cymbal::Bell::Crash::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::China::_1, {{Note::E, 2}}},
        {Cymbal::Hit::Crash::_1, {{Note::C_SHARP, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::A, 2}}},
        {Cymbal::Hit::Splash::_1, {{Note::G, 2}}},
        {Cymbal::Hit::Ride::_1, {{Note::F, 2}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Hit::Rack::_1, {{Note::C, 2}}},
        {Tom::Hit::Rack::_2, {{Note::B, 1}}},

        {Hat::Open::_0, {{Note::A, 1}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::_1, {{Note::D, 1}}}
    });
}