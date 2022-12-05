// Cursed :/

#include <iostream>
using namespace std;

// Prototype
string repetition(string value, int count);

int main()
{
    // int count = 3;
    // string value = repetition (value, count);

    cout << repetition(" Never gonna give you up", 3) << endl;
    return 0;
}

/**
 * 
 * @brief Repeats a string
 * @param value String to be repeated
 * @param count The amount of times to be repeated
 * @returns Repeated string
 * 
 */
string repetition(string value, int count)
{
    string thing = "";
    for (int i = 1; i <= count; i++)
    {
        thing = thing + value;
    }
    return thing;
}