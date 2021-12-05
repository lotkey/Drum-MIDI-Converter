#!/usr/bin/env bash

CPP_FILES=`find . -name '*.cpp'`
echo "Compiling " $CPP_FILES "..."
g++ $CPP_FILES -o main -std=c++17
echo "Done."
