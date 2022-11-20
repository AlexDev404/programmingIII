#include "Student/Student.cpp"
#include <iostream>
using namespace std;

int main(){
    Student Rojae("0001", "Rojae", "Salam", "Gamer", 1.55);
    Student Alfred("0002", "Alfred", "Acosta", "male", 2.55);
    Alfred.Print();
    cout << endl;
    Rojae.Print();
    return 0;
}