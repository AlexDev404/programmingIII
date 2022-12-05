#include <iostream>
using namespace std;

// 1. Function prototype
void messenger(string message, int count);


int main() {
    string message = "Where are you?!";
    int count = 5;
    messenger(message, count);
    return 0;
}

void messenger(string message, int count) {
    // 2. Implementation
    for (int i = 0; i < count; i++) {
        cout << message << endl;
    }
}
