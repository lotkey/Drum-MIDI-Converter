#include <iostream>
#include <string>

#include "ConversionMap.hpp"
#include "Mapping.hpp"
#include "Mappings.hpp"
#include "ParseTree.hpp"

int main() {
    ParseTree tree = ParseTree("./tree.txt");
    Mapping mt = Mappings::MandaAudio::getMTPowerDrumKit2Mapping();
    Mapping invasion = Mappings::GetGoodDrums::getInvasionMapping();
    mt.print();
    std::cout << std::endl;
    invasion.print();
    std::cout << std::endl;

    ConversionMap conversion = tree.makeConversionMapping(invasion, mt);

    conversion.print();

    return 0;
}