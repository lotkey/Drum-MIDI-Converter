#pragma once

#include <cinttypes>
#include <filesystem>
#include <map>
#include <optional>
#include <string>
#include <vector>

#include "../Mapping/Mapping.hpp"
#include "../Midi/MidiNote.hpp"
#include "../Midi/MidiNoteGroup.hpp"

// Mapping of MIDI note group -> MIDI note
// Where the key is the note value(s) from the mapping to convert from,
// and the value is from the mapping to convert to.
class ConversionMap {
private:
    const std::string _mapFrom, _mapTo;
    std::map<uint8_t, uint8_t> _map;
public:
    static ConversionMap load(const std::filesystem::path&);
    static std::vector<ConversionMap> loadMultiple(const std::filesystem::path&);
    static void saveAll(const std::vector<ConversionMap>&, const std::filesystem::path&);

    ConversionMap(const std::string&, const std::string&);
    void insert(const MidiNoteGroup&, const uint8_t&);
    void insert(const uint8_t&, const uint8_t&);
    bool containsKey(const uint8_t&) const;
    bool containsValue(const uint8_t&) const;
    uint8_t operator[](const uint8_t&) const;
    uint8_t at(const uint8_t&) const;
    std::optional<uint8_t> keyFromValue(const uint8_t&) const;
    void print() const;
    void save(const std::filesystem::path&, const bool& append = false) const;
};