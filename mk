#!/bin/bash

mkdir $1
cd $1
echo "#include <iostream>" >> main.cpp
echo "" >> main.cpp
echo "using namespace std;" >> main.cpp
echo "" >> main.cpp
echo "int main()" >> main.cpp
echo "{" >> main.cpp
echo "    " >> main.cpp
echo "}" >> main.cpp
cd ..
