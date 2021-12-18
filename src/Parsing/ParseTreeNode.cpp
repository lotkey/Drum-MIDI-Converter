#include <iostream>
#include <stdexcept>

#include "../Helpers/stringpp.hpp"
#include "../Parsing/ParseTreeNode.hpp"

#pragma region Constructors/Destructors/Assignment

ParseTreeNode::ParseTreeNode()
    : _isLeaf(true)
{ }

ParseTreeNode::ParseTreeNode(const ParseTreeNode& src) {
    if (src._isLeaf) {
        _defaults.clear();
        _children.clear();
        _isLeaf = true;
    }
    else {
        for (const auto& [name, root] : src._children) {
            _children.insert({name, new ParseTreeNode(*root)});
            _children[name]->_parent = this;
        }

        for (const auto& [name, root] : src._defaults) {
            _defaults.insert({name, new ParseTreeNode(*root)});
            _defaults[name]->_parent = this;
        }
    }
}

ParseTreeNode::ParseTreeNode(ParseTreeNode* parent) 
    : _isLeaf(true), _parent(parent)
{ }

ParseTreeNode::~ParseTreeNode() {
    for (const auto& [name, root] : _children) {
        root->_parent = nullptr;
        delete root;
    }
    _children.clear();

    for (const auto& [name, root] : _defaults) {
        root->_parent = nullptr;
        delete root;
    }
    _defaults.clear();
}

void ParseTreeNode::operator=(const ParseTreeNode& src) {
    if (src._isLeaf) {
        _defaults.clear();
        _children.clear();
        _isLeaf = true;
    }
    else {
        for (const auto& [name, root] : src._children) {
            _children.insert({name, new ParseTreeNode(*root)});
            _children[name]->_parent = this;
        }

        for (const auto& [name, root] : src._defaults) {
            _defaults.insert({name, new ParseTreeNode(*root)});
            _defaults[name]->_parent = this;
        }
    }
}

#pragma endregion

#pragma region Info

void ParseTreeNode::print(const uint32_t& numIndents) const {
    if (!_isLeaf) {
        for (const auto& [name, root] : _children) {
            for (unsigned int i = 0; i < numIndents; i++)
                std::cout << "  ";
            if (root->isLeaf())
                std::cout << name << std::endl;
            else
                std::cout << "\033[1;34m" << name << "\033[0m" << std::endl;
            root->print(numIndents + 1);
        }

        for (const auto& [name, root] : _defaults) {
            for (unsigned int i = 0; i < numIndents; i++)
                std::cout << "  ";
            if (root->isLeaf())
                std::cout << "\033[1;31m" << name << "\033[0m" << std::endl;
            else
                std::cout << "\033[1;35m" << name << "\033[0m" << std::endl;
            root->print(numIndents + 1);
        }
    }
}

void ParseTreeNode::print() const {
    if (!_isLeaf) {
        for (const auto& [name, root] : _children) {
            std::cout << "  ";
            if (root->isLeaf())
                std::cout << name << std::endl;
            else
                std::cout << "\033[1;34m" << name << "\033[0m" << std::endl;
            root->print(2);
        }
        for (const auto& [name, root] : _defaults) {
            std::cout << "  ";
            if (root->isLeaf())
                std::cout << "\033[1;31m" << name << "\033[0m" << std::endl;
            else
                std::cout << "\033[1;35m" << name << "\033[0m" << std::endl;
            root->print(2);
        }
    }
}

bool ParseTreeNode::containsKey(const std::string& key) const {
    bool hasKey = false;
    for (const auto& [name, root] : _defaults) {
        if (root->isLeaf()) hasKey = hasKey || key == name;
        else hasKey = hasKey || root->containsKey(key);

        if (hasKey) return true;
    }

    for (const auto& [name, root] : _children) {
        if (root->isLeaf()) hasKey = hasKey || key == name;
        else hasKey = hasKey || root->containsKey(key);

        if (hasKey) return true;
    }

    return hasKey;
}

std::optional<std::vector<std::string>> ParseTreeNode::getPathToKey(const std::string& key) const {
    for (const auto& [name, root] : _children) {
        if (root->isLeaf()) {
            if (name == key) return std::vector<std::string>({name});
        }

        std::optional<std::vector<std::string>> pathOpt = root->getPathToKey(key);
        if (pathOpt.has_value()) {
            std::vector<std::string> path(pathOpt.value());
            path.insert(path.begin(), name);
            return path;
        }
    }

    for (const auto& [name, root] : _defaults) {
        if (root->isLeaf()) {
            if (name == key) return std::vector<std::string>({name});
        }

        std::optional<std::vector<std::string>> pathOpt = root->getPathToKey(key);
        if (pathOpt.has_value()) {
            std::vector<std::string> path(pathOpt.value());
            path.insert(path.begin(), name);
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

    for (const auto& [name, root] : _defaults) {
        if (root->isLeaf()) keys.push_back(name);
        else root->addDefaultKeys(keys);
    }
}

void ParseTreeNode::addDefaultKeys(std::vector<std::string>& keys, const std::string& exclude) const {
    if (_isLeaf) return;

    for (const auto& [name, root] : _defaults) {
        if (name != exclude) {
            if (root->isLeaf()) keys.push_back(name);
            else root->addDefaultKeys(keys, exclude);
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
    for (const auto& [name, root] : _children) {
        if (root->isLeaf())
            outfile << stringpp::repeat("   ", numTabs) << "const string " << name << " = \"" << name << "\";\n";
        else {
            std::string label = name;
            label[0] = toupper(label[0]);
            outfile << stringpp::repeat("   ", numTabs) << "namespace " << label << " {\n";
            root->addToStream(outfile, numTabs + 1);
            outfile << stringpp::repeat("   ", numTabs) << "}\n";
        }
    }

    for (const auto& [name, root] : _defaults) {
        if (root->isLeaf())
            outfile << stringpp::repeat("   ", numTabs) << "const string " << name << " = \"" << name << "\";\n";
        else {
            std::string label = name;
            label[0] = toupper(label[0]);
            outfile << stringpp::repeat("   ", numTabs) << "namespace " << label << " {\n";
            root->addToStream(outfile, numTabs + 1);
            outfile << stringpp::repeat("   ", numTabs) << "}\n";
        }
    }
}

#pragma endregion