@echo off
setlocal

REM Run the Python script from the current directory
python !!compile_full_109v301.py

REM Switch to the patch switcher's directory and run it
pushd "C:\Program Files (x86)\BFME2 Ecth's Patch Switcher\data"
BFME2Switcher.exe -switch -latest
popd

REM Switch to the game directory and run it
pushd "C:\Program Files (x86)\Electronic Arts\The Battle for Middle-earth (tm) II"
lotrbfme2.exe
popd
