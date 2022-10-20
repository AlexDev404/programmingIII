#include <iostream>
using namespace std;

int sumOfRange(int min, int max);

int main()
{
    cout << sumOfRange(3, 9);
    return 0;
}

int sumOfRange(int min, int max)
{
    int result = 0;
    for (int i = min; i <= max; i++)
    {
        result = result + i;
    }
    return result;
}