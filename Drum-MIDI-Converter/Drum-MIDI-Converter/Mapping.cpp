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

std::string Mapping::getSampleGroupKeyOfNote(const uint8_t& key) const {
	for (const auto& pair : _mapping) {
		if (pair.second.containsNote(key)) return pair.first;
	}
	throw std::runtime_error("No such in mapping");
}

SampleGroup Mapping::operator[](const std::string& index) {
	return _mapping[index];
}

<<<<<<< Updated upstream
SampleGroup Mapping::operator[](const std::string& index) const {
	return _mapping.at(index);
=======
double Mapping::testFit(const std::string& filename) const {
	int fit = 0, nonfit = 0;
	smf::MidiFile infile;
	infile.read(filename);

>>>>>>> Stashed changes
}