#include <iostream>
using namespace std;

int main() {
    // Finds the product of 3 numbers
    double total = 1;
    int stop = 3;


    for (int i = 1; i <= stop; i++) {
        double value;
        cout << "Enter a number: ";
        cin >> value;
        total *= value;

    }


    // Print the product of the values that the user entered
    cout << "The product of the numbers you entered is: " << total << endl;
    return 0;
}
