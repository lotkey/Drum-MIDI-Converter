#include "../../../SampleTree/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::Mixwave::getGojiraMarioDuplantierMapping() {
    using namespace Keys;
    return Mapping("Mixwave Gojira Mario Duplantier", {
        {Cymbal::Hit::China::_1, {{Note::F_SHARP, 2}, {Note::F_SHARP, 6}}},
        {Cymbal::Choke::China::_1, {{Note::G, 6}, {Note::F_SHARP, 3}}},
        {Cymbal::Hit::China::_2, {{Note::E, 2}, {Note::E, 6}}},
        {Cymbal::Choke::China::_2, {{Note::F, 6}, {Note::G, 3}}},
        {Cymbal::Hit::Crash::_1, {{Note::C_SHARP, 2}, {Note::G, 5}}},
        {Cymbal::Choke::Crash::_1, {{Note::G_SHARP, 5}, {Note::C_SHARP, 3}}},
        {Cymbal::Hit::Crash::_2, {{Note::A, 2}, {Note::A, 5}}},
        {Cymbal::Choke::Crash::_2, {{Note::A_SHARP, 5}, {Note::A, 3}}},
        {Cymbal::Hit::Splash::_1, {{Note::G, 2}, {Note::D, 6}}},
        {Cymbal::Choke::Splash::_1, {{Note::D_SHARP, 6}}},
        {Cymbal::Hit::Stack::_1, {{Note::G_SHARP, 2}}},
        {Cymbal::Choke::Splash::_1, {{Note::G_SHARP, 3}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Bell::Ride::Tip::_1, {{Note::C, 3}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::B, 2}}},
        {Cymbal::Choke::Ride::_1, {{Note::B, 3}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}, {Note::F, 1}}},
        {Tom::Rim::Floor::_1, {{Note::G, -1}}},
        {Tom::Hit::Rack::_1, {{Note::D, 2}, {Note::C, 2}}},
        {Tom::Rim::Rack::_1, {{Note::B, -1}}},
        {Tom::Hit::Rack::_2, {{Note::B, 1}, {Note::A, 1}}},
        {Tom::Rim::Rack::_2, {{Note::A, -1}}},
        
        {Hat::Midi::cc, {{Note::G_SHARP, 0}}},
        {Hat::Hit::Closed::Edge::_1, {{Note::E, 4}}},
        {Hat::Hit::Closed::Tip::_1, {{Note::F_SHARP, 1}, {Note::D_SHARP, 4}}},
        {Hat::Hit::Open::_0, {{Note::F, 4}}},
        {Hat::Hit::Open::_1, {{Note::F_SHARP, 4}}},
        {Hat::Hit::Open::_2, {{Note::G, 4}}},
        {Hat::Hit::Open::_3, {{Note::A_SHARP, 1}, {Note::A_SHARP, 4}}},
        {Hat::Hit::Open::_4, {{Note::B, 4}}},
        {Hat::Hit::Open::_5, {{Note::C, 5}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::G_SHARP, 1}, {Note::G_SHARP, 4}}},
        {Hat::Hit::Open::Pedal::Splash::_1, {{Note::A, 4}}},
        {Hat::Hit::Closed::Tip::Tight::_1, {{Note::D, 4}}},

        {Kick::_1, {{Note::C, 1}, {Note::B, 0}}},

        {Snare::Hit::_1, {{Note::D, 1}, {Note::E, 1}}},
        {Snare::Hit::off, {{Note::D, 0}}},
        {Snare::Hit::ruff, {{Note::C_SHARP, 0}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}, {Note::D_SHARP, 0}}},

        {Perc::sticks, {{Note::G, 0}}}
    });
}