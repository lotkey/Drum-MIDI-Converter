#include "../../../SampleTree/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::Eastwest::getProdrummerMapping() {
    using namespace Keys;
    return Mapping("Eastwest Prodrummer", {
        {Cymbal::Hit::Crash::_1, {{Note::F_SHARP, 4}, {Note::F_SHARP, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::G, 4}, {Note::G, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::G_SHARP, 4}, {Note::G_SHARP, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::A, 4}, {Note::A, 2}}},
        {Cymbal::Bell::Ride::_1, {{Note::D_SHARP, 2}, {Note::D_SHARP, 4}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::E, 2}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::E, 4}}},
        {Cymbal::Choke::Ride::_1, {{Note::F, 2}, {Note::F, 4}}},

        {Tom::Hit::Floor::_1, {{Note::F, 1}, {Note::B, 1}}},
        {Tom::Rim::Floor::_1, {{Note::F, 3}, {Note::B, 3}}},
        {Tom::Hit::Rack::_1, {{Note::G, 1}}},
        {Tom::Rim::Shot::Rack::_1, {{Note::C, 2}, {Note::C, 4}}},
        {Tom::Hit::Rack::_2, {{Note::A, 1}, {Note::D, 2}}},
        {Tom::Rim::Shot::Rack::_2, {{Note::A, 3}, {Note::D, 4}}},

        {Hat::Hit::Closed::_0, {{Note::F_SHARP, 1}, {Note::C_SHARP, 2}, {Note::C_SHARP, 4}}},
        {Hat::Hit::Closed::Edge::_1, {{Note::F_SHARP, 3}}},
        {Hat::Hit::Open::_0, {{Note::G_SHARP, 1}, {Note::G_SHARP, 3}}},
        {Hat::Hit::Open::_1, {{Note::A_SHARP, 1}, {Note::A_SHARP, 3}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::A_SHARP, 0}}},
        {Hat::Hit::Open::Pedal::Splash::_1, {{Note::A_SHARP, 2}}},
        
        {Kick::_1, {{Note::C, 1}, {Note::B, 2}, {Note::C, 3}, {Note::B, 0}}},

        {Snare::Hit::_1, {{Note::D, 1}, {Note::D, 3}}},
        {Snare::Alt::Rim::Shot::_1, {{Note::C_SHARP, 3}, {Note::E, 1}}},
        {Snare::Hit::ruff, {{Note::D_SHARP, 3}, {Note::E, 3}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}}
    });
}