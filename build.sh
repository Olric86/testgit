#!/bin/sh
g++ -c -O2 -o build/model/user.o src/model/user.cpp
g++ -c -O2 -o build/main.o src/main.cpp
g++ -O2 -o dist/testgit build/model/user.o build/main.o