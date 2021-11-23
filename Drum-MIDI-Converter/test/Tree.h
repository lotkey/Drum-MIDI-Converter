#ifndef TREE_H
#define TREE_H

#include <map>
#include <string>
#include <vector>

#include "Node.h"

class Tree {
private:
    std::map<std::string, Node> _nodes;
public:
    Tree() {};
    Tree(const Tree&);
    Tree(const std::vector<Node>&);
    void addNode(const Node&);
    void print() const;
};

#endif