#include <iostream>
#include <string>

#include "./Mapping/ConversionMap.hpp"
#include "./Mapping/Mapping.hpp"
#include "./Mapping/Mappings.hpp"
#include "./Parsing/ParseTree.hpp"

int main() {
    ParseTree tree("./tree/");
    // tree.print();

    Mapping ggdMM = Mappings::GetGoodDrums::getModernAndMassiveMapping();
    Mapping sd5 = Mappings::StevenSlateDrums::getSSD5Mapping();

    std::cout << "\n";
    ConversionMap conversionMap = tree.makeConversionMapping(ggdMM, sd5);
    conversionMap.print();

    return 0;
}