#ifndef MAPPING_H
#define MAPPING_H

#include <cinttypes>
#include <map>
#include <string>
#include <vector>

class Mapping {
private:
    const std::string _name;
    std::map<std::string, uint8_t> _map;
public:
    Mapping();
    Mapping(const std::string&);
    Mapping(const std::string&, const std::map<std::string, uint8_t>&);
    std::string name() const;
    void insert(const std::string&, const uint8_t&);
    void insert(const std::map<std::string, uint8_t>&);
    bool containsKey(const std::string&) const;
    bool containsValue(const uint8_t&) const;
    std::vector<std::string> getKeys() const;
    uint8_t operator[](const std::string&) const;
    std::string operator[](const uint8_t&) const;
    uint8_t at(const std::string&) const;
    std::string at(const uint8_t&) const;
    void print() const;
};

#endif