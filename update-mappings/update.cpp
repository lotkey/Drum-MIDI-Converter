#include <iostream>
#include <set>
#include <string>
#include <string.h>
#include <vector>

#include "../src-cpp/mappings/Helpers/stringpp.hpp"
#include "../src-cpp/mappings/Mapping/ConversionMap.hpp"
#include "../src-cpp/mappings/Mapping/Mapping.hpp"
#include "../src-cpp/mappings/Mapping/Mappings.hpp"
#include "../src-cpp/mappings/SampleTree/SampleTree.hpp"

void printHelp(const std::string&);
void updateKeys(const std::string&, const std::string&);
void updateCmaps(const std::string&, const std::string&);
void updateAll(const std::string&, const std::string&, const std::string&);

int main(int argc, char** argv) {

    const std::string treePath = "../src-cpp/mappings/tree/";
    const std::string keysPath = "../src-cpp/mappings/Parsing/Keys.hpp";
    const std::string cmapsPath = "../src-python/conversion.lkcmaps";

    const std::set<std::string> possibleArgs = { "-a", "--keys", "--cmaps", "-h", "--help", "help" };
    const std::vector<std::string> helpArgs = { "-h", "--help", "help" };
    const std::string possibleArgumentDialog = "Possible arguments are:\n\
  \"--keys\" to update src-cpp/Mapping/Keys.hpp with src-cpp/tree/\n\
  \"--cmaps\" to update src-python/conversions.lkcmaps with current drum mappings\n\
  \"-a\" to update all of the above, in the order printed\n\
  \"-h\", \"--help\", or \"help\" to print out the help page";

    if (argc == 1) {
        std::cerr << "No arguments provided. " << possibleArgumentDialog << std::endl;
        exit(EXIT_FAILURE);
    } else if (argc > possibleArgs.size() + 1) {
        std::cerr << "Too many arguments provided. " << possibleArgumentDialog << std::endl;
        exit(EXIT_FAILURE);
    }

    for (unsigned int i = 1; i < argc; i++) {
        if (possibleArgs.find(argv[i]) == possibleArgs.end()) {
            std::cerr << "Invalid argument \"" << argv[i] << "\". " << possibleArgumentDialog << std::endl;
            exit(EXIT_FAILURE);
        }

        if (stringpp::strcmp(argv[i], "-a") && argc > 2) {
            std::cerr << "Using \"-a\" with other arguments is invalid." << std::endl;
            exit(EXIT_FAILURE);
        }

        if (stringpp::strcmp(argv[i], helpArgs) && argc > 2) {
            std::cerr << "Using \"help\" with other arguments is invalid." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    for (unsigned int i = 1; i < argc; i++) {
        if (stringpp::strcmp(argv[i], "--keys"))
            updateKeys(treePath, keysPath);
        else if (stringpp::strcmp(argv[i], "--cmaps"))
            updateCmaps(treePath, cmapsPath);
        else if (stringpp::strcmp(argv[i], "-a"))
            updateAll(treePath, keysPath, cmapsPath);
        else if (stringpp::strcmp(argv[i], helpArgs))
            printHelp(possibleArgumentDialog);
    }

    exit(EXIT_SUCCESS);
}

void printHelp(const std::string& dialog) {
    std::cout << dialog << std::endl;
}

void updateKeys(const std::string& treePath, const std::string& keysPath) {
    SampleTree parseTree(treePath);
    parseTree.exportAsNamespace(keysPath);
}

void updateCmaps(const std::string& treePath, const std::string& cmapsPath) {
    SampleTree parseTree(treePath);
    std::map<std::string, Mapping> mappings = Mappings::getAllMappings();
    std::vector<ConversionMap> conversionMaps;

    for (const auto& [i_name, i_map] : mappings) {
        for (const auto& [j_name, j_map] : mappings) {
            conversionMaps.push_back(parseTree.makeConversionMapping(i_map, j_map));
        }
    }

    ConversionMap::saveAll(conversionMaps, cmapsPath);
}

void updateAll(const std::string& treePath, const std::string& keysPath, const std::string& cmapsPath) {
    updateKeys(treePath, keysPath);
    updateCmaps(treePath, cmapsPath);
}