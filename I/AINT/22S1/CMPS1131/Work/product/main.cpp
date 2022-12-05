#include <iostream>
using namespace std;

int main() {
    /*

        Ask the user for 3 floating-point numbers
        Find the product of the numbers entered

        # Example
        Enter a number: 1
        Enter a number: 1.5
        Enter a number: 2

        The product is 3.5
    */

    int index = 1;
    int limit = 3;
    double product = 1.00;


    while (index <= limit) {
        double input;
        cout << "Enter a number: ";
        cin >> input;
        product = product * input;
        index++;
    }

    cout << "\n\nThe product is " + to_string(product) << endl;

    return 0;
}

