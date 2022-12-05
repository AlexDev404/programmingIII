#include <iostream>
using namespace std;

int main() {
    //    Create variables for the two numbers
    int num1 = 4;
    int num2 = 11;

    // Compare the two numbers. If numberone is smaller
    //  we will output the message "${NumberOne} is the smaller number"
    //  Otherwise we will output "${NumberTwo} is the smaller number"

    if (num1 < num2) {
        cout << num1 << " is the smaller number\n";
    }
    else {
        cout << num2 << " is the smaller number\n";
    }


    // Exit
    return 0;
}
