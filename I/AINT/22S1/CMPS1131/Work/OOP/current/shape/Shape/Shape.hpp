#include <string>
using namespace std;
/**
 * Shape class
 * constructor -
 * - Takes in:
 *  1. rows*
 *  2. columns*
 *  3. symbol*
 *  3. border
 * - Description of what the constructor does (don't write code. Explain in plain english):
 *  1.          <-- Fill this out too -------- nvm thats just too hard X_X
 *  2. this->rows = rows;
 *
 * members -
 *  - functions
 *      1. Print()
 * public variables
 *
 *
 * private variables
 *  - int rows;
 *  - int columns;
 *  - char symbol;
 *  - char border;
 *
 */

class Shape
{
public:
    //    Shape();
    Shape(int rows, int columns, char symbol, char border = ' ');

    //    methods
    void Print();

private:
    int rows;
    int columns;
    char symbol;
    char border;
};
