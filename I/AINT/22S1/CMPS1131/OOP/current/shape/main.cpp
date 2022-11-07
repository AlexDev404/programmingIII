#include <iostream>
#include "Shape/Shape.cpp"
using namespace std;

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
