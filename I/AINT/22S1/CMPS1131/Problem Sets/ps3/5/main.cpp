#include <iostream>
using namespace std;

float circleArea(double radius);

int main()
{
    circleArea(4);
    return 0;
}

float circleArea(double radius)
{
    float area = radius * radius * M_PI;
    return area;
}