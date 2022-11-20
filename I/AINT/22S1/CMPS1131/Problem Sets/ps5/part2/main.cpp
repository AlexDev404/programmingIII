#include <iostream>
using namespace std;

// prototyping
void convertFromSeconds(int s);

int main()
{
    convertFromSeconds(86400);
    convertFromSeconds(100000);
    convertFromSeconds(610);
    convertFromSeconds(8000);
    return 0;
}

// 610 second(s) is 0 day(s) 0 hour(s) 10 minute(s) 10 second(s).

void convertFromSeconds(int s)
{
    int d = s / 60 / 60 / 24;
    int h = (s / 60 / 60) % 24; // seconds/60/60 gives hours in one day accurately
    int m = (s / 60) % 60;  // seconds/60 gives minutes in one day accurately
    int _s = (s) % 60;

    cout << s << " second(s) is " << d << " day(s) " << h << " hour(s) " << m << " minute(s) " << _s << " second(s)." << endl;
}