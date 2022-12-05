#include <QtCore/QCoreApplication>
#include <iostream>
#include <string>

using namespace std;
int x, y;
string z;

void calculator(){
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;
    cout << "Type in an operand: ";
    cin >> z;
    if(z == "+"){
        int r = x + y;
        cout << r;
    } else if(z == "-"){
        int r = x - y;
        cout << r;
    } else if(z == "/"){
        int r = x / y;
        cout << r;
    } else if(z == "*"){
        int r = x * y;
        cout << r;
    }
    else{
        cout << "Invalid Choice." << endl;
        calculator();
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    calculator();
    return 0;
}
