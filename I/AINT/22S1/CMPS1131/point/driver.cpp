
#include <iostream>
#include "point.h"

using namespace std;


int main()
{
    Point p1;
    cout << p1.Print() << endl;
    p1.setX(4.5);
    p1.setY(-5.8);
    cout << p1.Print() << endl;
    return 0;

}
