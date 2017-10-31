#include <stdio.h> 
#include <cassert>
#include "Command.h"

using namespace std;

void checkPrint() {
    
}

void checkParsing() {

}

int main(int argc, char* argv[]) {
    cout << "Testing command class..." << endl;
    cout << "Testing parsing of opcode into command..." << endl; 
    checkParsing();
    cout << "Testing printing..." << endl;
    checkPrint();
    cout << "All good!" << endl;
}

