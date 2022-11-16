#include <iostream>

using namespace std;

int main()
{
    // An array
    double values[2] = {12.5, 11.2};
    int* ptr;

    // Pointers
    int size = 4;
    int* x = &size;
    *x = *x * 2;
    size = size + 10;

    cout << x << endl;
    cout << *x << endl;
    cout << &x << endl;
    cout << size << endl;
    cout << &size << endl;

    return 0;
}
