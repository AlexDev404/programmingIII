/*
 * Write a function named factorCount that accepts an integer (assumed to be positive) as
 * its parameter and returns a count of its positive factors. For example, the eight factors of 24
 * are 1, 2, 3, 4, 6, 8, 12, and 24, so the call of factorCount(24) should return 8.
 *
 */

#include <iostream>
using namespace std;

// Prototype
int factorCount(int num);

int main()
{
    // Variable to substitute in function
    int num1 = 24;
    // Call the function
    cout << factorCount(num1);
    return 0;
}

/**
 * @brief Returns the number of factors in a number
 * @returns integer
 */
int factorCount(int num)
{
    // Declare the counter which will be returned
    int counter = 0;

    // Start the loop
    // https://stackoverflow.com/a/58730468/10976415
    for (int i = 1; i < num + 1; i++)
    {
        if (num % i == 0)
        {
            counter++; // counter = counter + 1
            // cout << i;
        }
        // We do nothing here
    }
    // After, return the counter
    return counter;
}