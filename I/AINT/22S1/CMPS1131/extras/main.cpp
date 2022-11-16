#include <iostream>
using namespace std;

int main()
{
    // Determine ternary operators
    double value = false;
    cout << "Enter a value: ";
    cin >> value;

    // cout << ((value <= 0) ? "Negative.\n" : "Positive.\n");
    // (value <= 0) ? cout << "Negative.\n" : cout << "Positive.\n";

    if(value == 0.0){
        cout << "Invalid entry." << endl;
    } else{
        if(value > 0){
            cout << "Positive Entry" << endl;
        } else{
            cout << "Negative Entry" << endl;
        }
    }
    return 0;
}
