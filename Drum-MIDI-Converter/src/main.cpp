#include <iostream>
#include <string>

#include "Mapping.hpp"
#include "Mappings.hpp"
#include "ParseTree.hpp"

int main() {
    ParseTree tree = ParseTree("./tree.txt");
    Mapping mt = Mappings::MandaAudio::getMTPowerDrumKit2Mapping();
    mt.print();

    return 0;
}