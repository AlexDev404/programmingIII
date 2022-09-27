#include <iostream>

using namespace std;

int main() {
    // Demonstrate the continue statement
    while (true) {
        // Ask for an integer
        int value;
        cout << "Enter an integer: ";
        cin >> value;

        // Break out of the loop if the value is -1
        if (value == -1) {
            break;
        }

        // Print the value if the value is an even number
        if (value % 2 != false) {
            // Restart loop
            continue;
        }

        // Otherwise we print out the value
        cout << value << endl;

    }

    return 0;
}
