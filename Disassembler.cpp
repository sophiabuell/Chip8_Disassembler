#include <stdio.h>
#include "Disassembler.h"

using namespace std; 

disassembler::disassembler(string romFile) {
    file = romFile;
    commands = new list<command>();
};

list<command> disassembler::getCommands() {
    commands = new list<command>();
    unsigned char instruction[3];
    instruction[2] = 0;

    while(!feof(file)) {
	instruction[0] = fgetc(file);
	instruction[1] = fgetc(file);
	
    }
    
    return commands; 

};

list<string> disassembler::getOpcodes() {
    return opcodes; 
};

list<command> disassembler::disassemble() {
    return commands;
};

