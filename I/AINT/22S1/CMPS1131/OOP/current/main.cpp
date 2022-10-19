#include <iostream>
#include "Car/Car.hpp"
using namespace std;

class Car
{
public:
    Car(numWheels, color, plateNumber);
    void Print();

private:
    int numWheels;
    string color;
    string plateNumber;
}

int
main()
{
    return 0;
}