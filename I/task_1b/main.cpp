#include <iostream>
using namespace std;

void greeting();

int main()
{
    greeting();
}

// Av+ F
/**
 * @brief Returns a string
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
int sumNumbers(int num1, int num2)
{
    if(num1 && num2){
        return num1 + num2;
    }


    int userinput = 0;
    int result = 0;
    for (int i = 0; i < 2; i++ && userinput = userinput + result;)
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
 * @return Area of dquare
 */
double getAreaOfSquare(double side){
    // Calculate and output side of square
    return sideOfSquare
}


// D
/**
 * @brief Gets last digit of integer
 * @param age Person's age
 * @return 
 */
int getLastDigit(int age){
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
double getAreaOfRect(double length, double width){

}
