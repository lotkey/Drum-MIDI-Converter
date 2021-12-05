#ifndef MAPPINGS_HPP
#define MAPPINGS_HPP

#include <cinttypes>

#include "Keys.hpp"
#include "Mapping.hpp"
#include "Note.hpp"

namespace Mappings {

    uint8_t yamahatoi(const Note&, const int8_t&);

    namespace Drumforge {
        Mapping getBergstrandMapping();
        Mapping getUltimateMapping();
    }

    namespace GeneralMIDI {
        Mapping getGmStandardMapping();
    }

    namespace GetGoodDrums {
        Mapping getGroovePlayerMIDIPackMapping();
        Mapping getInvasionMapping();
        Mapping getModernAndMassiveMapping();
        Mapping getOKWAggressiveRockMapping();
        Mapping getOKWClassicRockMapping();
        Mapping getOKWMetalMapping();
        Mapping getOKWModernFusionMapping();
        Mapping getP4MattHalpernMapping();
    }

    namespace GuitarPro {
        Mapping getDrumMapping();
    }

    namespace MandaAudio {
        Mapping getMTPowerDrumKit2Mapping();
    }

    namespace NaughtySealAudio {
        Mapping getPerfectDrumsMapping();
    }

    namespace SolemnTones {
        Mapping getMjolnirDrumsMapping();
    }

    namespace StevenSlateDrums {
        Mapping getSSD5Mapping();
    }
    
    namespace SingularSound {
        Mapping getBeatBuddyMapping();
    }

    namespace Toontrack {
        Mapping getEZDrummerMapping();
        Mapping getEZDrummerProgressiveFoundryMapping();
        Mapping getSuperiorDrummer3Mapping();
    }

    namespace XLNAudio {
        Mapping getAddictiveDrums2Mapping();
    }
}

#endif