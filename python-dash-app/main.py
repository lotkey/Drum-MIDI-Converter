from mapping import ConversionMap
import os

mappings = ConversionMap.loadAllConversionMaps('./conversions/')

for map in mappings:
    map.print()
    print('')