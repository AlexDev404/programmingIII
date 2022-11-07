#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessAge(int guess, int num, int tries);

int main()
{
    int num = false;
    int guess = false;
    int tries = false;
    // Init random generator
    srand(time(0));
    // Set random number
    num = rand() % 100 + 1;
    // Title
    cout << "Guess the age (Try to dox me)\n=================\n\n";
    guessAge(guess, num, tries);
    return 0;
}

void guessAge(int guess, int num, int tries)
{
    while (guess != num)
    {
        // Output a question
        cout << "What is my age? " << endl;
        // Input the answer
        cin >> guess;
        // Increment the variable "tries" by 1
        tries = tries + 1;
        // Check if the guess is less or more than the number
        if (guess > num)
        {
            cout << "Too high.\n\n";
        }
        else if (guess < num)
        {
            cout << "Too low.\n\n";
        }
        else if (guess == num)
        {
            cout << "Correct. You guessed the number in " << tries << " guess(ses).\n";
        }
        else
        {
            cout << "Try again.";
        }
    }
}