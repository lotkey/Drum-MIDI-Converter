cmake_minimum_required(VERSION 3.13)
project(main)
set(CMAKE_CXX_STANDARD 20)

add_executable(main
    ./main.cpp
    ./Helpers/stringpp.cpp
    ./Mapping/ConversionMap.cpp
    ./Mapping/Mapping.cpp
    ./Mapping/Mappings.cpp
    ./Mapping/Mappings/Drumforge/Bergstrand.cpp
    ./Mapping/Mappings/Drumforge/Ultimate.cpp
    ./Mapping/Mappings/GeneralMIDI/GmStandard.cpp
    ./Mapping/Mappings/GetGoodDrums/GroovePlayerMIDIPack.cpp
    ./Mapping/Mappings/GetGoodDrums/Invasion.cpp
    ./Mapping/Mappings/GetGoodDrums/ModernAndMassive.cpp
    ./Mapping/Mappings/GetGoodDrums/OKWAggressiveRock.cpp
    ./Mapping/Mappings/GetGoodDrums/OKWArchitects.cpp
    ./Mapping/Mappings/GetGoodDrums/OKWClassicRock.cpp
    ./Mapping/Mappings/GetGoodDrums/OKWMetal.cpp
    ./Mapping/Mappings/GetGoodDrums/OKWModernFusion.cpp
    ./Mapping/Mappings/GetGoodDrums/P4MattHalpern.cpp
    ./Mapping/Mappings/LogicPro/Drummer.cpp
    ./Mapping/Mappings/MandaAudio/MTPowerDrumKit2.cpp
    ./Mapping/Mappings/SingularSound/BeatBuddy.cpp
    ./Mapping/Mappings/StevenSlateDrums/SSD5.cpp
    ./Mapping/Mappings/XLNAudio/AddictiveDrums2.cpp
    ./Midi/MidiNote.cpp
    ./Midi/MidiNoteGroup.cpp
    ./Parsing/ParseTree.cpp
    ./Parsing/ParseTreeNode.cpp
)