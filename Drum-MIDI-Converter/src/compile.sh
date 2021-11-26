#!/usr/bin/env bash

CPP_FILES=`find . -name '*.cpp'`
echo "Compiling " $CPP_FILES "..."
g++ $CPP_FILES -o main
echo "Done."