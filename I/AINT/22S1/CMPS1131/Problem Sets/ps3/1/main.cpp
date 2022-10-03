#include <iostream>
using namespace std;
// What is the output from the following C++ program?

​int mystery(int b, int c);

int main() {
    int a = 4;
    int b = 2;
    int c = 5;
​
    a = mystery(c, b);
    c = mystery(b, a);
    cout << a << " " << b << " " << c << endl;
    return 0;
}

​int mystery(int b, int c) {
    return c + 2 * b;
}