# Drum-MIDI-Converter

# Build

## 1. Clone the repository

Clone this repository:

```git clone https://github.com/lotkey/Drum-MIDI-Converter```

I will refer to the cloned repo's directory as ROOT_DIR.

## 2. Build C++ Qt app

### a. Download prerequisites

#### i. [midifile](https://www.github.com/craigsapp/midifile) library by [craigsapp](https://www.github.com/craigsapp)

Clone the [midifile](https://www.github.com/craigsapp/midifile) library into ROOT_DIR/src-cpp/.
```bash
cd ROOT_DIR/src-cpp/
git clone https://www.github.com/craigsapp/midifile
```

Optionally, remove all the unnecessary stuff:
```bash
cd midifile
rm -rvf !("include"|"src")
rm src/Options.cpp
rm include/Options.h
```

You should have the following structure:  
```
ROOT_DIR  
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

For example, change from:
```c++
#include "MidiFile.h"
#include "Binasc.h"
```

To:
```c++
#include "src-cpp/midifile/include/MidiFile.h"
#include "src-cpp/midifile/include/Binasc.h"
```

#### ii. [Qt & Qt Creator](https://www.qt.io/product/development-tools)

Download and install [Qt Creator](https://www.qt.io/product/development-tools). If any issues come up, I recommend following this [YouTube guide](https://www.youtube.com/watch?v=H2ud-ATLIdI):

[![video thumbnail](https://img.youtube.com/vi/H2ud-ATLIdI/maxresdefault.jpg)](https://www.youtube.com/watch?v=H2ud-ATLIdI)


### b. Build the project with Qt Creator

Open Qt Creator. On the top menu, select File > Open File or Project.
![open project](./imgs/qt-creator-01.png)

Open ROOT_DIR/src-cpp/DrumMIDIConverter.pro. If prompted, configure the project with a kit.
![configure project](./imgs/qt-creator-02.png)

Build the project for your system. For Windows, you can follow [this tutorial](https://www.youtube.com/watch?v=rFHPOZoqzcg):
[![Qt build tutorial](https://img.youtube.com/vi/rFHPOZoqzcg/maxresdefault.jpg)](https://www.youtube.com/watch?v=rFHPOZoqzcg)

## 3. Python Dash web app

### a. Download prerequisites

#### i. [Dash](https://plotly.com/dash/) by [Plotly](https://plotly.com)

Install dash with the following command:
```bash
python3 -m pip install dash
```

#### ii. [mido](https://github.com/mido/mido)

Install mido with the following command:
```bash
python3 -m pip install mido
```

### b. Run the Dash app

Run the following command to run the Dash app:
```bash
python3 ROOT_DIR/src-python/app.py
```