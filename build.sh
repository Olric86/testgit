#!/bin/sh
g++ -c -O2 -o build/main.o src/main.cpp
g++ -O2 -o dist/testgit build/main.o