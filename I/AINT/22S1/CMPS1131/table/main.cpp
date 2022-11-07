#include <iostream>
using namespace std;
void printBasic(int s_rows, int s_cols, char sym);
void printOutline(int s_rows, int s_cols, char sym, char border);

int main()
{
    cout << "printBasic" << endl << "============" << endl;
    printBasic(3, 4, '*');
    cout << endl;
    cout << "printOutline" << endl << "==============" << endl;
    printOutline(3, 4, '$', '.');
    return 0;
}

void printOutline(int s_rows, int s_cols, char sym, char border){
    // Outer loop
    for(int r = 1; r<=s_rows; r++){
        // Inner Loop
        for(int c = 1; c<=s_cols; c++){
            if(c == 1 || c == s_cols){
                cout << border
                     << " ";
            }
            // code to print four stars
            else{
            cout << sym
                 << " ";
            }
        }
        cout << endl;
    }
}

void printBasic(int s_rows, int s_cols, char sym){
    // Outer loop
    for(int r = 1; r<=s_rows; r++){
        // Inner Loop
        for(int c = 1; c<=s_cols; c++){
            // code to print four stars
            cout << sym
                 << " ";
        }
        cout << endl;
    }
}
