QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    src/Helpers/stringpp.cpp \
    src/Mapping/ConversionMap.cpp \
    src/Mapping/Mapping.cpp \
    src/Mapping/Mappings.cpp \
    src/Mapping/Mappings/Drumforge/Bergstrand.cpp \
    src/Mapping/Mappings/Drumforge/Ultimate.cpp \
    src/Mapping/Mappings/GeneralMIDI/GmStandard.cpp \
    src/Mapping/Mappings/GetGoodDrums/GroovePlayerMIDIPack.cpp \
    src/Mapping/Mappings/GetGoodDrums/Invasion.cpp \
    src/Mapping/Mappings/GetGoodDrums/ModernAndMassive.cpp \
    src/Mapping/Mappings/GetGoodDrums/OKWAggressiveRock.cpp \
    src/Mapping/Mappings/GetGoodDrums/OKWArchitects.cpp \
    src/Mapping/Mappings/GetGoodDrums/OKWClassicRock.cpp \
    src/Mapping/Mappings/GetGoodDrums/OKWMetal.cpp \
    src/Mapping/Mappings/GetGoodDrums/OKWModernFusion.cpp \
    src/Mapping/Mappings/GetGoodDrums/P4MattHalpern.cpp \
    src/Mapping/Mappings/GuitarPro/DrumMap.cpp \
    src/Mapping/Mappings/LogicPro/Drummer.cpp \
    src/Mapping/Mappings/MandaAudio/MTPowerDrumKit2.cpp \
    src/Mapping/Mappings/NaughtySealAudio/PerfectDrums.cpp \
    src/Mapping/Mappings/SingularSound/BeatBuddy.cpp \
    src/Mapping/Mappings/SolemnTones/MjolnirDrums.cpp \
    src/Mapping/Mappings/StevenSlateDrums/SSD5.cpp \
    src/Mapping/Mappings/Toontrack/EZDrummer.cpp \
    src/Mapping/Mappings/Toontrack/EZDrummerProgressiveFoundry.cpp \
    src/Mapping/Mappings/Toontrack/SuperiorDrummer3.cpp \
    src/Mapping/Mappings/XLNAudio/AddictiveDrums2.cpp \
    src/Midi/MidiNote.cpp \
    src/Midi/MidiNoteGroup.cpp \
    src/Parsing/ParseTree.cpp \
    src/Parsing/ParseTreeNode.cpp \
    midifile/src/Binasc.cpp \
    midifile/src/MidiEvent.cpp \
    midifile/src/MidiEventList.cpp \
    midifile/src/MidiFile.cpp \
    midifile/src/MidiMessage.cpp

HEADERS += \
    mainwindow.h \
    src/Helpers/stringpp.hpp \
    src/Mapping/ConversionMap.hpp \
    src/Mapping/Mapping.hpp \
    src/Mapping/Mappings.hpp \
    src/Midi/MidiNote.hpp \
    src/Midi/MidiNoteGroup.hpp \
    src/Midi/Note.hpp \
    src/Parsing/Keys.hpp \
    src/Parsing/ParseTree.hpp \
    src/Parsing/ParseTreeNode.hpp \
    midifile/include/Binasc.h \
    midifile/include/MidiEvent.h \
    midifile/include/MidiEventList.h \
    midifile/include/MidiFile.h \
    midifile/include/MidiMessage.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
