// Write a function named isMultiple that accepts two non-negative int parameters a and b,
// and returns true if a is a multiple of b, and false otherwise.

// For example, the call of isMultiple(15, 5) would return true because 15 = 5 * 3.
// You may assume that a and b are non-negative integers and that b is not 0.

#include <iostream>
using namespace std;

bool isMultiple(int one, int two);
int main()
{
    int one = 15;
    int two = 5;

    cout << isMultiple << endl;
    return 0;
}


bool isMultiple(int one, int two)
{
    if (one % two == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
