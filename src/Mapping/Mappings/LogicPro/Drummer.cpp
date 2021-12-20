#include <inttypes.h>
#include <string>

#include "../../../Parsing/Keys.hpp"
#include "../../Mapping.hpp"
#include "../../Mappings.hpp"
#include "../../../Midi/MidiNote.hpp"

using namespace Keys;

Mapping Mappings::LogicPro::getDrummerMapping() {
    return Mapping("Logic Pro Drummer", Mappings::GeneralMIDI::getGmStandardMapping());
}