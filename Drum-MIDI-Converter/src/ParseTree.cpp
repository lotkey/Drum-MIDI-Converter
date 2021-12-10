#include <algorithm>
#include <cinttypes>
#include <cstdlib>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <map>
#include <optional>
#include <random>
#include <stdexcept>
#include <string>
#include <vector>

#include "ConversionMap.hpp"
#include "Mapping.hpp"
#include "ParseTree.hpp"
#include "stringpp.hpp"

#pragma region Constructors/Destructors/Assignment

ParseTree::ParseTree()
{ }

ParseTree::ParseTree(const ParseTree& src) {
    for (const auto& [name, root] : src._roots)
        _roots.insert({name, new ParseTreeNode(*root)});
}

ParseTree::ParseTree(const std::string& path) {
    if (std::filesystem::is_directory(path))
        _initFromDir(path);
    else if (std::filesystem::exists(path))
        _initFromFile(path);
    else
        throw std::invalid_argument("Path does not correspond to a file or directory.");
}

ParseTree::ParseTree(const std::vector<std::string>& keys) {
    for (const std::string& key : keys)
        _roots.insert({key, new ParseTreeNode()});
}

ParseTree::~ParseTree() {
    for (const auto& [_, root] : _roots) {
        delete root;
    }
    _roots.clear();
}

void ParseTree::operator=(const ParseTree& src) {
    for (const auto& [name, root] : src._roots)
        _roots.insert({name, new ParseTreeNode(*root)});
}

void ParseTree::_initFromFile(const std::string& path) {
    std::ifstream infile;
    infile.open(path);
    if (infile.is_open()) {
        uint32_t numSpaces = 0;
        std::vector<std::string> currentPath;
        std::string line, key;

        while (std::getline(infile, line)) {
            uint32_t numSpacesInLine = line.find_last_of(" ") + 1;

            if (numSpacesInLine == 0 && numSpaces == 0) { // Adding first root

                if (_roots.size() > 0) // Adding another root with an empty root, not allowed
                    throw std::runtime_error("Parsing error. Adding root after empty root. Empty roots are not allowed.");

                else { // Adding first root, totally allowed
                    key = stringpp::trim(line); // trim the key
                    if (key[0] == '*') throw std::runtime_error("Parsing error. Roots cannot be defaulted."); // if defaulted, throw error
                    addRoot(key); // add the root
                    currentPath.push_back(key); // push the root to the path
                }

            }
            else if (numSpacesInLine > numSpaces) { // Indenting in

                if (numSpacesInLine - numSpaces > 1) // Indenting too much, not allowed
                    throw std::runtime_error("Parsing error. Too many spaces.");

                else { // Normal indenting, totally allowed
                    key = stringpp::trim(line); // trim the line
                    if (key[0] == '*') { // add as default
                        key = key.substr(1, key.length() - 1); // remove the '*' from the key
                        this->operator[](currentPath).addDefault(key); // add as default to the current path
                    }
                    else // add as child
                        this->operator[](currentPath).addChild(key); // add as child to the current path
                    numSpaces = numSpacesInLine; // update the number of spaces
                    currentPath.push_back(key); // add the key to the current path
                }
                
            }
            else if (numSpacesInLine < numSpaces) { // Backing out

                if (numSpacesInLine == 0) { // Adding another root
                    currentPath.clear(); // clear the path
                    key = stringpp::trim(line); // trim the key
                    if (key[0] == '*') throw std::runtime_error("Parsing error. Roots cannot be defaulted."); // if defaulted, throw error
                    addRoot(key); // add the key as a root
                    currentPath.push_back(key); // add the key to the path
                    numSpaces = 0; // set the number of spaces to 0
                }
                else { // Adding another child/default to a node
                    for (uint32_t i = 0; i <= numSpaces - numSpacesInLine; i++) // pop the difference
                        currentPath.pop_back();

                    key = stringpp::trim(line); // trim the key
                    if (key[0] == '*') { // check for default symbol
                        key = key.substr(1, key.length() - 1); // remove the '*'
                        this->operator[](currentPath).addDefault(key); // add as default
                    }
                    else // child
                        this->operator[](currentPath).addChild(key); // add as child
                    numSpaces = numSpacesInLine; // update number of spaces
                    currentPath.push_back(key); // add key to current path
                }

            }
            else { // Same level, but not root

                currentPath.pop_back(); // pop back of path
                key = stringpp::trim(line); // trim key
                if (key[0] == '*') { // check for default
                    key = key.substr(1, key.length() - 1); // remove '*'
                    this->operator[](currentPath).addDefault(key); // add as default
                }
                else // child
                    this->operator[](currentPath).addChild(key); // add as child
                currentPath.push_back(key); // add key to current path

            }
        }
    }
    else {
        throw std::invalid_argument("Cannot open path");
    }
}

void ParseTree::_initFromDir(const std::string& path) {
    for (const auto& entry : std::filesystem::directory_iterator(path)) {
        if (!entry.is_directory())
            _addRootFromFile(entry.path());
    }
}

#pragma endregion

#pragma region Info

void ParseTree::print() const {
    for (const auto& [name, root] : _roots) {
        std::cout << "\033[1;32m" << name << "\033[0m" << std::endl;
        root->print();
    }
}

bool ParseTree::containsKey(const std::string& key) const {
    for (const auto& [_, root] : _roots)
        if (root->containsKey(key)) return true;
    return false;
}

std::optional<std::vector<std::string>> ParseTree::getPathToKey(const std::string& key) const {
    std::optional<std::vector<std::string>> pathOpt;
    for (const auto& [name, root] : _roots) {
        pathOpt = root->getPathToKey(key);
        if (pathOpt.has_value()) {
            std::vector<std::string> path(pathOpt.value());
            path.insert(path.begin(), name);
            return path;
        }
    }
    return {};
}

#pragma endregion

#pragma region Modifiers

void ParseTree::addRoot(const std::string& key) {
    _roots.insert({key, new ParseTreeNode()});
}

void ParseTree::_addRootFromFile(const std::filesystem::path& path) {
    std::ifstream infile(path);
    std::string filename(path.filename().string());
    std::string rootname(filename.substr(0, filename.find_last_of('.')));
    uint32_t numSpaces = 0;
    std::vector<std::string> currentPath = { rootname };
    this->addRoot(rootname);
    std::string line, key;

    if (infile.is_open()) {
        while (std::getline(infile, line)) {
            uint32_t numSpacesLine = line.find_last_of(" ") + 1;

            if (numSpaces == numSpacesLine) {

                if (currentPath.size() != 1) currentPath.pop_back();

                key = stringpp::trim(line);
                if (key[0] == '*') {
                    key = key.substr(1, key.length() - 1);
                    this->at(currentPath).addDefault(key);
                } else {
                    this->at(currentPath).addChild(key);
                }
                currentPath.push_back(key);
            }
            else if (numSpaces < numSpacesLine) {
                key = stringpp::trim(line);
                if (key[0] == '*') {
                    key = key.substr(1, key.length() - 1);
                    this->at(currentPath).addDefault(key);
                } else {
                    this->at(currentPath).addChild(key);
                }

                currentPath.push_back(key);
                numSpaces = numSpacesLine;
            }
            else {
                for (uint32_t i = 0; i <= numSpaces - numSpacesLine; i++) // pop the difference
                    currentPath.pop_back();

                key = stringpp::trim(line);
                if (key[0] == '*') {
                    key = key.substr(1, key.length() - 1);
                    this->at(currentPath).addDefault(key);
                } else {
                    this->at(currentPath).addChild(key);
                }
                currentPath.push_back(key);
                numSpaces = numSpacesLine;
            }
        }
    }
    else
        throw std::runtime_error("Couldn't open \"" + path.string() + "\"");
}

#pragma endregion

#pragma region Accessors

ParseTreeNode& ParseTree::operator[](const std::string& key) const {
    if (_roots.find(key) != _roots.end()) return *_roots.at(key);
    else throw std::invalid_argument("Key doesn't match any root key");
}

ParseTreeNode& ParseTree::operator[](std::vector<std::string> keys) const {
    if (keys.size() == 0) throw std::runtime_error("No keys provided.");
    if (keys.size() == 1) return operator[](keys[0]);

    std::string key = keys[0];
    keys.erase(keys.begin());
    if (_roots.find(key) != _roots.end()) return _roots.at(key)->at(keys);
    throw std::invalid_argument("Key doesn't map to a root.");
}

ParseTreeNode& ParseTree::at(const std::string& key) const {
    return operator[](key);
}

ParseTreeNode& ParseTree::at(std::vector<std::string> keys) const {
    return operator[](keys);
}

#pragma endregion

#pragma region Parsing

void ParseTree::exportAsNamespace(const std::string& path) const {
    std::ofstream outfile;
    outfile.open(path);

    outfile << "#ifndef TEST_H\n#define TEST_H\n\n#include <string>\n\nusing namespace std;\n\nnamespace Keys {\n";
    for (const auto& pair : _roots) {
        std::string label = pair.first;
        label[0] = toupper(label[0]);
        outfile << "   " << "namespace " << label << " {\n";
        pair.second->addToStream(outfile, 2);
        outfile << "   }\n";
    }
    outfile << "}\n\n#endif";

    outfile.close();
}

std::optional<uint8_t> ParseTree::findNearestFit(const Mapping& mapping, std::vector<std::string> path) const {
    std::string exclude;
    
    if (mapping.containsKey(path.back()))
        return mapping[path.back()];
        
    exclude = path.back();
    path.pop_back();

    std::random_device rd;
    std::mt19937 g(rd());
    // Look through defaults
    while (path.size() > 0) {
        std::vector<std::string> defaults = at(path).getDefaultKeys(exclude);
        std::shuffle(defaults.begin(), defaults.end(), rd);
        for (const auto& key : defaults) {
            path.push_back(key);
            if (mapping.containsKey(path.back()))
                return mapping[path.back()];
            path.pop_back();
        }
        exclude = path.back();
        path.pop_back();
    }
    return {};
}

ConversionMap ParseTree::makeConversionMapping(const Mapping& mapFrom, const Mapping& mapTo) const {
    bool hasNearestFit;
    std::optional<uint8_t> value;
    ConversionMap m = ConversionMap(mapFrom.name(), mapTo.name());

    for (const std::string& key : mapFrom.getKeys()) {
        auto path = getPathToKey(key);
        value = findNearestFit(mapTo, path.value());
        if (value.has_value())
            m.insert(mapFrom[key], value.value());
    }

    return m;
}

#pragma endregion