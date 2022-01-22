#pragma once

#include <cinttypes>

#include "../SampleTree/Keys.hpp"
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

        namespace Invasion {
            Mapping getGGDMapping();
            Mapping getInvasionMapping();
        }

        namespace ModernAndMassive {
            Mapping getGGDMapping();
            Mapping getGMMapping();
            Mapping getHalpernMapping();
        }

        namespace OneKitWonder {
            namespace AggressiveRock {
                Mapping getInvasionMapping();
            }

            namespace Architects {
                Mapping getInvasionMapping();
            }

            namespace ClassicRock {
                Mapping getGGDMapping();
                Mapping getGMMapping();
                Mapping getHalpernMapping();
                Mapping getInvasionmapping();
            }

            namespace Metal {
                Mapping getInvasionmapping();
            }

            namespace ModernFusion {
                Mapping getInvasionmapping();
            }
        }

        namespace MattHalpern {
            Mapping getGGDMapping();
            Mapping getGMMapping();
            Mapping getHalpernMapping();
        }
    }

    namespace GuitarPro {
        Mapping getDrumMapMapping();
    }

    namespace LogicPro {
        Mapping getDrummerMapping();
    }

    namespace MandaAudio {
        Mapping getMTPowerDrumKit2Mapping();
    }

    namespace Mixwave {
        Mapping getGojiraMarioDuplantierMapping();
        Mapping getThomasPridgenDrumsMapping();
    }

    namespace NaughtySealAudio {
        Mapping getPerfectDrumsMapping();
    }

    namespace SolemnTones {
        Mapping getMjolnirDrumsMapping();
    }

    namespace StevenSlateDrums {
        Mapping getSSDMapping();
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