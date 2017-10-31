#include <stdio.h> 
#include <cassert>
#include "Command.h"

using namespace std;

string validFile = "./roms/test.rom";
string invalidFile = "./roms/invalid.rom";

void checkValidFile() {
    
}

void checkInvalidFile() {

}

int main(int argc, char* argv[]) {
    cout << "Testing parser..." << endl;
    cout << "Testing parsing of invalid file..." << endl; 
    checkInvalidFile();
    cout << "Testing parsing of valid file..." << endl;
    checkValidFile();
    cout << "All good!" << endl;
}

