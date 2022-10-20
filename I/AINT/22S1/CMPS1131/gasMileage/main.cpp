#include <iostream>
using namespace std;

void gasMileage();

int main()
{
<<<<<<< HEAD
=======

>>>>>>> 30a54f781f9d86b946d56a04f29800a22ca1383b
    gasMileage();
    return 0;
}

<<<<<<< HEAD
void gasMileage () {

   //enter code here

   // User input or "miles driven". We set this to zero.
   int userInput = 0;
   // Gallons used (Also set to zero)
   int gallons = 0;


   // Run forever
   while(true){
      // Ask for miles driven
      cout << "Enter miles driven (-1 to quit): ";
      cin >> userInput;

      // Check if the userInput is equal to -1, if so we kill the loop
      if(userInput == -1) break;

      cout << "Enter gallons used: ";
      cin >> gallons;

      // Both are of the same type, so this should work.
      cout << "MPG this trip: " << userInput/gallons << "\n\n";
   }

}
=======
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
>>>>>>> 30a54f781f9d86b946d56a04f29800a22ca1383b
