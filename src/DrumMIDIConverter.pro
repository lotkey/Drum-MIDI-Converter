QT       += core gui
RC_ICONS = icon.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    mappings/Helpers/stringpp.cpp \
    mappings/Mapping/ConversionMap.cpp \
    mappings/Mapping/Mapping.cpp \
    mappings/Mapping/Mappings.cpp \
    mappings/Mapping/Mappings/Drumforge/Bergstrand.cpp \
    mappings/Mapping/Mappings/Drumforge/Ultimate.cpp \
    mappings/Mapping/Mappings/GeneralMIDI/GmStandard.cpp \
    mappings/Mapping/Mappings/GetGoodDrums/GroovePlayerMIDIPack.cpp \
    mappings/Mapping/Mappings/GetGoodDrums/Invasion.cpp \
    mappings/Mapping/Mappings/GetGoodDrums/ModernAndMassive.cpp \
    mappings/Mapping/Mappings/GetGoodDrums/OKWAggressiveRock.cpp \
    mappings/Mapping/Mappings/GetGoodDrums/OKWArchitects.cpp \
    mappings/Mapping/Mappings/GetGoodDrums/OKWClassicRock.cpp \
    mappings/Mapping/Mappings/GetGoodDrums/OKWMetal.cpp \
    mappings/Mapping/Mappings/GetGoodDrums/OKWModernFusion.cpp \
    mappings/Mapping/Mappings/GetGoodDrums/P4MattHalpern.cpp \
    mappings/Mapping/Mappings/GuitarPro/DrumMap.cpp \
    mappings/Mapping/Mappings/LogicPro/Drummer.cpp \
    mappings/Mapping/Mappings/MandaAudio/MTPowerDrumKit2.cpp \
    mappings/Mapping/Mappings/NaughtySealAudio/PerfectDrums.cpp \
    mappings/Mapping/Mappings/SingularSound/BeatBuddy.cpp \
    mappings/Mapping/Mappings/SolemnTones/MjolnirDrums.cpp \
    mappings/Mapping/Mappings/StevenSlateDrums/SSD5.cpp \
    mappings/Mapping/Mappings/Toontrack/EZDrummer.cpp \
    mappings/Mapping/Mappings/Toontrack/EZDrummerProgressiveFoundry.cpp \
    mappings/Mapping/Mappings/Toontrack/SuperiorDrummer3.cpp \
    mappings/Mapping/Mappings/XLNAudio/AddictiveDrums2.cpp \
    mappings/Midi/MidiNote.cpp \
    mappings/Midi/MidiNoteGroup.cpp \
    mappings/Parsing/ParseTree.cpp \
    mappings/Parsing/ParseTreeNode.cpp \
    midifile/src/Binasc.cpp \
    midifile/src/MidiEvent.cpp \
    midifile/src/MidiEventList.cpp \
    midifile/src/MidiFile.cpp \
    midifile/src/MidiMessage.cpp

HEADERS += \
    mainwindow.h \
    mappings/Helpers/stringpp.hpp \
    mappings/Mapping/ConversionMap.hpp \
    mappings/Mapping/Mapping.hpp \
    mappings/Mapping/Mappings.hpp \
    mappings/Midi/MidiNote.hpp \
    mappings/Midi/MidiNoteGroup.hpp \
    mappings/Midi/Note.hpp \
    mappings/Parsing/Keys.hpp \
    mappings/Parsing/ParseTree.hpp \
    mappings/Parsing/ParseTreeNode.hpp \
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
