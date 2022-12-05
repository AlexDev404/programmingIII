/*
    @name main.cpp
    @abstract Demonstrates the usage of while loops
    @timestamp 9/5/2022

*/


#include <iostream>
using namespace std;

int main() {
    // P2
    //    int start = 1;
    //    int stop = 10;
    //    string name = "Immanuel Garcia";

    //    while (start <= stop) {
    //        cout << name << endl;
    //        start++;
    //    }

    // P3
    /*
        # Instructions
        - Write a program that asks the user for five numbers
        - The program should print the numbers that the user enters

        ## Example:
        ```shell
            Enter an integer: 14
            You entered 14
            Enter an integer: 22
            You entered 22
        ```
    */

    // Start and end index along with input
    int start = 1;
    int stop = 5;
    int total = 0;
    int userInput;

    while (start <= stop) {
        // Ask for input
        cout << "Enter an integer: ";
        cin >> userInput;
        total = total + userInput;
        // Mock the user (haha)
        cout << "You entered " <<  userInput << "." << endl;
        // Move up
        start++;
    }

    cout << "\nSum of numbers that the user has entered: " << total << endl;
    return 0;
}

