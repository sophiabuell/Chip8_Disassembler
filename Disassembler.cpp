#include <stdio.h>
#include "Disassembler.h"

using namespace std; 

disassembler::disassembler(string romFile) {
    file = romFile;
};

list<command> disassembler::getCommands() {
    return commands; 
};

list<string> disassembler::getOpcodes() {
    return opcodes; 
};

list<command> disassembler::disassemble() {
    return commands;
};

