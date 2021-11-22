#ifndef MAPPING_H
#define MAPPING_H

#include <map>
#include <string>

#include "SampleGroup.h"

class Mapping {
private:
	std::map<std::string, SampleGroup> _mapping;
public:
	Mapping() {} ;
	Mapping(const std::map<std::string, SampleGroup>&);
	void insert(const std::string&, const SampleGroup&);
	bool containsNote(const uint8_t&) const;
	std::string getSampleGroupKeyOfNote(const uint8_t&) const;
	SampleGroup operator[](const std::string&);
<<<<<<< Updated upstream
	SampleGroup operator[](const std::string&) const;
=======
	double testFit(const std::string&) const;
>>>>>>> Stashed changes
};

#endif