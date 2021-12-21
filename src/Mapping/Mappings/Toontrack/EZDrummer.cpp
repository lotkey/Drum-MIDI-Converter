#include <cinttypes>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::Toontrack::getEZDrummerMapping() {
    using namespace Keys;
    return Mapping("Toontrack EZdrummer", {
        {Perc::clap, {{Note::C_SHARP, -2}}},

        {Cymbal::Hit::Crash::_1, {{Note::G, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::G_SHARP, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::D, 2}}},
        {Cymbal::Hit::Crash::_3, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::_3, {{Note::A_SHARP, 2}}},
        {Cymbal::Hit::Crash::_4, {{Note::E, 2}}},
        {Cymbal::Choke::Crash::_4, {{Note::F_SHARP, 2}}}
    });
}