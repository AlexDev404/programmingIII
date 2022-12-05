#include <iostream>
using namespace std;
#include "Circle2.hpp"

// start of Circle.cpp

Circle::Circle(double radius)
{
    this->radius = radius;
}

double Circle::area() // returns the area occupied by the circle (πr^2)
{
    return pi * radius * radius;
}

double Circle::circumference() // returns the distance around the circle (2πr)
{
    return 2 * pi * radius;
}

double Circle::getRadius()
{
    return radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

void Circle::Print()
{
    cout << "{Circle:radius"
         << "=" << radius << "}" << endl;
    // returns a string representation of a circle
    // in the form "{Circle:radius=radius}" for example a circle of
    // radius 7.5 would be printed as {Circle:radius=7.5}
}

// end of Circle.cpp