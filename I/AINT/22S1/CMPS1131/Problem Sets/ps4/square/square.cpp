#include <iostream>
using namespace std;

void printSquare(int side, char sym);

int main()
{
    printSquare(5, '*');
    // Thinking of making a rougelike game now
    // because of how this looks
    printSquare(12, '*');
    return 0;
}

void printSquare(int side, char sym)
{
    int rows;
    int cols;
    // Rows
    for (rows = 1; rows <= side; rows++)
    {
        // Columns
        for (cols = 1; cols <= side; cols++)
        {
            // Checks
            if (rows == 1 || cols == 1 || rows == side || cols == side)
            {
                cout << sym << "  "; // Found this to be a nice scaling
            }
            else
            {
                // If there's nothing to
                cout << "   "; // This is also a nice scaling
            }
        }
        // After every row we add a newline
        cout << endl;
    }
}
