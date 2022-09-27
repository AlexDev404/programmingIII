/*
 * Author: Immanuel Garcia
 * Program Name: changeFromStore
 * Program Purpose: Calculate change from a store
 * Creation Date: 8/17/2022 @ 1030
 */


#include <QCoreApplication>

// Include IOStream to supply the functions cout, cin and to_string
#include <iostream>

// Include iomanip to supply us with the functions
// that allow the setting of precision
#include <iomanip>

// To remove the need to prepend the iostream functions with std::
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set cout to round to 2 decimal places
    cout << fixed;
    cout << setprecision(2);

    // Gets the price
    double price;
    cout << "Enter the price: ";
    cin >> price;

    // Gets the amount paid
    double amountPaid;
    cout << "Enter the amount paid: ";
    cin >> amountPaid;

    // Calculate and return change due to customer
    cout << "Change due: " << (amountPaid - price) << endl;


    return 0;
}
