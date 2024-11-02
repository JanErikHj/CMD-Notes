#include <iostream>
#include <fstream>

using namespace std;

// ######################################################################
//                      Function declarations
// ######################################################################
string GenerateMessage(char *args[]);
void WriteToFile(string text);

// ######################################################################
//                      MAIN FUNCTION
// ######################################################################

int main(int argc, char *argv[])
{
    string message;
    if (argc > 1)
    {

        message = GenerateMessage(argv);
        WriteToFile(message);
    }
    return 0;
}

// #####################################################################
//                 Functions
// #####################################################################

string GenerateMessage(char *args[])
{
    string messageType;
    string message;
    string dueDate;

    messageType = args[1];
    message = args[2];
    dueDate = args[3];

    return messageType + ": " + message + " Due: " + dueDate;
}

void WriteToFile(string text)
{
    ofstream file1;
    file1.open("noteit.txt", ios::app);
    file1.seekp(0, ios::end);

    file1 << text << endl;
    file1.close();
}