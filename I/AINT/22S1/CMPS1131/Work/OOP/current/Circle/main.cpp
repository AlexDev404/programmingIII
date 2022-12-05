#include <iostream>
#include "Circle/Circle.cpp"
using namespace std;

int main(){
    Circle circle(4);
    cout << circle.area() << endl;
    cout << circle.circumference() << endl;
    circle.Print();

    return 0;
}