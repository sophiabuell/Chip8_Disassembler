#!/usr/bin/env bash

echo "Compiling tests for command class..." 
g++ -o testCommand testCommand.cpp Command.cpp
echo "Compiling tests for parser class..."
g++ -o testParser testParser.cpp Parser.cpp
echo "Compilation successful" 

echo "Running tests..."  
./testCommand
./testParser

