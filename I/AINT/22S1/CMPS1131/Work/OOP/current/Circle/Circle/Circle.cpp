#include "Circle.hpp"
// start of circle.cpp
// logic
#include <iostream>
using namespace std;

Circle::Circle(double radius){
   this->radius = radius;
}

double Circle::area(){
   return (pi*(radius*radius));
}

double Circle::circumference(){
   return (2*pi*radius);
}

double Circle::getRadius(){
   return (radius);
}

void Circle::setRadius(double radius){
   this->radius = radius;
}

void Circle::Print(){
   cout << "{Circle:radius=" << radius << "}";
}
// end of circle.cpp