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
	outfile.write("./midi/test_out.MID");

	for (unsigned int i = 0; i < infile.getNumTracks(); i++) {
		smf::MidiEventList eventList = infile[i];
		smf::MidiEventList outEventList = smf::MidiEventList();

		for (unsigned int i = 0; i < eventList.getEventCount(); i++) {
			smf::MidiEvent midiEvent = eventList[i];
			smf::MidiEvent outMidiEvent = smf::MidiEvent(midiEvent);
			if (mmMapping.containsNote(midiEvent.getKeyNumber())) {
				std::string groupKey = mmMapping.getSampleGroupKeyOfNote(midiEvent.getKeyNumber());
				std::string key = mmMapping[groupKey].getKeyFromNote(midiEvent.getKeyNumber());
				std::cout << groupKey << ", " << key << std::endl;
				std::cout << (int)mmMapping[groupKey][key] << "->" << (int)mtMapping[groupKey][key] << std::endl;
			}
			else {
				outEventList.append(outMidiEvent);
			}
		}
	}
}