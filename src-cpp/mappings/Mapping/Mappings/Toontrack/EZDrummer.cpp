#include "../../../SampleTree/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

Mapping Mappings::Toontrack::getEZDrummerMapping() {
    using namespace Keys;
    return Mapping("Toontrack EZdrummer", {
        {Perc::clap, {{Note::C_SHARP, -2}}},
        {Perc::shaker, {{Note::D, -1}}},
        {Perc::Tambourine::hit, {{Note::D_SHARP, -2}}},

        {Cymbal::Hit::Crash::_1, {{Note::G, 2}}},
        {Cymbal::Choke::Crash::_1, {{Note::G_SHARP, 2}}},
        {Cymbal::Hit::Crash::_2, {{Note::C_SHARP, 2}}},
        {Cymbal::Choke::Crash::_2, {{Note::D, 2}}},
        {Cymbal::Hit::Crash::_3, {{Note::A, 2}}},
        {Cymbal::Choke::Crash::_3, {{Note::A_SHARP, 2}}},
        {Cymbal::Hit::Crash::_4, {{Note::E, 2}}},
        {Cymbal::Choke::Crash::_4, {{Note::F_SHARP, 2}}},
        {Cymbal::Bell::Ride::_1, {{Note::F, 2}}},
        {Cymbal::Hit::Ride::Bow::_1, {{Note::D_SHARP, 2}}},
        {Cymbal::Hit::Ride::Edge::_1, {{Note::B, 2}}},
        {Cymbal::Choke::Ride::_1, {{Note::B, 4}}},

        {Tom::Hit::Floor::_1, {{Note::G, 1}}},
        {Tom::Rim::Shot::Floor::_1, {{Note::D_SHARP, 4}}},
        {Tom::Hit::Floor::_2, {{Note::F, 1}}},
        {Tom::Rim::Shot::Floor::_2, {{Note::C_SHARP, 4}}},
        {Tom::Hit::Rack::_1, {{Note::C, 2}}},
        {Tom::Rim::Shot::Rack::_1, {{Note::A_SHARP, 4}}},
        {Tom::Hit::Rack::_2, {{Note::B, 1}}},
        {Tom::Rim::Shot::Rack::_2, {{Note::G_SHARP, 4}}},
        {Tom::Hit::Rack::_3, {{Note::A, 1}}},
        {Tom::Rim::Shot::Rack::_3, {{Note::F_SHARP, 4}}},

        {Hat::Hit::Closed::Edge::_1, {{Note::A_SHARP, -1}}},
        {Hat::Hit::Closed::Tip::_1, {{Note::F_SHARP, 1}}},
        {Hat::Hit::Open::Loose::_1, {{Note::C, 0}}},
        {Hat::Hit::Open::_0, {{Note::C_SHARP, 0}}},
        {Hat::Hit::Open::_1, {{Note::D, 0}}},
        {Hat::Hit::Open::_2, {{Note::C, 3}}},
        {Hat::Hit::Open::_3, {{Note::F, -1}}},
        {Hat::Hit::Closed::Foot::_1, {{Note::A, -1}}},
        {Hat::Hit::Open::Pedal::Splash::_1, {{Note::B, -1}}},
        {Hat::Midi::seq, {{Note::F, 3}}},
        {Hat::Hit::Closed::Edge::Tight::_1, {{Note::D, 3}}},
        {Hat::Hit::Closed::Tip::Tight::_1, {{Note::D_SHARP, 3}}},

        {Kick::_1, {{Note::C, 1}}},

        {Snare::Hit::_1, {{Note::D, 1}}},
        {Snare::Alt::Rim::Shot::_1, {{Note::E, 1}}},
        {Snare::Alt::Side::stick, {{Note::C_SHARP, 1}}}
    });
}