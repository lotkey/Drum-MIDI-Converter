#include <iostream>
#include <stdexcept>

#include "ParseTreeNode.h"

#pragma region Constructors/Destructors/Assignment

ParseTreeNode::ParseTreeNode() 
{ }

ParseTreeNode::ParseTreeNode(const ParseTreeNode& src) {
    if (src._isLeaf) {
        _defaults.clear();
        _children.clear();
        _isLeaf = true;
    }
    else {
        for (const auto& pair : src._children) {
            _children.insert({pair.first, new ParseTreeNode(*pair.second)});
            _children[pair.first]->_parent = this;
        }

        for (const auto& pair : src._defaults) {
            _defaults.insert({pair.first, new ParseTreeNode(*pair.second)});
            _defaults[pair.first]->_parent = this;
        }
    }
}

ParseTreeNode::ParseTreeNode(ParseTreeNode* parent) 
    : _isLeaf(true), _parent(parent)
{ }

ParseTreeNode::~ParseTreeNode() {
    for (const auto& pair : _children) {
        pair.second->_parent = nullptr;
        delete pair.second;
        _children.erase(pair.first);
    }

    for (const auto& pair : _defaults) {
        pair.second->_parent = nullptr;
        delete pair.second;
        _children.erase(pair.first);
    }
}

void ParseTreeNode::operator=(const ParseTreeNode& src) {
    if (src._isLeaf) {
        _defaults.clear();
        _children.clear();
        _isLeaf = true;
    }
    else {
        for (const auto& pair : src._children) {
            _children.insert({pair.first, new ParseTreeNode(*pair.second)});
            _children[pair.first]->_parent = this;
        }

        for (const auto& pair : src._defaults) {
            _defaults.insert({pair.first, new ParseTreeNode(*pair.second)});
            _defaults[pair.first]->_parent = this;
        }
    }
}

#pragma endregion

#pragma region Info

void ParseTreeNode::print(const uint32_t& numIndents) const {
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

void ParseTreeNode::print() const {
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

void ParseTreeNode::getPathToKey(std::vector<std::string>& path, const std::string& key) const {
    for (const auto& pair : _defaults) {
        if (pair.second->containsKey(key)) {
            path.push_back(pair.first);
            return pair.second->getPathToKey(path, key);
        }
    }

    for (const auto& pair : _children) {
        if (pair.second->containsKey(key)) {
            path.push_back(pair.first);
            return pair.second->getPathToKey(path, key);
        }
    }
} 

bool ParseTreeNode::containsKey(const std::string& key) const {
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

std::vector<std::string> ParseTreeNode::getDefaultKeys() const {
    if (_isLeaf) throw std::runtime_error("Leaf cannot have defaults.");

    std::vector<std::string> keys;
    for (const auto& pair : _defaults) keys.push_back(pair.first);
    return keys;
}

#pragma endregion

#pragma region Modifiers

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

#pragma endregion

#pragma region Accessors

ParseTreeNode& ParseTreeNode::operator[](const std::string& key) const {
    if (_children.find(key) != _children.end()) return *_children.at(key);
    else if (_defaults.find(key) != _defaults.end()) return *_defaults.at(key);
    else throw std::invalid_argument("Provided key out of bounds");
}

ParseTreeNode& ParseTreeNode::operator[](std::vector<std::string> keys) const {
    if (keys.size() == 0) throw std::invalid_argument("List of keys is empty.");
    if (keys.size() == 1) return at(keys[0]);
    else {
        std::string key = keys[0];
        keys.erase(keys.begin());
        return at(key).at(keys);
    }
}

ParseTreeNode& ParseTreeNode::at(const std::string& key) const {
    return operator[](key);
}

ParseTreeNode& ParseTreeNode::at(std::vector<std::string> key) const {
    return operator[](key);
}

#pragma endregion