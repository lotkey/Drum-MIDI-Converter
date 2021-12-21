#include <iostream>
#include <string>

#include "./Mapping/ConversionMap.hpp"
#include "./Mapping/Mapping.hpp"
#include "./Mapping/Mappings.hpp"
#include "./Parsing/ParseTree.hpp"

int main() {
    ParseTree tree("./tree/");
    // Mapping m1 = Mappings::Drumforge::getBergstrandMapping();
    // Mapping m2 = Mappings::GetGoodDrums::getModernAndMassiveMapping();
    // ConversionMap m3 = tree.makeConversionMapping(m1, m2);
    // m3.print();
    tree.exportAsNamespace("./Parsing/Keys.hpp");

    return 0;
}