#include <iostream>
using namespace std;

// Prototypes
void greeting();
// Checks if this function was called with arguments
int sumNumbers();
int sumNumbers1(int num1, int num2);
double getAreaOfSquare(double side);
int getLastDigit(int age);
double getAreaOfRect(double length, double width);

int main()
{
    // A
    greeting();
    // B
    cout << "sumNumbers(): " << sumNumbers() << endl;
    // C
    cout << "getAreaOfSquare(2): " << getAreaOfSquare(2) << endl;
    // D
    cout << "getLastDigit(14): " << getLastDigit(14) << endl;
    // E
    cout << "getAreaOfRect(2, 2): " << getAreaOfRect(2, 2) << endl;
    // F
    cout << "sumNumbers1(2, 2): " << sumNumbers1(2, 2) << endl;
}

// A
/**
 * @brief Prints out a string to the console
 * @return void
 */
void greeting()
{
    cout << "Hello there!" << endl;
}

// B
/**
 * @brief Adds two integers (from user input)
 * @return void
 */
int sumNumbers()
{
    // Otherwise we do this
    int userinput = 0;
    int result = 0;

    for (int i = 0; i < 2; i++, userinput = userinput + result)
    {
        cout << "Enter 2 Integers: ";
        cin >> userinput;
    }
    return result;
}

// C
/**
 * @brief Gets the area of a square
 * @param side Length of a side of square
 * @return Area of square
 */
double getAreaOfSquare(double side)
{
    // Calculate and return area of square
    return side * side;
}

// D
/**
 * @brief Gets last digit of integer
 * @param age Person's age
 * @return
 */
int getLastDigit(int age)
{
    // https://stackoverflow.com/a/3001595/10976415
    return age % 10;
}

// E
/**
 * @brief Gets area of rectangle
 * @param length Rect's length
 * @param width Rect's width
 * @return Area of rectangle
 */
double getAreaOfRect(double length, double width)
{
    // Calcalate and return area of rect
    return length * width;
}

// F
int sumNumbers1(int num1, int num2){
   return num1 + num2;
}
