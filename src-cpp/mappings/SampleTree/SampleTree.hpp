#pragma once

#include "../Mapping/ConversionMap.hpp"
#include "../Mapping/Mapping.hpp"
#include "../Midi/MidiNoteGroup.hpp"
#include "./SampleTreeNode.hpp"

#include <filesystem>
#include <map>
#include <optional>
#include <string>
#include <vector>

class SampleTree
{
public:
#pragma region Constructors / Destructors / Assignment
    SampleTree();
    SampleTree(const std::string &);
    SampleTree(const std::vector<std::string> &);
    void operator=(const SampleTree &);
#pragma endregion
#pragma region Info
    void print() const;
    bool containsKey(const std::string &) const;
    std::optional<std::vector<std::string>> getPathToKey(const std::string &) const;
#pragma endregion
#pragma region Modifiers
    void addRoot(const std::string &);
#pragma endregion
#pragma region Accessors
    SampleTreeNode &operator[](const std::string &);
    SampleTreeNode &operator[](std::vector<std::string>);
    SampleTreeNode &at(const std::string &);
    SampleTreeNode &at(std::vector<std::string>);
    const SampleTreeNode &operator[](const std::string &) const;
    const SampleTreeNode &operator[](std::vector<std::string>) const;
    const SampleTreeNode &at(const std::string &) const;
    const SampleTreeNode &at(std::vector<std::string>) const;
#pragma endregion
#pragma region Parsing
    void exportAsNamespace(const std::string &) const;
    std::optional<MidiNoteGroup> findNearestFit(const Mapping &, std::vector<std::string>) const;
    ConversionMap makeConversionMapping(const Mapping &, const Mapping &) const;
#pragma endregion
private:
    std::map<std::string, SampleTreeNode> m_roots;

    void initFromFile(const std::string &);
    void initFromDir(const std::string &);
    void addRootFromFile(const std::filesystem::path &);
    static std::string keyFromPath(const std::vector<std::string> &);
    static std::string keyFromPath(const std::vector<std::string> &, const std::string &);
};