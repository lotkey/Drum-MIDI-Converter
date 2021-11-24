#ifndef MAPTREENODE_H
#define MAPTREENODE_H

#include <inttypes.h>
#include <map>
#include <string>
#include <vector>

class MapTreeNode {
private:
    std::map<std::string, MapTreeNode*> _children;
    uint8_t _value;
    bool _isLeaf = false;
public:
    MapTreeNode(const uint8_t&);
    MapTreeNode(const std::vector<std::string>&);
    bool containsPathToLeaf(const std::vector<std::string>&) const;
};

#endif