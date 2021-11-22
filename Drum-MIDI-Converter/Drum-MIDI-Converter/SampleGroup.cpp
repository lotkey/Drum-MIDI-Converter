#include <stdexcept>

#include "SampleGroup.h"

SampleGroup::SampleGroup(const std::string& defaultSample, const std::map<std::string, uint8_t>& mapping)
	: _defaultSample(defaultSample), _mapping(mapping)
{ }

bool SampleGroup::containsNote(const uint8_t& note) const {
	for (const auto& pair : _mapping)
		if (pair.second == note) return true;
	return false;
}

bool SampleGroup::containsKey(const std::string& key) const {
	return _mapping.find(key) != _mapping.end();
}

uint8_t SampleGroup::operator[](const std::string& key) const {
	return getNoteFromKey(key);
}

uint8_t SampleGroup::getNoteFromKey(const std::string& key) const {
	try {
		return _mapping.at(key);
	}
	catch (const std::out_of_range& oor) {
		return _mapping.at(_defaultSample);
	}
}

std::string SampleGroup::getKeyFromNote(const uint8_t& note) const {
	for (const auto& pair : _mapping) {
		if (pair.second == note) return pair.first;
	}
	throw std::runtime_error("Couldn't find note");
}