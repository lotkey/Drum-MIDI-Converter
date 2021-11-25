#include <iostream>
#include <string>

#include "Mapping.h"
#include "Mappings.h"
#include "ParseTree.h"

int main() {
    ParseTree tree = ParseTree("./tree.txt");
    Mapping invasion = Mappings::GetGoodDrums::getInvasionMapping();
    invasion.print();

    return 0;
}