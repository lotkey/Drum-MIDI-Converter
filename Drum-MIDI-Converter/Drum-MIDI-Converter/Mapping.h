#ifndef MAPPING_H
#define MAPPING_H

#include <map>
#include <string>

class Mapping {
private:
	const std::map<std::string, uint8_t> mapping;
public:
	virtual uint8_t getNoteFromKey(const std::string&) const = 0;
	virtual bool containsKey(const std::string&) const = 0;
};

#endif