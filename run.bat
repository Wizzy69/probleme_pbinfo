:: Designed for Windows !
@echo off
cd %*
g++ *.cpp -o app.exe
app.exe
cd ../../../
@echo on