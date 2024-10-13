#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
     int count;

    // Display each command-line argument.
    cout << "\nCommand-line arguments:\n";
    for( count = 0; count < argc; count++ )
         cout << "  argv[" << count << "]   "
                << argv[count] << "\n";
    return 0;
}