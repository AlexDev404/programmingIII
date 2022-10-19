#include <string>
using namespace std;

class Car
{
public:
    // Prototypes
    Car(int numWheels, string color, string plateNumber); // Constructor does not need a type
    void Print();

private:
    int numWheels;
    string color;
    string plateNumber;
};
