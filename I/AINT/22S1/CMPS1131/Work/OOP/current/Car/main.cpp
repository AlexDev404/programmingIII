#include <iostream>
#include "Car\Car.cpp"

using namespace std;

int main()

{
    // Create a class using Car
    // Call the Car::Print utility function to print out the values
    // car(int NumWheels , string color, string plateNumber);

    /*
     * What's left?
     * Getter function to print out the plate number only
     * Getter function to print out the color only
     * Getter function to print out the number of wheels only
     * Setter function to set the number of wheels, color or platenumber
     */
    Car tesla("Tesla", 15, "White", "c2222c");
    // par.PROPERTY
    tesla.Print();
    return 0;
}
