#include <iostream>
#include <string>

#include "./midifile/include/MidiFile.h"
#include "Mapping.h"

int main() {
	smf::MidiFile midifile;
	midifile.read("./midi/test.MID");
	std::cout << midifile.getNumEvents(0) << std::endl;
	for (unsigned int i = 0; i < midifile.getNumTracks(); i++) {
		smf::MidiEventList eventList = midifile[i];
		for (unsigned int i = 0; i < eventList.getEventCount(); i++) {
			smf::MidiEvent midiEvent = eventList[i];
			if (midiEvent.isNoteOn())
				std::cout << "Note on: ";
			else if (midiEvent.isNoteOff())
				std::cout << "Note off: ";
			std::cout << midiEvent.getKeyNumber() << std::endl;
		}
	}
}