#include <cinttypes>

#include "../Midi/Note.hpp"
#include "./Mappings.hpp"

namespace Mappings
{

    // Converts from Yamaha standard to integer
    uint8_t yamahatoi(const Note &note, const int8_t &octave)
    {
        return 12 * (octave + 2) + (int)note;
    }

    std::map<std::string, Mapping> getAllMappings()
    {
        using namespace Mappings;

        auto nameMapPair = [](const Mapping &map)
        {
            return std::pair<std::string, Mapping>(map.name(), map);
        };

        return {
            nameMapPair(Drumforge::getBergstrandMapping()),
            nameMapPair(Drumforge::getUltimateMapping()),
            nameMapPair(GeneralMIDI::getGmStandardMapping()),
            nameMapPair(GetGoodDrums::getGroovePlayerMIDIPackMapping()),
            nameMapPair(GetGoodDrums::Invasion::getGGDMapping()),
            nameMapPair(GetGoodDrums::Invasion::getInvasionMapping()),
            nameMapPair(GetGoodDrums::ModernAndMassive::getGGDMapping()),
            nameMapPair(GetGoodDrums::ModernAndMassive::getGMMapping()),
            nameMapPair(GetGoodDrums::ModernAndMassive::getHalpernMapping()),
            nameMapPair(GetGoodDrums::OneKitWonder::AggressiveRock::getInvasionMapping()),
            nameMapPair(GetGoodDrums::OneKitWonder::Architects::getInvasionMapping()),
            nameMapPair(GetGoodDrums::OneKitWonder::ClassicRock::getGGDMapping()),
            nameMapPair(GetGoodDrums::OneKitWonder::ClassicRock::getGMMapping()),
            nameMapPair(GetGoodDrums::OneKitWonder::ClassicRock::getHalpernMapping()),
            nameMapPair(GetGoodDrums::OneKitWonder::ClassicRock::getInvasionmapping()),
            nameMapPair(GetGoodDrums::OneKitWonder::Metal::getInvasionmapping()),
            nameMapPair(GetGoodDrums::OneKitWonder::ModernFusion::getInvasionmapping()),
            nameMapPair(GetGoodDrums::MattHalpern::getGGDMapping()),
            nameMapPair(GetGoodDrums::MattHalpern::getGMMapping()),
            nameMapPair(GetGoodDrums::MattHalpern::getHalpernMapping()),
            nameMapPair(GuitarPro::getDrumMapMapping()),
            nameMapPair(LogicPro::getDrummerMapping()),
            nameMapPair(MandaAudio::getMTPowerDrumKit2Mapping()),
            nameMapPair(Mixwave::getGojiraMarioDuplantierMapping()),
            nameMapPair(Mixwave::getThomasPridgenDrumsMapping()),
            nameMapPair(NaughtySealAudio::getPerfectDrumsMapping()),
            nameMapPair(SingularSound::getBeatBuddyMapping()),
            nameMapPair(SolemnTones::getMjolnirDrumsMapping()),
            nameMapPair(StevenSlateDrums::getSSDMapping()),
            nameMapPair(StevenSlateDrums::getSSD5Mapping()),
            nameMapPair(Toontrack::getEZDrummerMapping()),
            nameMapPair(Toontrack::getEZDrummerProgressiveFoundryMapping()),
            nameMapPair(Toontrack::getSuperiorDrummer3Mapping()),
            nameMapPair(XLNAudio::getAddictiveDrums2Mapping())
        };
    }

}