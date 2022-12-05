#include <iostream>
#include <stdio.h>
using namespace std;

int sumOfDigits(int num);
int main()
{
    cout << sumOfDigits(38015);

    return 0;
}
int sumOfDigits(int num)
{
    int count, sum = 0;
    while (num > 0 || num < 0)
    {
        num = abs(num);
        count = num % 10;
        sum = sum + count;
        num = num / 10;
    }
    return sum;
}
