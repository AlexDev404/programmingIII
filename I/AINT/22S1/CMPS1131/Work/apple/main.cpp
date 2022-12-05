#include <iostream>
using namespace std;

int main() {
    //    // Print 1 to 5
    //    for (int count = 0; count < 5; count++) {
    //        cout << count << endl;
    //    }
    double total = 0;
    int stop = 5;
    for (int i = 1; i <= stop; i++) {
        double value;
        cout << "Enter a number: ";
        cin >> value;
        total += value;

    }
    // Print the sum of the values that the user entered
    cout << "The sum of the numbers you entered is: " << total << endl;

    return 0;
}
