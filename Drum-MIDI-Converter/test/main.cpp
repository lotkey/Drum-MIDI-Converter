#include <initializer_list>
#include <iostream>
#include <string>

#include "ParseTree.h"

int main() {
    ParseTree tree = ParseTree("./tree.txt");
    if (tree.containsKey("tom_floor1_rimshot")) {
        std::vector<std::string> path = tree.getPathToKey("tom_floor1_rimshot");
        for (const auto& s : path) {
            std::cout << s << " -> ";
        }
        std::cout << " end\n";
    }
}