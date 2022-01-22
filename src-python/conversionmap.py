import os

class ConversionMap():
    mappingNames = set()

    def loadAllConversionMaps(path:str):
        mappings = dict()
        if not os.path.isdir(path):
            with open(path, 'r') as infile:
                mapFrom = infile.readline().strip()
                mapTo = infile.readline().strip()
                while mapFrom and mapTo:
                    ConversionMap.mappingNames.add(mapFrom)
                    if not mapFrom.upper() in mappings.keys():
                        mappings[mapFrom.upper()] = dict()
                    mappings[mapFrom.upper()][mapTo.upper()] = ConversionMap(mapFrom=mapFrom, mapTo=mapTo)
                    while (True):
                        fromChar = infile.read(1)
                        toChar = infile.read(1)
                        if fromChar and toChar:
                            fromInt = ord(fromChar)
                            toInt = ord(toChar)
                            if (fromInt > 127 and toInt > 127):
                                infile.read(1)
                                break
                        else:
                            break
                        mappings[mapFrom.upper()][mapTo.upper()].insert((fromInt, toInt)) 
                    mapFrom = infile.readline().strip()
                    mapTo = infile.readline().strip()               
        else:
            for (dirpath, _, filenames) in os.walk(path):        
                for filename in filenames:
                    map = ConversionMap(f'{dirpath}/{filename}')
                    map1 = map.mapFrom.upper()
                    map2 = map.mapTo.upper()
                    if map1 not in mappings:
                        mappings[map1] = dict()
                    mappings[map1][map2] = map
        return mappings

    def getMappingNames(path:str):
        return ConversionMap.mappingNames


    def __init__(self, path:str=None, mapFrom:str=None, mapTo:str=None):
        self.map = dict()

        if path is None:
            assert mapFrom is not None or mapTo is not None
            self.mapFrom = mapFrom
            self.mapTo = mapTo
        else:
            with open(path, 'r') as infile:
                self.mapFrom = infile.readline().strip()
                self.mapTo = infile.readline().strip()

                fromInt = ord(infile.read(1))
                toInt = ord(infile.read(1))
                while fromInt != toInt != 128:
                    self.map[fromInt] = toInt
                    fromInt = ord(infile.read(1))
                    toInt = ord(infile.read(1))

    def print(self):
        print(f'Conversion from "{self.mapFrom}" to "{self.mapTo}"')

        for key in self.map:
            print(f'{key} => {self.map[key]}')

    def insert(self, pair:tuple):
        self.map[pair[0]] = pair[1]

    def at(self, key:int):
        return self.map[key]

    def contains(self, key:int):
        return key in self.map