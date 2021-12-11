#include <inttypes.h>
#include <string>

#include "../Keys.hpp"
#include "../Mapping.hpp"
#include "../Mappings.hpp"

using namespace Keys;

Mapping Mappings::LogicPro::getDrummerMapping() {
    return Mapping("Logic Pro Drummer", Mappings::GeneralMIDI::getGmStandardMapping());
}