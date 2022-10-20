#include <iostream>
using namespace std;

void gasMileage();

int main()
{
    gasMileage();
    return 0;
}

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
