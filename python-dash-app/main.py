from conversionmap import ConversionMap
import os

mappings = ConversionMap.loadAllConversionMaps('./conversions/')

for map in mappings:
    map.print()
    print('')