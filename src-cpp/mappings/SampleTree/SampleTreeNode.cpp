#include <iostream>
#include <stdexcept>

#include "../Helpers/stringpp.hpp"
#include "../SampleTree/SampleTreeNode.hpp"

#pragma region Constructors/Destructors/Assignment

SampleTreeNode::SampleTreeNode(const std::string& key)
    : _isLeaf(true), _key(key)
{ }

#pragma endregion

#pragma region Info

void SampleTreeNode::print(const uint32_t& numIndents) const {
    if (!_isLeaf) {
        for (const auto& [name, root] : _children) {
            for (unsigned int i = 0; i < numIndents; i++)
                std::cout << "  ";
            if (root.isLeaf())
                std::cout << name << std::endl;
            else
                std::cout << "\033[1;34m" << name << "\033[0m" << std::endl;
            root.print(numIndents + 1);
        }

        for (const auto& [name, root] : _defaults) {
            for (unsigned int i = 0; i < numIndents; i++)
                std::cout << "  ";
            if (root.isLeaf())
                std::cout << "\033[1;31m" << name << "\033[0m" << std::endl;
            else
                std::cout << "\033[1;35m" << name << "\033[0m" << std::endl;
            root.print(numIndents + 1);
        }
    }
}

void SampleTreeNode::print() const {
    if (!_isLeaf) {
        for (const auto& [name, root] : _children) {
            std::cout << "  ";
            if (root.isLeaf())
                std::cout << name << std::endl;
            else
                std::cout << "\033[1;34m" << name << "\033[0m" << std::endl;
            root.print(2);
        }
        for (const auto& [name, root] : _defaults) {
            std::cout << "  ";
            if (root.isLeaf())
                std::cout << "\033[1;31m" << name << "\033[0m" << std::endl;
            else
                std::cout << "\033[1;35m" << name << "\033[0m" << std::endl;
            root.print(2);
        }
    }
}

bool SampleTreeNode::containsKey(const std::string& key) const {
    bool hasKey = false;
    for (const auto& [name, root] : _defaults) {
        if (root.isLeaf()) hasKey = hasKey || key == root._key;
        else hasKey = hasKey || root.containsKey(key);

        if (hasKey) return true;
    }

    for (const auto& [name, root] : _children) {
        if (root.isLeaf()) hasKey = hasKey || key == root._key;
        else hasKey = hasKey || root.containsKey(key);

        if (hasKey) return true;
    }

    return hasKey;
}

std::optional<std::vector<std::string>> SampleTreeNode::getPathToKey(const std::string& key) const {
    for (const auto& [name, root] : _children) {
        if (root.isLeaf()) {
            if (root._key == key) {
                return std::vector<std::string>({name});
            }
        }

        std::optional<std::vector<std::string>> pathOpt = root.getPathToKey(key);
        if (pathOpt.has_value()) {
            std::vector<std::string> path(pathOpt.value());
            path.insert(path.begin(), name);
            return path;
        }
    }

    for (const auto& [name, root] : _defaults) {
        if (root.isLeaf()) {
            if (root._key == key) {
                return std::vector<std::string>({name});
            }
        }

        std::optional<std::vector<std::string>> pathOpt = root.getPathToKey(key);
        if (pathOpt.has_value()) {
            std::vector<std::string> path(pathOpt.value());
            path.insert(path.begin(), name);
            return path;
        }
    }
    return {};
}

std::vector<std::string> SampleTreeNode::getDefaultKeys() const {
    std::vector<std::string> keys;
    addDefaultKeys(keys);
    return keys;
}

std::vector<std::string> SampleTreeNode::getDefaultKeys(const std::string& exclude) const {
    std::vector<std::string> keys;
    addDefaultKeys(keys, exclude);
    return keys;
}

void SampleTreeNode::addDefaultKeys(std::vector<std::string>& keys) const {
    if (_isLeaf) return;

    for (const auto& [name, root] : _defaults) {
        if (root.isLeaf()) keys.push_back(name);
        else root.addDefaultKeys(keys);
    }
}

void SampleTreeNode::addDefaultKeys(std::vector<std::string>& keys, const std::string& exclude) const {
    if (_isLeaf) return;

    for (const auto& [name, root] : _defaults) {
        if (name != exclude) {
            if (root.isLeaf()) keys.push_back(name);
            else root.addDefaultKeys(keys, exclude);
        }        
    }
}

#pragma endregion

#pragma region Modifiers

void SampleTreeNode::addChild(const std::string& mapKey, const std::string& noteKey) {
    _isLeaf = false;
    _children.insert({mapKey, SampleTreeNode(noteKey)});
}

void SampleTreeNode::addDefault(const std::string& mapKey, const std::string& noteKey) {
    _isLeaf = false;
    _defaults.insert({mapKey, SampleTreeNode(noteKey)});
}

#pragma endregion

#pragma region Accessors

SampleTreeNode& SampleTreeNode::operator[](const std::string& key) {
    if (_children.find(key) != _children.end()) return _children.at(key);
    else if (_defaults.find(key) != _defaults.end()) return _defaults.at(key);
    else throw std::invalid_argument("Provided key out of bounds");
}

SampleTreeNode& SampleTreeNode::operator[](std::vector<std::string> keys) {
    if (keys.size() == 0) throw std::invalid_argument("List of keys is empty.");
    if (keys.size() == 1) return at(keys[0]);
    else {
        std::string key = keys[0];
        keys.erase(keys.begin());
        return at(key).at(keys);
    }
}

SampleTreeNode& SampleTreeNode::at(const std::string& key) {
    return operator[](key);
}

SampleTreeNode& SampleTreeNode::at(std::vector<std::string> key) {
    return operator[](key);
}

const SampleTreeNode& SampleTreeNode::operator[](const std::string& key) const {
    if (_children.find(key) != _children.end()) return _children.at(key);
    else if (_defaults.find(key) != _defaults.end()) return _defaults.at(key);
    else throw std::invalid_argument("Provided key out of bounds");
}

const SampleTreeNode& SampleTreeNode::operator[](std::vector<std::string> keys) const {
    if (keys.size() == 0) throw std::invalid_argument("List of keys is empty.");
    if (keys.size() == 1) return at(keys[0]);
    else {
        std::string key = keys[0];
        keys.erase(keys.begin());
        return at(key).at(keys);
    }
}

const SampleTreeNode& SampleTreeNode::at(const std::string& key) const {
    return operator[](key);
}

const SampleTreeNode& SampleTreeNode::at(std::vector<std::string> key) const {
    return operator[](key);
}

void SampleTreeNode::addToStream(std::ofstream& outfile, uint32_t numTabs) const {
    for (const auto& [name, root] : _children) {
        if (root.isLeaf())
            outfile << stringpp::repeat("   ", numTabs) << "const string " << name << " = \"" << root._key << "\";\n";
        else {
            std::string label = name;
            label[0] = toupper(label[0]);
            outfile << stringpp::repeat("   ", numTabs) << "namespace " << label << " {\n";
            root.addToStream(outfile, numTabs + 1);
            outfile << stringpp::repeat("   ", numTabs) << "}\n";
        }
    }

    for (const auto& [name, root] : _defaults) {
        if (root.isLeaf())
            outfile << stringpp::repeat("   ", numTabs) << "const string " << name << " = \"" << root._key << "\";\n";
        else {
            std::string label = name;
            label[0] = toupper(label[0]);
            outfile << stringpp::repeat("   ", numTabs) << "namespace " << label << " {\n";
            root.addToStream(outfile, numTabs + 1);
            outfile << stringpp::repeat("   ", numTabs) << "}\n";
        }
    }
}

#pragma endregion