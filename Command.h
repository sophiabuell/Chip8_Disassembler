#include <iostream>
#include <stdio.h>
#ifndef COMMAND_H
#define COMMAND_H

using namespace std;

class command {

    public: 
	command(string newOpcode);
	void print();
    private: 
	string opcode;

};
#endif	
