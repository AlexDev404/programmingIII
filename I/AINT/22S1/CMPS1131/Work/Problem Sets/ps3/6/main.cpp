#include <iostream>
using namespace std;

float computeDistance(int x1, int y1, int x2, int y2);

int main()
{
    int x1 = 4;
    int x2 = 5;
    int y1 = 6;
    int y2 = 7;

    computeDistance(x1, y1, x2, y2);
    return 0;
}

float computeDistance(int x1, int y1, int x2, int y2)
{
    float distance = 0;
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return distance;
}