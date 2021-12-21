cmake_minimum_required(VERSION 3.13)
project(main)
set(CMAKE_CXX_STANDARD 20)

add_executable(main
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Helpers/stringpp.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/ConversionMap.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mapping.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/Drumforge/Bergstrand.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/Drumforge/Ultimate.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GeneralMIDI/GmStandard.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GetGoodDrums/GroovePlayerMIDIPack.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GetGoodDrums/Invasion.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GetGoodDrums/ModernAndMassive.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GetGoodDrums/OKWAggressiveRock.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GetGoodDrums/OKWArchitects.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GetGoodDrums/OKWClassicRock.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GetGoodDrums/OKWMetal.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GetGoodDrums/OKWModernFusion.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GetGoodDrums/P4MattHalpern.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/GuitarPro/DrumMap.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/LogicPro/Drummer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/MandaAudio/MTPowerDrumKit2.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/NaughtySealAudio/PerfectDrums.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/SingularSound/BeatBuddy.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/SolemnTones/MjolnirDrums.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/StevenSlateDrums/SSD5.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Mapping/Mappings/XLNAudio/AddictiveDrums2.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Midi/MidiNote.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Midi/MidiNoteGroup.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Parsing/ParseTree.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Parsing/ParseTreeNode.cpp
)