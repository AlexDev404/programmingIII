#include <iostream>
using namespace std;

int main() {
    //   Write a program that maskes the user for a double saves it in a variable and then
    //   checks if it is less than -2.5. If it is the print a message and if it is not then
    //   print a different message.


    // Declare two variables: a limit and a number to test
    int number;

    // Prompt user for input and save this to a variable
    cout << "Enter integer: ";
    cin >> number;

    // Check if the number is zero
    if (!number) {
        // Display a message confirming this, exit
        cout << "The number you entered was zero" << endl;
    }
    else if (number < 0) {
        // Display a message confirming this, exit
        cout << "The number you entered was negative" << endl;
    }
    else if (number > 0) {
        // Display a message confirming this, exit
        cout << "The number you entered was positive" << endl;
    }
    else {
        // Display a message confirming this, exit
        cout << "The input was not a number" << endl;
    }

    // Exit
    return 0;
}
