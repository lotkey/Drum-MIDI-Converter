#include <initializer_list>
#include <iostream>
#include <string>

#include "ParseTree.h"

void printParseTree(ParseTree tree) {
    tree.print();
    return;
}

int main() {
    ParseTree tree = ParseTree("./tree.txt");
    std::vector<std::string> path = tree.getPathToKey("tom_floor1_rimshot");
    for (const auto& s : path) {
        std::cout << s << " -> ";
    }
    std::cout << " end\n";

    return 0;
}