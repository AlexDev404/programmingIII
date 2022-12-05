#include <iostream>
using namespace std;

int averageOf3(int num, int num2, int num3);

int main()
{
    averageOf3(3, 3, 3);
    return 0;
}

int averageOf3(int num, int num2, int num3)
{
    int average;
    int sum;

    sum = num + num2 + num3;
    average = sum / 3;

    return average;
}