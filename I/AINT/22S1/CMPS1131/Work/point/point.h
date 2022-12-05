#ifndef POINT_H
#define POINT_H
#include <string>
using namespace std;

class Point
{
public:
    Point();
    // gets the X coordinate
    double getX();
    // gets the Y coordinate
    double getY();
    // set or change the X coordinate
    void setX(double x);
    // set or change the Y coordinate
    void setY(double y);
    string Print();
private:
    double x; // X
    double y; // Y
};

#endif // POINT_H
