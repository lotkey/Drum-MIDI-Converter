#ifndef SAMPLEGROUP_H
#define SAMPLEGROUP_H

#include <inttypes.h>
#include <map>
#include <string>

class SampleGroup {
private:
	const std::string _defaultSample;
	const std::map<std::string, uint8_t> _mapping;
public:
	SampleGroup() {} ;
	SampleGroup(const std::string&, const std::map<std::string, uint8_t>&);
	bool containsNote(const uint8_t&) const;
	bool containsKey(const std::string&) const;
	uint8_t operator[](const std::string&) const;
	uint8_t getNoteFromKey(const std::string&) const;
	std::string getKeyFromNote(const uint8_t&) const;
};

#endif