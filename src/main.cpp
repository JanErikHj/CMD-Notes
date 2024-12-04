#include <iostream>
#include <fstream>
#include <string>

// ######################################################################
//                      Function declarations
// ######################################################################
void parseArguments();
void displayData();
void writeToFile(std::string text);


// ######################################################################
//                      MAIN FUNCTION
// ######################################################################

int main(int argc, char *argv[])
{
    parseArguments();
    

    return 0;
}

// #####################################################################
//                 Functions
// #####################################################################

void parseArguments(char *argv[])
{
}

void writeToFile(std::string text)
{
    std::ofstream file1;
    file1.open("noteit.txt", std::ios::app);
    file1.seekp(0, std::ios::end);

    file1 << text << std::endl;
    file1.close();
}