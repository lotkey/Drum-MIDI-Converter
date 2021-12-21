#include <cinttypes>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::GeneralMIDI::getGmStandardMapping() {
    using namespace Keys;
    return Mapping("General MIDI Standard", {
        {Perc::Cowbell::hit, {{Note::G_SHARP, 2}}},
        {Perc::Tambourine::hit, {{Note::F_SHARP, 2}}},
        {Perc::vibraslap, {{Note::A_SHARP, 2}}},
        
        {Cymbal::Hit::China::_1, {{Note::E, 2}}},
        {Cymbal::Hit::Crash::_1, {{Note::C_SHARP, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::A, 2}}},
        {Cymbal::Hit::Splash::_1, {{Note::G, 2}}},
        {Cymbal::Hit::Ride::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::_2, {{Note::B, 2}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Hit::Floor::_2, {{Note::F, 1}}},
        {Tom::Hit::Rack::_1, {{Note::D, 2}}},
        {Tom::Hit::Rack::_2, {{Note::C, 2}}},
        {Tom::Hit::Rack::_3, {{Note::B, 1}}},
        {Tom::Hit::Rack::_4, {{Note::A, 1}}},

        {Hat::Closed::_0, {{Note::F_SHARP, 1}}},
        {Hat::Open::_1, {{Note::A_SHARP, 1}}},
        {Hat::Closed::foot, {{Note::G_SHARP, 1}}},

        {Kick::_1, {{Note::C, 1}}},
        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}}
    });
}