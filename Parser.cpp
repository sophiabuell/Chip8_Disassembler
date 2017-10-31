#include "Parser.h" 

list<string> parse(string filePath) {
    FILE* romFile = fopen(filePath.c_str(), "r");
    
    if (romFile == NULL)
    {
	printf("Error opening file:  %s\n", filePath.c_str());
	throw std::runtime_error("Could not open file");
    }
    return list<string> ();
};
