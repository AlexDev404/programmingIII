#include <iostream>
using namespace std;

void gasMileage();

int main()
{

    gasMileage();
    return 0;
}

/**
 *
 * @brief Something with mileage I guess
 * @returns void
 *
 */
void gasMileage()
{
    /* Get the miles
     * Initialize zero to be save
     */
    double miles = 0;
    double gas = 0;
    while (true)
    {
        cout << "enter Miles driven or -1 to quit: ";
        cin >> miles;

        // Check for negative one
        if (miles == -1)
            break;

        cout << "enter gallons used: ";
        cin >> gas;
        cout << "We have smoked " << miles / gas << " of weed" << endl;
    }
}

// sugoma coc