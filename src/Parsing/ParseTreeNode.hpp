#ifndef PARSETREENODE_HPP
#define PARSETREENODE_HPP

#include <cinttypes>
#include <fstream>
#include <map>
#include <optional>
#include <string>
#include <vector>

class ParseTreeNode {
private:
    std::map<std::string, ParseTreeNode*> _children;
    std::map<std::string, ParseTreeNode*> _defaults;
    const std::string _key;
    bool _isLeaf = true;
    void print(const uint32_t&) const;
    void addDefaultKeys(std::vector<std::string>&) const;
    void addDefaultKeys(std::vector<std::string>&, const std::string&) const;
public:
    #pragma region Constructors/Destructors/Assigment
    ParseTreeNode(const std::string&);
    ParseTreeNode(const ParseTreeNode&);
    ~ParseTreeNode();
    void operator=(const ParseTreeNode&);
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
    ParseTreeNode& operator[](const std::string&) const;
    ParseTreeNode& operator[](std::vector<std::string>) const;
    ParseTreeNode& at(const std::string& key) const;
    ParseTreeNode& at(std::vector<std::string> keys) const;
    void addToStream(std::ofstream&, uint32_t) const;
    #pragma endregion
};

#endif