#include <stdio.h>
#include <list>
#include "Parser.h"
#include "Command.h"

class disassembler {

    public:
	disassembler(string file);
	list<string> getOpcodes();
	list<command> getCommands();
    private:
	list<command> disassemble();
    	string file;
	list<string> opcodes;
	list<command> commands; 
	command interpertOpcode(char* opcode);

};
