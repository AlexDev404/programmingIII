/*
 * We are ashamed of this :/
 */

#include <iostream>
using namespace std;

int daysInMonth(int month);

int main()
{
    cout << daysInMonth(1);
    return 0;
}

int daysInMonth(int month)
{
    switch (month)
    {
    case 1:
        return 31;
        break;

    case 3:
        return 31;
        break;

    case 5:
        return 31;
        break;

    case 7:
        return 31;
        break;

    case 8:
        return 31;
        break;

    case 10:
        return 31;
        break;

    case 12:
        return 31;
        break;

    default:
        // This is the only part we kinda like
        if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            return 30;
        }
        else
        {
            return 28;
        }
        break;
    }
    return 0;
}