import os

class ConversionMap():
    mappingNames = set()

    def loadAllConversionMaps(path:str):
        mappings = dict()
        if not os.path.isdir(path):
            with open(path, 'r') as infile:
                mapFrom = infile.readline().strip()
                mapTo = infile.readline().strip()
                mappings[mapFrom.upper()][mapTo.upper()] = ConversionMap(mapFrom=mapFrom, mapTo=mapTo)
                while (True):
                    fromInt = ord(infile.read())
                    toInt = ord(infile.read())
                    if (fromInt == 128 and toInt == 128):
                        infile.read()
                        break
                    mappings[mapFrom.upper()][mapTo.upper()].insert((fromInt, toInt))                
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
        if len(ConversionMap.mappingNames) != 0:
            return ConversionMap.mappingNames
        else:
            if os.path.isdir(path):
                return os.listdir(path)
            else:
                names = set()
                with open(path, 'r') as infile:
                    lines = infile.readlines()
                lines = [line.strip() for line in lines]
                linesSplit = [line.split() for line in lines]
                isDigits = [[j.isdecimal() or j == '//' for j in i] for i in linesSplit]
                isDigits = [all(i) for i in isDigits]

                for i, line in enumerate(lines):
                    if not isDigits[i]:
                        names.add(line)
                ConversionMap.mappingNames = names
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

                fromInt = ord(infile.read())
                toInt = ord(infile.read())
                while fromInt != toInt != 128:
                    self.map[fromInt] = toInt
                    fromInt = ord(infile.read())
                    toInt = ord(infile.read())

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