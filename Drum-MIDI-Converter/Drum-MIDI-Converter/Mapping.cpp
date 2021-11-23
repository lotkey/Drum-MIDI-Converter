#include <stdexcept>

#include "midifile/include/MidiFile.h"
#include "Mapping.h"

Mapping::Mapping(const std::map<std::string, SampleGroup>& mapping)
	: _mapping(mapping)
{ }

void Mapping::insert(const std::string& s, const SampleGroup& sg) {
	_mapping.insert({ s, sg });
}

bool Mapping::containsNote(const uint8_t& key) const {
	for (const auto& pair : _mapping) {
		if (pair.second.containsNote(key)) return true;
	}
	return false;
}

bool Mapping::containsSampleGroup(const std::string& group) const {
	return _mapping.find(group) != _mapping.end();
}

std::string Mapping::getSampleGroupKeyOfNote(const uint8_t& key) const {
	for (const auto& pair : _mapping) {
		if (pair.second.containsNote(key)) return pair.first;
	}
	throw std::runtime_error("No such in mapping");
}

SampleGroup Mapping::operator[](const std::string& index) {
	return _mapping[index];
}

SampleGroup Mapping::operator[](const std::string& index) const {
	return _mapping.at(index);
}

double Mapping::testFit(const std::string& filename) const {
	int fit = 0, total = 0;
	smf::MidiFile infile;
	infile.read(filename);

	for (unsigned int i = 0; i < infile.getNumTracks(); i++) {
		smf::MidiEventList eventList = infile[i];

		for (unsigned int j = 0; j < eventList.getEventCount(); j++) {
			smf::MidiEvent midiEvent = eventList[j];
			if (containsNote(midiEvent.getKeyNumber())) fit++;
			total++;
		}
	}
	return (double)fit / (double)(total);
}