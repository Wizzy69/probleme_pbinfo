@echo off
cd %1
g++ main.cpp -o main.exe
main.exe
cd ../
@echo on