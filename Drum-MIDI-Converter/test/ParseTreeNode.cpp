#include <iostream>
#include <stdexcept>

#include "ParseTreeNode.h"

ParseTreeNode::ParseTreeNode(ParseTreeNode* parent) 
    : _isLeaf(true), _parent(parent)
{ }

void ParseTreeNode::addChild(const std::string& key) {
    _isLeaf = false;
    _children.insert({key, new ParseTreeNode(this)});
}

void ParseTreeNode::addChildren(const std::vector<std::string>& keys) {
    for (const auto& key : keys)
        addChild(key);
}

void ParseTreeNode::addDefaults(const std::vector<std::string>& keys) {
    for (const auto& key : keys)
        addDefault(key);
}

void ParseTreeNode::addDefault(const std::string& key) {
    _isLeaf = false;
    _defaults.insert({key, new ParseTreeNode(this)});
}

std::vector<std::string> ParseTreeNode::getDefaultKeys() {
    if (_isLeaf) throw std::runtime_error("Leaf cannot have defaults.");

    std::vector<std::string> keys;
    for (const auto& pair : _defaults) keys.push_back(pair.first);
    return keys;
}

ParseTreeNode& ParseTreeNode::operator[](const std::string& key) {
    if (_children.find(key) != _children.end()) return *_children[key];
    else if (_defaults.find(key) != _defaults.end()) return *_defaults[key];
    else throw std::invalid_argument("Provided key out of bounds");
}

ParseTreeNode& ParseTreeNode::operator[](std::vector<std::string> keys) {
    if (keys.size() == 1) return at(keys[0]);
    else {
        std::string key = keys[0];
        keys.erase(keys.begin());
        return at(key).at(keys);
    }
}

void ParseTreeNode::print() {
    if (!_isLeaf) {
        for (const auto& pair : _children) {
            std::cout << "  ";
            if (pair.second->isLeaf())
                std::cout << pair.first << std::endl;
            else
                std::cout << "\033[1;34m" << pair.first << "\033[0m" << std::endl;
            pair.second->print(2);
        }
        for (const auto& pair : _defaults) {
            std::cout << "  ";
            if (pair.second->isLeaf())
                std::cout << "\033[1;31m" << pair.first << "\033[0m" << std::endl;
            else
                std::cout << "\033[1;35m" << pair.first << "\033[0m" << std::endl;
            pair.second->print(2);
        }
    }
}

void ParseTreeNode::print(const uint32_t& numIndents) {
    if (!_isLeaf) {
        for (const auto& pair : _children) {
            for (unsigned int i = 0; i < numIndents; i++)
                std::cout << "  ";
            if (pair.second->isLeaf())
                std::cout << pair.first << std::endl;
            else
                std::cout << "\033[1;34m" << pair.first << "\033[0m" << std::endl;
            pair.second->print(numIndents + 1);
        }

        for (const auto& pair : _defaults) {
            for (unsigned int i = 0; i < numIndents; i++)
                std::cout << "  ";
            if (pair.second->isLeaf())
                std::cout << "\033[1;31m" << pair.first << "\033[0m" << std::endl;
            else
                std::cout << "\033[1;35m" << pair.first << "\033[0m" << std::endl;
            pair.second->print(numIndents + 1);
        }
    }
}

bool ParseTreeNode::containsKey(const std::string& key) {
    bool hasKey = false;
    for (const auto& pair : _defaults) {
        if (pair.second->isLeaf()) hasKey = hasKey || key == pair.first;
        else hasKey = hasKey || pair.second->containsKey(key);

        if (hasKey) return true;
    }

    for (const auto& pair : _children) {
        if (pair.second->isLeaf()) hasKey = hasKey || key == pair.first;
        else hasKey = hasKey || pair.second->containsKey(key);

        if (hasKey) return true;
    }

    return hasKey;
}

void ParseTreeNode::appendPathToKey(std::vector<std::string>& path, const std::string& key) {
    for (const auto& pair : _defaults) {
        if (pair.second->containsKey(key)) {
            path.push_back(pair.first);
            return pair.second->appendPathToKey(path, key);
        }
    }

    for (const auto& pair : _children) {
        if (pair.second->containsKey(key)) {
            path.push_back(pair.first);
            return pair.second->appendPathToKey(path, key);
        }
    }
} 