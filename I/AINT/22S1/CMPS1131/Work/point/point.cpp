#include "point.h"

Point::Point()
{
    x = 0;
    y = 0;

}

double Point::getX()
{
    return x;
}

double Point::getY()
{
    return y;
}

void Point::setX(double x){
    this->x = x;
}
void Point::setY(double y){
    this->y = y;
}

string Point::Print(){
    string value = "(" + to_string(x) + ", " + to_string(y) + ")";
    return value;
}
