#include <iostream>
using namespace std;

int main() {
    //   Write a program that maskes the user for a double saves it in a variable and then
    //   checks if it is less than -2.5. If it is the print a message and if it is not then
    //   print a different message.


    // Declare two variables: a limit and a number to test
    double number;
    double limit = -2.5;

    // Prompt user for input and save this to a variable
    cout << "Enter double: ";
    cin >> number;

    // Check if the number is less than limit
    if (number < limit) {
        // Display a message confirming this, exit
        cout << "Number is less than " << limit << endl;
    }
    else {
        // Display a message confirming this, exit
        cout << "Number is not less than " << limit << endl;
    }

    // Exit
    return 0;
}
