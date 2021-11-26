#ifndef CONVERSIONMAP_H
#define CONVERSIONMAP_H

#include <cinttypes>
#include <map>
#include <string>

class ConversionMap {
private:
    const std::string _mapFrom, _mapTo;
    std::map<uint8_t, uint8_t> _map;
public:
    ConversionMap(const std::string&, const std::string&);
    ConversionMap(const std::string&, const std::string&, const std::map<uint8_t, uint8_t>&);
    void insert(const uint8_t&, const uint8_t&);
    void insert(const std::map<uint8_t, uint8_t>&);
    bool containsKey(const uint8_t&) const;
    bool containsValue(const uint8_t&) const;
    uint8_t operator[](const uint8_t&) const;
    uint8_t at(const uint8_t&) const;
    int8_t keyFromValue(const uint8_t&) const;
    void print() const;
};

#endif