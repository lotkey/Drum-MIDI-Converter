# Drum-MIDI-Converter

# Build

## 1. Clone the repository

Clone this repository:

```git clone https://github.com/lotkey/Drum-MIDI-Converter```

I will refer to the cloned repo's directory as SRC_DIR.

## 2. Download all prerequisites

### a. C++

#### i. [midifile](https://www.github.com/craigsapp/midifile) library by [craigsapp](https://www.github.com/craigsapp)

Clone the [midifile](https://www.github.com/craigsapp/midifile) library into SRC_DIR/src-cpp/.
```
cd SRC_DIR/src-cpp/
git clone https://www.github.com/craigsapp/midifile
```

Optionally, remove all the unnecessary stuff:
```
cd midifile
rm -rvf !("include"|"src")
rm src/Options.cpp
rm include/Options.h
```

You should have the following structure:  
```
SRC_DIR  
├── ...  
├── src-cpp  
|   ├── mappings  
|   ├── midifile  
|   |   ├── include
|   |   ├── src
|   |   └── ...  
|   └── ...  
└── ...  
```

You may need to change the include paths in the following files:  
- MidiEvent.h  
- MidiEventList.h  
- MidiFile.h  
- Binasc.cpp  
- MidiEvent.cpp  
- MidiEventList.cpp  
- MidiFile.cpp  
- MidiMessage.cpp  

Change from:
```
#include "MidiFile.h"
#include "Binasc.h"
```

To:
```
#include "src-cpp/midifile/include/MidiFile.h"
#include "src-cpp/midifile/include/Binasc.h"
```

#### ii. [Qt & Qt Creator](https://www.qt.io/product/development-tools)

Download and install [Qt Creator](https://www.qt.io/product/development-tools). If any issues come up, I recommend following this [YouTube guide](https://www.youtube.com/watch?v=H2ud-ATLIdI):

[![alt text](https://img.youtube.com/vi/H2ud-ATLIdI/maxresdefault.jpg)](https://www.youtube.com/watch?v=H2ud-ATLIdI)

### b. Python

#### i. [Dash](https://plotly.com/dash/) by [Plotly](https://plotly.com)

Install dash with the following command:
```
python -m pip install dash
```

#### ii. [mido](https://github.com/mido/mido)

Install mido with the following command:
```
python -m pip install mido
```

## 3. Open the Qt project in Qt Creator

Open Qt Creator. On the top menu, select File > Open File or Project and open SRC_DIR/src-cpp/DrumMIDIConverter.pro. If prompted, configure the project with a kit.