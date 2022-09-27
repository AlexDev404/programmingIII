#include <iostream>
using namespace std;

double incrementalValue(double value);

int main() {
    double number = 100;
    double answer = incrementalValue(number);
    cout << answer << endl;
    return 0;
}

/**
    @brief incrementalValue
    @param value
    @return Adds five to the argument and returns the result
*/
double incrementalValue(double number) {
    double value = 5;
    return double(value + number);
}
