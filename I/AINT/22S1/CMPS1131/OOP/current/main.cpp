#include <iostream>
#include "Car/Car.hpp"
#include "Car/Car__spec.hpp"

using namespace std;

int main()

{
    // Create a class using Car
    // Call the Car::Print utility function to print out the values
    // car(int NumWheels , string color, string plateNumber);
    Car par(15, "White", "c2222c");
    // par.PROPERTY
    par.Print();
    return 0;
}
