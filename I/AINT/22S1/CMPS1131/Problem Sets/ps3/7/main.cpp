#include <iostream>
using namespace std;

int main(){
    return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

// Prototype
int sumOfDigits(int number);

int main()
{
    // Very simple - We just call the function
    cout << sumOfDigits(-79);
    return 0;
}

/**
 * @brief Takes in an integer and returns the number of all the digits
 * @param number Integer. If negative, gets converted into a positive
 * @return Sum of all digits in the number
 * @note Yes, this is sumOfDigits all over again
 *
 */
int digitCount(int number)
{
    // If number less than zero, convert into a positive
    if (number < 0)
    {
        number = number * -1;
    }
    // Turn the integer into text
    string numberString = to_string(number);
    // Initialize the result

    // Return the result
    return numberString.length();
}
