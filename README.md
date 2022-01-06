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

You should have the following structure:  
```
SRC_DIR  
├── ...  
├── src-cpp  
|   ├── mappings  
|   ├── midifile  
|   └── ...  
└── ...  
```

#### ii. [Qt & Qt Creator](https://www.qt.io/product/development-tools)

Download and install [Qt Creator](https://www.qt.io/product/development-tools). If any issues come up, I recommend following [this guide](https://www.youtube.com/watch?v=H2ud-ATLIdI).

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