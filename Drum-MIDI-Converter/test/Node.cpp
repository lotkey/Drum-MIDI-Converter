#include <cassert>
#include <iostream>
#include <stdexcept>

#include "Node.h"

Node::Node() 
    : _key("default_key"), _isLeaf(false)
{ }

Node::Node(const Node& n)
    : _key(n._key), _isLeaf(n._isLeaf)
{
    _children = n._children;
    _defaults = n._defaults;
}

Node::Node(const std::string& key) 
    : _key(key), _isLeaf(true)
{ }

Node::Node(const std::string& key, const std::vector<std::string>& leafChildrenNames, const std::vector<std::string>& defaults) 
    : _key(key), _isLeaf(false)
{
    for (const std::string& s : leafChildrenNames)
        _children.insert({s, Node(s)});

    for (const std::string& s : defaults) {
        if (_children.find(s) != _children.end()) _defaults.push_back(s);
        else throw std::invalid_argument("Default name does not correspond to a registered child");
    }
}

Node::Node(const std::string& key, const bool& isLeaf)
    : _key(key), _isLeaf(isLeaf)
{ }

Node::Node(const std::string& key, const std::vector<Node>& children, const std::vector<std::string>& defaults) 
    : _key(key), _isLeaf(false)
{
    for (const Node& node : children)
        _children.insert({node.key(), node});

    for (const std::string& key : defaults) {
        if (_children.find(key) != _children.end()) _defaults.push_back(key);
        else throw std::invalid_argument("Default name does not correspond to a registered child");
    }
}

Node Node::operator[](const std::string& key) {
    return _children[key];
}

Node Node::operator[](const std::string& key) const {
    return _children.at(key);
}

void Node::addChild(const Node& node) {
    _children.insert({node.key(), node});
}

void Node::addDefault(const std::string& key) {
    if (_children.find(key) != _children.end()) _defaults.push_back(key);
    else throw std::invalid_argument("Default name does not correspond to a registered child");
}

void Node::print() const {
    std::cout << _key;
    if (!_isLeaf) {
        std::cout << ":\n";
        for (const auto& pair : _children)
            pair.second.print(1);
    }
    else
        std::cout << "\n";
}

void Node::print(const uint32_t& numTabs) const {
    for (unsigned int i = 0; i < numTabs; i++)
        std::cout << "  ";
    std::cout << _key;

    if (!_isLeaf) {
        std::cout << ":\n";
        for (const auto& pair : _children)
            pair.second.print(numTabs + 1);
    }
    else {
        std::cout << "\n";
    }
}