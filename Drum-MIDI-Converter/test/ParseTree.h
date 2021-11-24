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
    ParseTree() {};
    ParseTree(const std::string&);
    ParseTree(const std::vector<std::string>&);
    void addRoot(const std::string&);
    ParseTreeNode& operator[](const std::string&);
    ParseTreeNode& operator[](std::vector<std::string>);
    std::vector<std::string> getPathToKey(const std::string&);
    void print();
    bool containsKey(const std::string&);
};


#endif