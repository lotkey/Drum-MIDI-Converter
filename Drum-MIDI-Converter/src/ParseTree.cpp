#include <fstream>
#include <inttypes.h>
#include <iostream>
#include <map>
#include <stdexcept>
#include <string>

#include "ParseTree.h"
#include "stringpp.h"

#pragma region Constructors/Destructors/Assignment

ParseTree::ParseTree()
{ }

ParseTree::ParseTree(const ParseTree& src) {
    for (const auto& pair : src._roots)
        _roots.insert({pair.first, new ParseTreeNode(*pair.second)});
}

ParseTree::ParseTree(const std::string& path) {
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

ParseTree::ParseTree(const std::vector<std::string>& keys) {
    for (const std::string& key : keys)
        _roots.insert({key, new ParseTreeNode()});
}

ParseTree::~ParseTree() {
    for (const auto& pair : _roots) {
        delete pair.second;
        _roots.erase(pair.first);
    }
}

void ParseTree::operator=(const ParseTree& src) {
    for (const auto& pair : src._roots)
        _roots.insert({pair.first, new ParseTreeNode(*pair.second)});
}

#pragma endregion

#pragma region Info

void ParseTree::print() const {
    for (const auto& pair : _roots) {
        std::cout << "\033[1;32m" << pair.first << "\033[0m" << std::endl;
        pair.second->print();
    }
}

bool ParseTree::containsKey(const std::string& key) const {
    for (const auto& pair : _roots)
        if (pair.second->containsKey(key)) return true;
    return false;
}

std::vector<std::string> ParseTree::getPathToKey(const std::string& key) const {
    std::vector<std::string> path;
    for (const auto& pair : _roots) {
        path = pair.second->getPathToKey(key);
        if (path.size() != 0) return path;
    }
    return path;
}

#pragma endregion

#pragma region Modifiers

void ParseTree::addRoot(const std::string& key) {
    _roots.insert({key, new ParseTreeNode()});
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