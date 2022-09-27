#include <iostream>

using namespace std;

int main() {
    while (true) {
        string word;
        cout << "> ";
        cin >> word;
        // Check if the user enters "bye"
        if (word == "bye" || word == "-1") {
            cout << "Goodbye!" << endl;
            break;
        }
        cout << word << endl;
    }
    return 0;
}
