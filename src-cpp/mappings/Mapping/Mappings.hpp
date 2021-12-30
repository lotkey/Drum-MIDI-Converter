#ifndef MAPPINGS_HPP
#define MAPPINGS_HPP

#include <cinttypes>

#include "../Parsing/Keys.hpp"
#include "../Mapping/Mapping.hpp"
#include "../Midi/Note.hpp"

// Namespace for all mappings
namespace Mappings {

    uint8_t yamahatoi(const Note&, const int8_t&);
    std::map<std::string, Mapping> getAllMappings();

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
        Mapping getOKWArchitectsMapping();
        Mapping getOKWClassicRockMapping();
        Mapping getOKWMetalMapping();
        Mapping getOKWModernFusionMapping();
        Mapping getP4MattHalpernMapping();
    }

    namespace GuitarPro {
        Mapping getDrumMapping();
    }

    namespace LogicPro {
        Mapping getDrummerMapping();
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