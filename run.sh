#!/bin/bash

cd $1
g++ main.cpp -o main.out
./main.out
cd ..