#ifndef MAPPING_H
#define MAPPING_H

#include <inttypes.h>
#include <map>
#include <string>

class Mapping {
private:
    std::map<std::string, uint8_t> _map;
public:
    Mapping();
    Mapping(const std::map<std::string, uint8_t>&);
    void insert(const std::string&, const uint8_t&);
    void insert(const std::map<std::string, uint8_t>&);
    bool containsKey(const std::string&) const;
    bool containsValue(const uint8_t&) const;
    uint8_t operator[](const std::string&) const;
    std::string operator[](const uint8_t&) const;
    uint8_t at(const std::string&) const;
    std::string at(const uint8_t&) const;
};

#endif