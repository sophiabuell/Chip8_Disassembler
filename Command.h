#include <iostream>
#include <stdio.h>
#ifndef COMMAND_H
#define COMMAND_H

using namespace std;

enum COMMAND {
    EXE_MACH, 
    CLEAR, 
    RETURN, 
    JUMP, 
    EXE_SUB, 
    SKIP_NE, 
    SKIP_EQ, 
    PUSH, 
    ADD, 
    PUSH_REG, 
    SET_OR, 
    SET_AND, 
    SET_XOR, 
    ADD_CARRY, 
    SUB_BORROW, 
    SHIFT_RIGHT, 
    MINUS_MINUS, 
    SHIFT_LEFT, 
    SKIP_EQ_EQ, 
    STORE, 
    JUMP_PLUSREG, 
    SET_RAND, 
    DRAW, 
    SKIP_PRESS, 
    SKIP_NPRESS, 
    STORE_TIMER, 
    WAIT_PRESS, 
    SET_TIMER, 
    SET_SOUND, 
    ADD_REG, 
    SET_HEX, 
    STORE_BIN, 
    STORE_VAL, 
    FILL
};

class command {
    unsigned char* opcode;

    public:
	COMMAND commandType;  
	command(unsigned char* newOpcode);
	COMMAND getCommand();
	void print();
};
#endif	
