/*
 * main.cpp - Demonstrates the usage of strings and variables
 * @author Immanuel Garcia
 *
 * # INSTRUCTIONS
 *
 * 1. Create a variable of type "double"
 * 2. Store the value of PI in it.
 * 3. Print a sentence using the variable
*/


// IOStream for the print functionality
#include <iostream>

// Math for the value of PI
#include <math.h>

#include <string>

// We're lazy people
using namespace std;


int main()
{
    // We print out a string
    cout << "Today is Wednesday." << endl;

    // We store the number 18 in the variable "age"
    int age = 18;

    // We use this variable in a sentence
    cout << "I am " << age << " years old." << endl;

    // We print out a string to demonstrate why
    // variables are not enclosed in quotes
    cout << "I am age." << endl;

    // We store the _exact_ value of PI in the variable "x"
    double x = M_PI;

    // We use this value in a sentence
    cout << "The value of PI is: " << x << endl;

    // Store length of the house in the double "length"
    double length;

    // Prompt the user to enter the length of the house
    cout << "Please enter the length of the house: ";
    cin >> length;

    // Output the length
    cout << "LENGTH: " << length << endl;

    // Store the number of students in the integer "students"
    int students;

    // Prompt the user to enter the number of students
    cout << "Please enter the number of students: ";
    cin >> students;

    // Output the number of students
    cout << "STUDENTS: " << students << endl;


    // We end off the program
    return 0;
}
