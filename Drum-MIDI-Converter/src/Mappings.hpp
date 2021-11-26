#ifndef MAPPINGS_H
#define MAPPINGS_H

#include <cinttypes>

#include "Keys.hpp"
#include "Mapping.hpp"
#include "Note.hpp"

namespace Mappings {

    uint8_t yamahatoi(const Note&, const int8_t&);

    namespace GetGoodDrums {
        Mapping getInvasionMapping();
        Mapping getModernAndMassiveMapping();
    }

    namespace MandaAudio {
        Mapping getMTPowerDrumKit2Mapping();
    }

    namespace Drumforge {
        Mapping getUltimateMapping();
    }
}

#endif