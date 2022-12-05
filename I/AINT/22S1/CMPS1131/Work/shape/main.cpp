#include <iostream>
#include "shape.cpp"

using namespace std;

int main()
{
    Shape x;
    x.printBasic(5, 7, '$');
    cout <<  endl;
    Shape y;
    y.printOutline(5, 7, '$', '*');
    cout <<  endl;
    y.printRect(7, 'e');
    cout <<  endl;
    y.printTriangle(8, u'\u2591', true);
    y.printTriangle(8, 'e', false);
    cout <<  endl;
//    y.printTriangleInverse(8, 'e');
//    cout <<  endl;
    return 0;
}
