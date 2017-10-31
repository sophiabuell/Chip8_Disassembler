#include "Command.h"

command::command(unsigned char* newOpcode) {
    opcode = newOpcode;
    unsigned int word = opcode[0] * 0x100 + opcode[1];
    unsigned int prefix = word & 0xf000;

    bool retCode = false;

    printf("word = 0x%04x, prefix=0x%04x\n", word, prefix);
};

void command::print() {
};

COMMAND command::getCommand() {
    return command::commandType; 
}

