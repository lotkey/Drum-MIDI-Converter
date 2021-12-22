#include <cinttypes>

#include "./Mappings.hpp"
#include "../Midi/Note.hpp"

// Converts from Yamaha standard to integer
uint8_t Mappings::yamahatoi(const Note& note, const int8_t& octave) {
    return 12 * (octave + 2) + (int)note;
}

std::map<std::string, Mapping> Mappings::getAllMappings() {
    using namespace Mappings;
    
    auto nameMapPair = [](const Mapping& map) {
        return std::pair<std::string, Mapping>(map.name(), map);
    };

    std::map<std::string, Mapping> map = {
        nameMapPair(Mappings::Drumforge::getBergstrandMapping()),
        nameMapPair(Mappings::Drumforge::getUltimateMapping()),
        nameMapPair(Mappings::GeneralMIDI::getGmStandardMapping()),
        nameMapPair(Mappings::GetGoodDrums::getGroovePlayerMIDIPackMapping()),
        nameMapPair(Mappings::GetGoodDrums::getInvasionMapping()),
        nameMapPair(Mappings::GetGoodDrums::getModernAndMassiveMapping()),
        nameMapPair(Mappings::GetGoodDrums::getOKWAggressiveRockMapping()),
        nameMapPair(Mappings::GetGoodDrums::getOKWArchitectsMapping()),
        nameMapPair(Mappings::GetGoodDrums::getOKWClassicRockMapping()),
        nameMapPair(Mappings::GetGoodDrums::getOKWMetalMapping()),
        nameMapPair(Mappings::GetGoodDrums::getOKWModernFusionMapping()),
        nameMapPair(Mappings::GetGoodDrums::getP4MattHalpernMapping()),
        nameMapPair(Mappings::GuitarPro::getDrumMapping()),
        nameMapPair(Mappings::LogicPro::getDrummerMapping()),
        nameMapPair(Mappings::MandaAudio::getMTPowerDrumKit2Mapping()),
        nameMapPair(Mappings::NaughtySealAudio::getPerfectDrumsMapping()),
        nameMapPair(Mappings::SingularSound::getBeatBuddyMapping()),
        nameMapPair(Mappings::SolemnTones::getMjolnirDrumsMapping()),
        nameMapPair(Mappings::StevenSlateDrums::getSSD5Mapping()),
        nameMapPair(Mappings::Toontrack::getEZDrummerMapping()),
        nameMapPair(Mappings::Toontrack::getEZDrummerProgressiveFoundryMapping()),
        nameMapPair(Mappings::Toontrack::getSuperiorDrummer3Mapping()),
        nameMapPair(Mappings::XLNAudio::getAddictiveDrums2Mapping())
    };

    return map;
}