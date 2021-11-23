#include "Node.h"
#include "Tree.h"

int main() {
    Node kick = Node("kick", {"hit", "atk", "left"}, {"hit"});
    Node snare = Node("snare", {"sidestick", "rimshot", "hit", "flam"}, {"hit"});
    Tree tree = Tree({kick, snare});
    tree.print();
}