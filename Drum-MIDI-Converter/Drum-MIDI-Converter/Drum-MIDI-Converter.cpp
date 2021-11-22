#include <iostream>
#include <string>

#include "./midifile/include/MidiFile.h"
#include "Mapping.h"
#include "Mappings.h"

void convertMapping(const std::string&, const std::string&, const Mapping&, const Mapping&);

int main() {
	auto mmMapping = Mappings::GetGoodDrums::getModernAndMassiveMapping();
	auto mtMapping = Mappings::MandaAudio::getMTPowerDrumKit2Mapping();

	convertMapping("./midi/test2.MID", "./midi/test2out.MID", mmMapping, mtMapping);
}

void convertMapping(const std::string& pathFrom, const std::string& pathTo, const Mapping& mappingFrom, const Mapping& mappingTo) {
	smf::MidiFile infile, outfile;
	infile.read(pathFrom);

	for (unsigned int i = 0; i < infile.getNumTracks(); i++) {
		if (i != 0) outfile.addTrack();
		smf::MidiEventList eventList = infile[i];

		for (unsigned int j = 0; j < eventList.getEventCount(); j++) {
			smf::MidiEvent midiEvent = eventList[j];
			smf::MidiEvent outMidiEvent = smf::MidiEvent(midiEvent);
<<<<<<< Updated upstream
			if (mappingFrom.containsNote(midiEvent.getKeyNumber())) {
				std::string groupKey = mappingFrom.getSampleGroupKeyOfNote(midiEvent.getKeyNumber());
				std::string key = mappingFrom[groupKey].getKeyFromNote(midiEvent.getKeyNumber());
				outMidiEvent.setKeyNumber(mappingTo[groupKey][key]);
				outfile.addEvent(i, outMidiEvent.tick / 8, outMidiEvent);
			}
			else {
				outfile.addEvent(i, outMidiEvent.tick / 8, outMidiEvent);
=======
			if (mmMapping.containsNote(midiEvent.getKeyNumber())) {
				std::string groupKey = mmMapping.getSampleGroupKeyOfNote(midiEvent.getKeyNumber());
				std::string key = mmMapping[groupKey].getKeyFromNote(midiEvent.getKeyNumber());
				outMidiEvent.setKeyNumber(mtMapping[groupKey][key]);
				outfile.addEvent(i, outMidiEvent);
			}
			else {
				outfile.addEvent(i, outMidiEvent);
>>>>>>> Stashed changes
			}
		}
	}

	outfile.write(pathTo);
}