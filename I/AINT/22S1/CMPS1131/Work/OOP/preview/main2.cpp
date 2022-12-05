#include <iostream>
using namespace std;

class book
{
public:
    string paperSize;
    string title;
    string color;
    int pagenumber;
};

class Dog
{
public: // FYI - Everything's correct except you're missing something (3/3)
    string dog1;
    string dog2;
    string dog3;
    Dog(string dog1, string dog2, string dog3)
    {
        // Hint: "this"
        this->dog1 = dog1;
        this->dog2 = dog2;
        this->dog3 = dog3;

        // In the main function, create an object using this class
    }
};

int main()
{
    // class objName
    // create an object from the class book with the name book9
    book book9;
    // Set the property paperSize from book9 to 80
    book9.paperSize = "80";
    // print the property paperSize to the console
    cout << book9.paperSize << endl;
    // Ask the user to input the title for the book and set the property of book9 to that value
    cout << "Enter the title: ";
    cin >> book9.title;
    // Print out the title of book9
    cout << book9.title << endl;

    // Create a new object with the name book10 and set the
    // paperSize and title to the value of book9 without manually assigning it
    // and NOT through user input
    book book10;

    book10.paperSize = book9.paperSize;
    book10.title = book9.title;

    // output the two values in one line ( make sure to create a newline after the output)
    cout << book10.paperSize << " " << book10.title << endl;

    // Create a new class of "Dog" with a constructor to set the values
    // Use the constructor you created
    Dog dog1("Mishell", "Britney", "Ana");

    // Make a sentence with these names and output to the console
    // NOTE: Accessing objects created by classes: object.property
    cout << dog1.dog1 << " eat " << dog1.dog2 << " so then " << dog1.dog3 << " eat " << dog1.dog1 << endl;
    return 0;
}
