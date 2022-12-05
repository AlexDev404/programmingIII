/**
    @name main.cpp
    @abstract Demonstrates the usage of while loops further
    @author Immanuel Garcia
*/

#include <iostream>
#include <unistd.h>
#define I_DONT_KNOW 1
using namespace std;

useconds_t sleep(useconds_t ms);

int main() {
    int counter = 5;

    while (counter >= I_DONT_KNOW) {
        cout << counter << endl;
        sleep(1000);
        counter--;
    }
    sleep(1500);
    cout << "LIFTOFF!!!!!" << endl;
    return 0;
}

useconds_t sleep(useconds_t ms) {
    usleep(ms * 1000);
}
