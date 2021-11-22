#include <iostream>
#include <string>

#include "./midifile/include/MidiFile.h"
#include "Mapping.h"
#include "Mappings.h"

int main() {
	auto mmMapping = Mappings::GGD::getModernAndMassiveMapping();
	auto mtMapping = Mappings::MandaAudio::getMTPowerDrumKit2Mapping();

	smf::MidiFile infile, outfile;
	infile.read("./midi/test.MID");

	for (unsigned int i = 0; i < infile.getNumTracks(); i++) {
		outfile.addTrack();
		smf::MidiEventList eventList = infile[i];

		for (unsigned int j = 0; j < eventList.getEventCount(); j++) {
			smf::MidiEvent midiEvent = eventList[j];
			smf::MidiEvent outMidiEvent = smf::MidiEvent(midiEvent);
			if (mmMapping.containsNote(midiEvent.getKeyNumber())) {
				std::string groupKey = mmMapping.getSampleGroupKeyOfNote(midiEvent.getKeyNumber());
				std::string key = mmMapping[groupKey].getKeyFromNote(midiEvent.getKeyNumber());
				//std::cout << groupKey << ", " << key << std::endl;
				//std::cout << (int)mmMapping[groupKey][key] << "->" << (int)mtMapping[groupKey][key] << std::endl;
				outMidiEvent.setKeyNumber(mtMapping[groupKey][key]);
				outfile.addEvent(i, outMidiEvent);
			}
			else {
				outfile.addEvent(i, outMidiEvent);
				//outEventList.append(outMidiEvent);
			}
		}
	}

	outfile.write("./midi/test_out.MID");
}