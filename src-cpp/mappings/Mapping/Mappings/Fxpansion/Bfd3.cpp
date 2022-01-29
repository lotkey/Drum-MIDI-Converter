#include "../../../SampleTree/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::Fxpansion::getBfd3Mapping() {
    using namespace Keys;
    return Mapping("Fxpansion Bfd3", {
        {Cymbal::Bell::Crash::_1, {{Note::D, 3}}},
        {Cymbal::Hit::Crash::Bow::_1, {{Note::E, 2}}},
        {Cymbal::Hit::Crash::_1, {{Note::C, 4}, {Note::F, 1}}},
        {Cymbal::Choke::Crash::_1, {{Note::D_SHARP, 4}}},
        {Cymbal::Bell::Crash::_2, {{Note::E, 3}}},
        {Cymbal::Hit::Crash::Bow::_2, {{Note::F, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::D, 4}, {Note::G, 1}}},
        {Cymbal::Choke::Crash::_2, {{Note::F_SHARP, 4}}},
        {Cymbal::Bell::Crash::_3, {{Note::F, 3}}},
        {Cymbal::Hit::Crash::Bow::_3, {{Note::G, 2}}},
        {Cymbal::Hit::Crash::_3, {{Note::E, 4}, {Note::A, 1}}},
        {Cymbal::Choke::Crash::_3, {{Note::G_SHARP, 4}}},
        {Cymbal::Bell::Crash::_4, {{Note::G, 3}}},
        {Cymbal::Hit::Crash::_4, {{Note::F, 4}, {Note::B, 1}}},
        {Cymbal::Bell::Crash::_5, {{Note::A, 3}}},
        {Cymbal::Hit::Crash::Bow::_5, {{Note::B, 2}}},
        {Cymbal::Hit::Crash::_5, {{Note::G, 4}, {Note::C, 2}}},
        {Cymbal::Choke::Crash::_5, {{Note::C_SHARP, 5}}},
        {Cymbal::Hit::Ride::_1, {{Note::A, 4}}},
        {Cymbal::Bell::Ride::_1, {{Note::B, 3}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::C, 3}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::D, 2}}},
        {Cymbal::Choke::Ride::_1, {{Note::D_SHARP, 5}}},

        {Tom::Hit::Floor::_1, {{Note::G, 0}}},
        {Tom::Rim::Floor::_1, {{Note::F, 5}}},
        {Tom::Rim::Shot::Floor::_1, {{Note::C_SHARP, 3}}},
        {Tom::Hit::Floor::_2, {{Note::A, 0}}},
        {Tom::Rim::Floor::_2, {{Note::F_SHARP, 5}}},
        {Tom::Rim::Shot::Floor::_2, {{Note::D_SHARP, 3}}},
        {Tom::Hit::Rack::_1, {{Note::D, 1}}},
        {Tom::Rim::Rack::_1, {{Note::A, 5}}},
        {Tom::Rim::Shot::Rack::_1, {{Note::A_SHARP, 3}}},
        {Tom::Hit::Rack::_2, {{Note::E, 1}}},
        {Tom::Rim::Rack::_2, {{Note::A_SHARP, 5}}},
        {Tom::Rim::Shot::Rack::_2, {{Note::C_SHARP, 4}}},
        {Tom::Hit::Rack::_3, {{Note::B, 0}}},
        {Tom::Rim::Rack::_3, {{Note::G, 5}}},
        {Tom::Rim::Shot::Rack::_3, {{Note::F_SHARP, 3}}},
        {Tom::Hit::Rack::_4, {{Note::C, 1}}},
        {Tom::Rim::Rack::_4, {{Note::G_SHARP, 5}}},
        {Tom::Rim::Shot::Rack::_4, {{Note::G_SHARP, 3}}},

        {Hat::Hit::Closed::Bell::_1, {{Note::A_SHARP, 2}}},
        {Hat::Hit::Closed::Edge::_1, {{Note::C_SHARP, 1}}},
        {Hat::Hit::Closed::Tip::_1, {{Note::F_SHARP, 0}}},
        {Hat::Hit::Open::Edge::_0, {{Note::C_SHARP, 1}}},
        {Hat::Hit::Open::Tip::_0, {{Note::F_SHARP, 1}}},
        {Hat::Hit::Open::Edge::_1, {{Note::C_SHARP, 2}}},
        {Hat::Hit::Open::Tip::_1, {{Note::A_SHARP, 1}}},
        {Hat::Hit::Open::Edge::_2, {{Note::F_SHARP, 2}}},
        {Hat::Hit::Open::Tip::_2, {{Note::D_SHARP, 2}}},
        {Hat::Hit::Open::Edge::_3, {{Note::D_SHARP, 1}}},
        {Hat::Hit::Open::Tip::_3, {{Note::A_SHARP, 0}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::G_SHARP, 0}}},
        {Hat::Hit::Open::Pedal::Splash::_1, {{Note::G_SHARP, 2}}},
        
        {Kick::_1, {{Note::C, 0}, {Note::C, 5}}},

        {Snare::Hit::_1, {{Note::D, 0}, {Note::D_SHARP, 0}, {Note::E, 0}}},
        {Snare::Alt::Rim::Shot::_1, {{Note::F, 0}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 0}, {Note::E, 5}}}
    });
}