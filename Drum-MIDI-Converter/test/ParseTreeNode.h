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
    void print(const uint32_t&);
public:
    ParseTreeNode() {};
    ParseTreeNode(ParseTreeNode*);
    void addChild(const std::string&);
    void addChildren(const std::vector<std::string>&);
    void addDefault(const std::string&);
    void addDefaults(const std::vector<std::string>&);
    std::vector<std::string> getDefaultKeys();
    ParseTreeNode& operator[](const std::string&);
    ParseTreeNode& operator[](std::vector<std::string>);
    ParseTreeNode& at(const std::string& key) { return operator[](key); };
    ParseTreeNode& at(std::vector<std::string> keys) { return operator[](keys); };
    void appendPathToKey(std::vector<std::string>&, const std::string&);
    void print();
    bool isLeaf() { return _isLeaf; };
    bool containsKey(const std::string&);
};

#endif