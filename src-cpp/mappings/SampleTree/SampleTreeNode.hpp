#pragma once

#include <cinttypes>
#include <fstream>
#include <map>
#include <optional>
#include <string>
#include <vector>

class SampleTreeNode
{
public:
#pragma region Constructors / Destructors / Assigment
    SampleTreeNode(const std::string &);
#pragma endregion
#pragma region Info
    void print() const;
    bool isLeaf() const { return m_isLeaf; };
    bool containsKey(const std::string &) const;
    std::optional<std::vector<std::string>> getPathToKey(const std::string &) const;
    std::vector<std::string> getDefaultKeys() const;
    std::vector<std::string> getDefaultKeys(const std::string &) const;
#pragma endregion
#pragma region Modifiers
    void addChild(const std::string &, const std::string &);
    void addDefault(const std::string &, const std::string &);
#pragma endregion
#pragma region Accessors
    SampleTreeNode &operator[](const std::string &);
    SampleTreeNode &operator[](std::vector<std::string>);
    SampleTreeNode &at(const std::string &key);
    SampleTreeNode &at(std::vector<std::string> keys);
    const SampleTreeNode &operator[](const std::string &) const;
    const SampleTreeNode &operator[](std::vector<std::string>) const;
    const SampleTreeNode &at(const std::string &key) const;
    const SampleTreeNode &at(std::vector<std::string> keys) const;
    void addToStream(std::ofstream &, uint32_t) const;
#pragma endregion
private:
    std::map<std::string, SampleTreeNode> m_children;
    std::map<std::string, SampleTreeNode> m_defaults;
    const std::string m_key;
    bool m_isLeaf = true;
    void print(const uint32_t &) const;
    void addDefaultKeys(std::vector<std::string> &) const;
    void addDefaultKeys(std::vector<std::string> &, const std::string &) const;
};