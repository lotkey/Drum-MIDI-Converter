#include <map>
#include <string>

#include "./src-cpp/mappings/Mapping/ConversionMap.hpp"
#include "./src-cpp/mappings/Mapping/Mapping.hpp"
#include "./src-cpp/mappings/Mapping/Mappings.hpp"
#include "./src-cpp/mappings/Parsing/ParseTree.hpp"

int main() {
    ParseTree parseTree("./src-cpp/mappings/tree/");
    std::map<std::string, Mapping> mappings = Mappings::getAllMappings();
    std::vector<ConversionMap> conversionMaps;

    for (const auto& [i_name, i_map] : mappings) {
        for (const auto& [j_name, j_map] : mappings) {
            conversionMaps.push_back(parseTree.makeConversionMapping(i_map, j_map));
        }
    }

    ConversionMap::saveAll(conversionMaps, "./conversions.lkcmap");
}