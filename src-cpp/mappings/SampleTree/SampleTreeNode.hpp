#pragma once

#include <cinttypes>
#include <fstream>
#include <map>
#include <optional>
#include <string>
#include <vector>

class SampleTreeNode {
private:
    std::map<std::string, SampleTreeNode*> _children;
    std::map<std::string, SampleTreeNode*> _defaults;
    const std::string _key;
    bool _isLeaf = true;
    void print(const uint32_t&) const;
    void addDefaultKeys(std::vector<std::string>&) const;
    void addDefaultKeys(std::vector<std::string>&, const std::string&) const;
public:
    #pragma region Constructors/Destructors/Assigment
    SampleTreeNode(const std::string&);
    SampleTreeNode(const SampleTreeNode&);
    ~SampleTreeNode();
    void operator=(const SampleTreeNode&);
    #pragma endregion
    #pragma region Info
    void print() const;
    bool isLeaf() const { return _isLeaf; };
    bool containsKey(const std::string&) const;
    std::optional<std::vector<std::string>> getPathToKey(const std::string&) const;
    std::vector<std::string> getDefaultKeys() const;
    std::vector<std::string> getDefaultKeys(const std::string&) const;
    #pragma endregion
    #pragma region Modifiers
    void addChild(const std::string&, const std::string&);
    void addDefault(const std::string&, const std::string&);
    #pragma endregion
    #pragma region Accessors
    SampleTreeNode& operator[](const std::string&) const;
    SampleTreeNode& operator[](std::vector<std::string>) const;
    SampleTreeNode& at(const std::string& key) const;
    SampleTreeNode& at(std::vector<std::string> keys) const;
    void addToStream(std::ofstream&, uint32_t) const;
    #pragma endregion
};