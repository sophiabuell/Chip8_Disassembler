#include <iostream>
#include <list>
#include "Disassembler.h"

using namespace std;

int main(int argc, char* argv[])
{
    string file = argv[1];
    disassembler *chip8Disassembler = new disassembler(file);
    chip8Disassembler->disassemble();
    return 0;
}
