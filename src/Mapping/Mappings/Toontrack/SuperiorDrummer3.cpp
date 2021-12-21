#include <cinttypes>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::Toontrack::getSuperiorDrummer3Mapping() {
    using namespace Keys;
    return Mapping("Toontrack Superior Drummer 3", {
        {Cymbal::Bell::China::_1, {{Note::C_SHARP, 7}}},
        {Cymbal::Bell::China::Tip::_1, {{Note::E, 7}}},
        {Cymbal::Hit::China::Bow::_1, {{Note::D_SHARP, 7}}},
        {Cymbal::Hit::China::Bow::Tip::_1, {{Note::C, 7}}},
        {Cymbal::Hit::China::_1, {{Note::E, 2}, {Note::D, 7}}},
        {Cymbal::Choke::China::_1, {{Note::F_SHARP, 2}, {Note::B, 6}}},
        {Cymbal::Bell::Crash::_1, {{Note::C_SHARP, 5}}},
        {Cymbal::Bell::Crash::Tip::_1, {{Note::E, 5}}},
        {Cymbal::Hit::Crash::Bow::_1, {{Note::D_SHARP, 5}}},
        {Cymbal::Hit::Crash::Bow::Tip::_1, {{Note::C, 5}}},
        {Cymbal::Hit::Crash::_1, {{Note::D, 5}}},
        {Cymbal::Choke::Crash::_1, {{Note::B, 4}}},
        {Cymbal::Bell::Crash::_2, {{Note::E, 0}, {Note::F_SHARP, 5}}},
        {Cymbal::Bell::Crash::Tip::_2, {{Note::A, 5}}},
        {Cymbal::Hit::Crash::Bow::_2, {{Note::G_SHARP, 5}}},
        {Cymbal::Hit::Crash::Bow::Tip::_2, {{Note::D_SHARP, 0}, {Note::F, 5}}},
        {Cymbal::Hit::Crash::_2, {{Note::C_SHARP, 2}, {Note::G, 5}}},
        {Cymbal::Choke::Crash::_2, {{Note::B, 4}, {Note::A_SHARP, 5}}},
        {Cymbal::Bell::Crash::_3, {{Note::C_SHARP, 6}}},
        {Cymbal::Bell::Crash::Tip::_3, {{Note::E, 6}}},
        {Cymbal::Hit::Crash::Bow::_3, {{Note::D_SHARP, 6}}},
        {Cymbal::Hit::Crash::Bow::Tip::_3, {{Note::C, 6}}},
        {Cymbal::Hit::Crash::_3, {{Note::G, 2}, {Note::D, 6}}},
        {Cymbal::Choke::Crash::_3, {{Note::G_SHARP, 2}, {Note::B, 5}}},
        {Cymbal::Bell::Crash::_4, {{Note::G_SHARP, 0}, {Note::F_SHARP, 6}}},
        {Cymbal::Bell::Crash::Tip::_4, {{Note::A, 6}}},
        {Cymbal::Hit::Crash::Bow::_4, {{Note::G_SHARP, 6}}},
        {Cymbal::Hit::Crash::Bow::Tip::_4, {{Note::G, 0}, {Note::F, 6}}},
        {Cymbal::Hit::Crash::_4, {{Note::A, 2}, {Note::G, 6}}},
        {Cymbal::Choke::Crash::_4, {{Note::A_SHARP, 2}, {Note::A_SHARP, 6}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Rimshot::Floor::Rim::_1, {{Note::D, 4}}},
        {Tom::Rimshot::Floor::_1, {{Note::D_SHARP, 4}}},
        {Tom::Hit::Floor::_2, {{Note::F, 1}}},
        {Tom::Rimshot::Floor::Rim::_2, {{Note::C, 4}}},
        {Tom::Rimshot::Floor::_2, {{Note::C_SHARP, 4}}}
    });
}