#ifndef PARSETREE_H
#define PARSETREE_H

#include <map>
#include <string>
#include <vector>

#include "ParseTreeNode.h"

class ParseTree {
private:
    std::map<std::string, ParseTreeNode*> _roots;
public:
    #pragma region Constructors/Destructors/Assignment
    ParseTree();
    ParseTree(const ParseTree&);
    ParseTree(const std::string&);
    ParseTree(const std::vector<std::string>&);
    ~ParseTree();
    void operator=(const ParseTree&);
    #pragma endregion
    #pragma region Info
    void print() const;
    bool containsKey(const std::string&) const;
    std::vector<std::string> getPathToKey(const std::string&) const;
    #pragma endregion
    #pragma region Modifiers
    void addRoot(const std::string&);
    #pragma endregion
    #pragma region Accessors
    ParseTreeNode& operator[](const std::string&) const;
    ParseTreeNode& operator[](std::vector<std::string>) const;
    ParseTreeNode& at(const std::string&) const;
    ParseTreeNode& at(std::vector<std::string>) const;
    #pragma endregion
};


#endif