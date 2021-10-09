#!/bin/bash

#Designed for Linux only

cd $1
g++ main.cpp -o main.out
./main.out
cd ..