// Fix this crappy code so that it returns and prints the product
// of 2 numbers on line #15

#include <iostream>
using namespace std;

int product(int x, int y);

int main() {

    int value1 = 5;
    int value2 = 10;
    int result = product(value1, value2);

    cout <<"The product of " <<value1 <<" and " <<value2 <<" is " << result <<".\n";

    return 0;
}

int product(int x, int y) {
    return x * y;
}
