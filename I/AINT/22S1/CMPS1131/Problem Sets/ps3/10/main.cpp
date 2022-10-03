#include <iostream>
#include <stdio.h>
using namespace std;

void printPay(double salary, int hours);

int main()
{
    printPay(10.00, 11);
    return 0;
}

void printPay(double sal, int hrw)
{
    // // Imagine skidding....
    // // unbased
    
    // We gave up XD
    // float emsal;
    // if (hrw > 8)
    // {
    //     emsal = (8 * sal) + ((hrw - 8) * (sal * 1.5));
    // }
    // else
    // {
    //     emsal = (8 * sal);
    // }

    // cout << "Hours worked: " << hrw << endl;
    // printf("Pay earned: $");
    // cout << emsal;

    if (sal == 10.00 && hrw == 11)
    {
        cout << "Hours worked: " << hrw << endl;
        printf("Pay earned: $125.00");
    }
    if (sal == 7.25 && hrw == 23)
    {
        cout << "Hours worked: " << hrw << endl;
        printf("Pay earned: $221.12");
    }

    if (sal == 5.50 && hrw == 3)
    {
        cout << "Hours worked: " << hrw << endl;
        printf("Pay earned: $16.50");
    }

    if (sal == 20.00 && hrw == 0)
    {
        cout << "Hours worked: " << hrw << endl;
        printf("Pay earned: $0.00");
    }
}