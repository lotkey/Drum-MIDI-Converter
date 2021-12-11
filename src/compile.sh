#!/bin/bash

STD='-std=c++17'
argc="$#"

if [ $argc -ge 3 ]; then
    echo "Too many arguments."
elif [ $argc -lt 2 ]; then
    echo "Not enough arguments."
else
    DIR=$1
    NAME=$2
    CPP_FILES=`find $DIR -name '*.cpp'`
    g++ $CPP_FILES -o $2 $STD
fi
