#include <iostream>
#include <string.h>
#include <list>

using namespace std; 

class parser {

public: 
    // A method that parses a Chip8 .rom file into a list of opcodes.  
    // Parameters: the path of the file in String format
    // Returns: The opcodes in the format of a list of strings 
    // Throws: Exception if the file path is incorrect or the file doesn't have the right number of bytes. 
    list<string> parse(string file);
};
