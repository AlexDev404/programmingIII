#include <iostream>
#include <string>
#include "Shape.hpp"
using namespace std;
// Shape(int rows, int columns, char symbol, char border = ' ');
// Shape
Shape::Shape(int rows, int columns, char symbol, char border)
{

    this->rows = rows;
    this->columns = columns;
    this->symbol = symbol;
    // If we don't specify the border we set the
    // border to the symbol
    if (border == ' ')
        border = symbol;
    this->border = border;
}
   // lenght size of roof lenght 12 widght 4  if 3 sheets if 

// Print
void Shape::Print()
{
    for (int r = 1; r <= rows; r++)
    {
        for (int c = 1; c <= columns; c++)
        {
            if (c == 1 || c == columns)
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
