#ifndef PARSETREENODE_H
#define PARSETREENODE_H

#include <inttypes.h>
#include <map>
#include <string>
#include <vector>

class ParseTreeNode {
private:
    std::map<std::string, ParseTreeNode*> _children;
    std::map<std::string, ParseTreeNode*> _defaults;
    ParseTreeNode* _parent = nullptr;
    bool _isLeaf = true;
    void print(const uint32_t&) const;
public:
    #pragma region Constructors/Destructors/Assigment
    ParseTreeNode();
    ParseTreeNode(const ParseTreeNode&);
    ParseTreeNode(ParseTreeNode*);
    ~ParseTreeNode();
    void operator=(const ParseTreeNode&);
    #pragma endregion
    #pragma region Info
    void print() const;
    bool isLeaf() const { return _isLeaf; };
    bool containsKey(const std::string&) const;
    std::vector<std::string> getPathToKey(const std::string&) const;
    std::vector<std::string> getDefaultKeys() const;
    #pragma endregion
    #pragma region Modifiers
    void addChild(const std::string&);
    void addChildren(const std::vector<std::string>&);
    void addDefault(const std::string&);
    void addDefaults(const std::vector<std::string>&);
    #pragma endregion
    #pragma region Accessors
    ParseTreeNode& operator[](const std::string&) const;
    ParseTreeNode& operator[](std::vector<std::string>) const;
    ParseTreeNode& at(const std::string& key) const;
    ParseTreeNode& at(std::vector<std::string> keys) const;
    #pragma endregion
};

#endif