#include <iostream>

using namespace std;

int main() {
    while (true) {
        int integer;
        cout << "> ";
        cin >> integer;
        // Check if the user enters -1
        if (integer == -1) {
            cout << "Goodbye!" << endl;
            break;
        }
        cout << integer << endl;
    }
    return 0;
}
