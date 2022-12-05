// The _"other"_ kid on the block


// Write a function named daysInMonth that accepts a month
//  (an integer between 1 and 12) as a parameter and returns the number of days in that month.
// For example, the call of daysInMonth(9) returns 30 because September has 30 days.
// You may assume that the month value passed is between 1 and 12 inclusive.
// Ignore leap years; assume that February always has 28 days.

// Month	1 Jan	2 Feb	3 Mar	4 Apr	5 May	6 Jun	7 Jul	8 Aug	9 Sep	10 Oct	11 Nov	12 Dec
// Days	31	      28	31	     30	      31	30	      31	31	      30	   31	  30	31
#include <iostream>
using namespace std;

int daysInMonth(int month);

int main()
{
    int month = 9;
    int days = 0;
    days = daysInMonth(month);
    daysInMonth(month);
    cout << days << endl;
    return 0;
}
int daysInMonth(int month)
{
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
       return 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else if (month == 2)
    {
        return 28;
    }
    else
    {
        // Failed
        return -1;
    }
}