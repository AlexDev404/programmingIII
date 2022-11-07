<<<<<<< HEAD
=======
/** JOURNAL-000 - Yes, we're writing a journal now
 * We are in: October 29, 2022 @ 0125 MST (NO-DST)
 * 
 * Coding solo because Alex has just kicked me out of the programming group
 * I really hate what he did to Alfred because he has been very manipulative towards him
 * He has tried to do the same with me from the first time we met but I instead rejected it
 * One of the reasons he hates me, quite honestly.
 * 
 * It's really hard to code or even focus because of all the crap that has been happenening 
 * with him
 * 
 * Alfred is my friend though, and I just cannot lay back and watch this happen to him
 * I will do everything I can to set him free
 * 
 * __"There is an air of mystery currently present..."__
 */
>>>>>>> 94243362c509e7aef2faf0c15123185878f2ce3b
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
