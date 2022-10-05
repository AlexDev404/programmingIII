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

// Jesus take the wheeeeel..lol

/**
 * @brief Takes in an integer and returns the sum of all the digits
 * @param number Integer. If negative, gets converted into a positive
 * @return Sum of all digits in the number
 *
 */
int sumOfDigits(int number)
{
    // If number less than zero, convert into a positive
    if (number < 0)
    {
        number = number * -1;
    }
    // Turn the integer into text
    string numberString = to_string(number);
    // Initialize the result
    int result = 0;

    // Loop through all of the characters in the text
    for (int i = 0; i < numberString.length(); i++)
    {
        // If we are at the start of the string
        if (i == 0)
        {
            // We grab the first character
            int j = stoi(numberString.substr(0, 1));
            // [DEBUG] Output to console
            // cout << j << endl;
            // Add to result
            result = result + j;
        }
        else
        {
            // If we are NOT at the start of the string we get the current character
            string str_ = numberString.substr(i, i);

            // [PATCH] Check for extra crap at the end of the string
            if (str_.length() > 1)
            {
                // We get the first character and discard the crap at the end
                str_ = str_[0];
            }
            // We convert the character to an integer
            int j = stoi(str_);

            // [DEBUG] Output to console
            // cout << j << endl;
            // Add to result
            result = result + j;
        }
        // We do this till we reach the end of the number
    }

    // Return the result
    return result;
}
