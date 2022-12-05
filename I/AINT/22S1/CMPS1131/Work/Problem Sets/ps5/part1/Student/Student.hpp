#pragma once
#include <string>
using namespace std;
class Student
{
public:
    // Constructor
    Student(string id, string firstName, string lastName, string gender, double gpa);

    // Set/Get firstName
    void setFirstName(string firstName);
    string getFirstName();

    // Set/Get lastName
    void setLastName(string lastName);
    string getLastName();

    // Set/Get GPA
    void setGPA(double gpa);
    double getGPA();

    // Set/Get gender
    void setGender(string gender);
    string getGender();

    // Set/Get id
    void setID(string id);
    string getID();

    // Print method
    void Print();

private:
    // 1
    string id = ""; // student ID
    // 2
    string firstName = "";
    // 3
    string lastName = "";
    // 4
    string gender = "unknown";
    // 5
    double gpa = 0.00;
    // 6
    // ???
};