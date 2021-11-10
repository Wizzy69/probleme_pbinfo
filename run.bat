:: Designed for Windows !
@echo off
cd ./pbinfo/%*
g++ *.cpp -o app.exe
app.exe
cd ../../
@echo on