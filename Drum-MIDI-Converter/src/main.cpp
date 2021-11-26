#include <iostream>
#include <string>

#include "ConversionMap.hpp"
#include "Mapping.hpp"
#include "Mappings.hpp"
#include "ParseTree.hpp"

int main() {
    ParseTree tree = ParseTree("./tree.txt");
    tree.exportAsNamespace("./test.hpp");
    return 0;
}