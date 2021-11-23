#include "Tree.h"

Tree::Tree(const Tree& tree) {
    _nodes = tree._nodes;
}

Tree::Tree(const std::vector<Node>& nodes) {
    for (const Node& n : nodes)
        _nodes.insert({n.key(), n});
}

void Tree::addNode(const Node& n) {
    _nodes.insert({n.key(), n});
}

void Tree::print() const {
    for (const auto& pair : _nodes)
        pair.second.print();
}