#include <iostream>
#include <string>

#include "ConversionMap.hpp"
#include "Mapping.hpp"
#include "Mappings.hpp"
#include "ParseTree.hpp"

int main() {
    ParseTree tree = ParseTree("./tree.txt");
    // Mapping m1 = Mappings::Drumforge::getUltimateMapping();
    // Mapping m2 = Mappings::XLNAudio::getAddictiveDrums2Mapping();
    // ConversionMap c = tree.makeConversionMapping(m2, m1);
    // c.print();
    tree.print();
    // tree.exportAsNamespace("./Keys.hpp");
    return 0;
}