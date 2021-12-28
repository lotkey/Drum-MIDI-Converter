import os

class ConversionMap():
    def loadAllConversionMaps(path:str):
        mappings = list()
        for (dirpath, dirnames, filenames) in os.walk(path):
            for filename in filenames:
                mappings.append(ConversionMap(f'{dirpath}/{filename}'))

        return mappings

    def __init__(self, path:str):
        with open(path, 'r') as infile:
            lines = infile.readlines()

            self.mapFrom = lines[0].strip()
            lines.pop(0)
            self.mapTo = lines[0].strip()
            lines.pop(0)

            self.map = dict()
            for line in lines:
                mapping = line.split()
                self.map[int(mapping[0])] = int(mapping[1])

    def print(self):
        print(f'Conversion from "{self.mapFrom}" to "{self.mapTo}"')

        for key in self.map:
            print(f'{key} => {self.map[key]}')

    def at(self, key:int):
        return self.map[key]

    def contains(self, key:int):
        return key in self.map