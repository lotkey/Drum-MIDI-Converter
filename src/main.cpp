#include <iostream>
#include <string>

#include "./Mapping/ConversionMap.hpp"
#include "./Mapping/Mapping.hpp"
#include "./Mapping/Mappings.hpp"
#include "./Parsing/ParseTree.hpp"

int main() {
    ParseTree tree("./tree/");
    std::map<std::string, Mapping> mappings = Mappings::getAllMappings();
    ConversionMap m3 = tree.makeConversionMapping(mappings["GGD Modern & Massive"], mappings["General MIDI Standard"]);
    m3.print();

    return 0;
}