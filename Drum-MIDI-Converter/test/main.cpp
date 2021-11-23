#include <cstdio>
#include <iostream>

#include "Node.h"
#include "Tree.h"

int main() {
    std::string input;

    Node kick = Node("kick", {"hit", "atk", "left"}, {"hit"});
    Node snare = Node("snare", {"hit", "flam", "ruff", "sidestick", "off", "rimshot"}, {"hit"});
    Node perc = Node("perc", {"clap", "tambourine", "shaker"}, {"clap"});

    Node hatClosed = Node("closed", {"edge", "tip", "tight_edge", "tight_tip", "pedal_close", "x_closed"}, {"edge"});
    Node hatOpen = Node("open", {"0", "1", "2", "3", "pedal_splash", "x_open", "ching", "seq", "cc", "loose"}, {"0"});
    Node hat = Node("hat", {hatClosed, hatOpen}, {"open"});

    Node tomRimshotRack = Node("rack", {"1", "2", "3"}, {"1"});
    Node tomRimshotFloor = Node("floor", std::vector<std::string>({"1", "2"}), {"1"});
    Node tomRimshot = Node("rimshot", {tomRimshotRack, tomRimshotFloor}, {"rack"});
    Node tomHitRack = Node("rack", {"1", "2", "3"}, {"1"});
    Node tomHitFloor = Node("floor", std::vector<std::string>({"1", "2"}), {"1"});
    Node tomHit = Node("hit", {tomHitRack, tomHitFloor}, {"rack"});
    Node tom = Node("tom", {tomRimshot, tomHit}, {"hit"});

    Node cymbalHitCrash = Node("crash", {"1", "2", "3", "4"}, {"1"});
    Node cymbalHitChina = Node("china", std::vector<std::string>({"1", "2"}), {"1"});

    Tree tree = Tree({kick, snare, perc, hat, tom});

    tree.print();
    system("pause");
}