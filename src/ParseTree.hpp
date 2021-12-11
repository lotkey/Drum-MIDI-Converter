#ifndef PARSETREE_HPP
#define PARSETREE_HPP

#include <filesystem>
#include <map>
#include <optional>
#include <string>
#include <vector>

#include "ConversionMap.hpp"
#include "Mapping.hpp"
#include "ParseTreeNode.hpp"

class ParseTree {
private:
    std::map<std::string, ParseTreeNode*> _roots;

    void _initFromFile(const std::string&);
    void _initFromDir(const std::string&);
    void _addRootFromFile(const std::filesystem::path&);
public:
    #pragma region Constructors/Destructors/Assignment
    ParseTree();
    ParseTree(const ParseTree&);
    ParseTree(const std::string&);
    ParseTree(const std::vector<std::string>&);
    ~ParseTree();
    void operator=(const ParseTree&);
    #pragma endregion
    #pragma region Info
    void print() const;
    bool containsKey(const std::string&) const;
    std::optional<std::vector<std::string>> getPathToKey(const std::string&) const;
    #pragma endregion
    #pragma region Modifiers
    void addRoot(const std::string&);
    #pragma endregion
    #pragma region Accessors
    ParseTreeNode& operator[](const std::string&) const;
    ParseTreeNode& operator[](std::vector<std::string>) const;
    ParseTreeNode& at(const std::string&) const;
    ParseTreeNode& at(std::vector<std::string>) const;
    #pragma endregion
    #pragma region Parsing
    void exportAsNamespace(const std::string&) const;
    std::optional<uint8_t> findNearestFit(const Mapping&, std::vector<std::string>) const;
    ConversionMap makeConversionMapping(const Mapping&, const Mapping&) const;
    #pragma endregion
};


#endif