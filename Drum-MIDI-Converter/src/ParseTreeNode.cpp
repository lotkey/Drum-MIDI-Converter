#include <iostream>
#include <stdexcept>

#include "ParseTreeNode.hpp"
#include "stringpp.hpp"

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

std::optional<std::vector<std::string>> ParseTreeNode::getPathToKey(const std::string& key) const {
    for (const auto& pair : _children) {
        if (pair.second->isLeaf()) {
            if (pair.first == key) return std::vector<std::string>({pair.first});
        }

        std::optional<std::vector<std::string>> pathOpt = pair.second->getPathToKey(key);
        if (pathOpt.has_value()) {
            std::vector<std::string> path(pathOpt.value());
            path.insert(path.begin(), pair.first);
            return path;
        }
    }

    for (const auto& pair : _defaults) {
        if (pair.second->isLeaf()) {
            if (pair.first == key) return std::vector<std::string>({pair.first});
        }

        std::optional<std::vector<std::string>> pathOpt = pair.second->getPathToKey(key);
        if (pathOpt.has_value()) {
            std::vector<std::string> path(pathOpt.value());
            path.insert(path.begin(), pair.first);
            return path;
        }
    }
    return {};
}

std::vector<std::string> ParseTreeNode::getDefaultKeys() const {
    std::vector<std::string> keys;
    addDefaultKeys(keys);
    return keys;
}

std::vector<std::string> ParseTreeNode::getDefaultKeys(const std::string& exclude) const {
    std::vector<std::string> keys;
    addDefaultKeys(keys, exclude);
    return keys;
}

void ParseTreeNode::addDefaultKeys(std::vector<std::string>& keys) const {
    if (_isLeaf) return;

    for (const auto& pair : _defaults) {
        if (pair.second->isLeaf()) keys.push_back(pair.first);
        else pair.second->addDefaultKeys(keys);
    }
}

void ParseTreeNode::addDefaultKeys(std::vector<std::string>& keys, const std::string& exclude) const {
    if (_isLeaf) return;

    for (const auto& pair : _defaults) {
        if (pair.first != exclude) {
            if (pair.second->isLeaf()) keys.push_back(pair.first);
            else pair.second->addDefaultKeys(keys, exclude);
        }        
    }
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

ParseTreeNode* ParseTreeNode::parent() const {
    return _parent;
}

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

void ParseTreeNode::addToStream(std::ofstream& outfile, uint32_t numTabs) const {
    for (const auto& pair : _children) {
        if (pair.second->isLeaf())
            outfile << stringpp::repeat("   ", numTabs) << "const string " << pair.first << " = \"" << pair.first << "\";\n";
        else {
            std::string label = pair.first;
            label[0] = toupper(label[0]);
            outfile << stringpp::repeat("   ", numTabs) << "namespace " << label << " {\n";
            pair.second->addToStream(outfile, numTabs + 1);
            outfile << stringpp::repeat("   ", numTabs) << "}\n";
        }
    }

    for (const auto& pair : _defaults) {
        if (pair.second->isLeaf())
            outfile << stringpp::repeat("   ", numTabs) << "const string " << pair.first << " = \"" << pair.first << "\";\n";
        else {
            std::string label = pair.first;
            label[0] = toupper(label[0]);
            outfile << stringpp::repeat("   ", numTabs) << "namespace " << label << " {\n";
            pair.second->addToStream(outfile, numTabs + 1);
            outfile << stringpp::repeat("   ", numTabs) << "}\n";
        }
    }
}

#pragma endregion