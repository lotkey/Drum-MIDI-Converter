#ifndef NODE_H
#define NODE_H

#include <inttypes.h>
#include <map>
#include <string>
#include <vector>

class Node {
private:
    const std::string _key;
    const bool _isLeaf;
    std::map<std::string, Node> _children;
    std::vector<std::string> _defaults;

    void print(const uint32_t&) const;
public:
    Node();
    Node(const Node&);
    Node(const std::string&);
    Node(const std::string&, const std::vector<std::string>&, const std::vector<std::string>&);
    Node(const std::string&, const bool&);
    Node(const std::string&, const std::vector<Node>&, const std::vector<std::string>&);
    bool isLeaf() const { return _isLeaf; };
    std::string key() const { return _key; };
    Node operator[](const std::string&);
    Node operator[](const std::string&) const;
    void addChild(const Node&);
    void addDefault(const std::string&);
    void print() const;
};

#endif