#include <iostream>
#include <fstream>

using namespace std;

string GenerateMessage();
void WriteToFile(string text);

int main(int argc, char *argv[])
{
    string message;
    if (argc > 1)
    {

        message = GenerateMessage();
        WriteToFile(message);
    }
    return 0;
}

// #####################################################################
//                 Functions
// #####################################################################

string GenerateMessage()
{
    string messageType;
    string message;
    string dueDate;

    messageType = __argv[1];
    message = __argv[2];
    dueDate = __argv[3];

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