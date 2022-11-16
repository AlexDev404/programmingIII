#include <string>
using namespace std;

class Car
{
public:
    // Prototypes
    Car(string brand, int numWheels, string color, string plateNumber); // Constructor does not need a type
    // gets car brand lol
    void carBrand();
    // gets car color
    void _color();
    // gets number of wheels
    void _numWheels();
    // gets plate number
    void _plateNumber(); 

    // sets the number of wheels, color or platenumber
    void setCar(string brand, int numWheels, string color, string plateNumber);

    void Print();

private:
    int numWheels;
    string brand;
    string color;
    string plateNumber;
};
