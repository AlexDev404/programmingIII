#include <iostream>
#include "Shape.hpp"
using namespace std;

void printBasic(int rows, int cols, char symbol);
void printOutline(int rows, int cols, char symbol, char border);
// CREATE A CLASS CALLED "SHAPE"

int main()
{
    // usage with border
    Shape c(3, 4, '*', '-');
    c.Print();
    // newline to separate the two
    cout << endl;
    // usage without border
    Shape e(3, 4, '!');
    e.Print();
    return 0;
}

void printBasic(int rows, int cols, char symbol)
{
    for (int r = 1; r <= rows; r++) // OUTER LOOP
    {
        for (int c = 1; c <= cols; c++) // INNER LOOP
        {
            cout << symbol << " ";
        }
        cout << endl;
    }
}

void printOutline(int rows, int cols, char symbol, char border)
{
    for (int r = 1; r <= rows; r++) // OUTER LOOP
    {
        for (int c = 1; c <= cols; c++) // INNER LOOP
        {
            if (c == 1 || c == cols)
            {
                cout << border << " ";
            }
            else
            {
                cout << symbol << " ";
            }
        }
        cout << endl;
    }
}