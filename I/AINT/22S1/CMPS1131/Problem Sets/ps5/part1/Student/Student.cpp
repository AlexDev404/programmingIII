#include <string>
#include <iostream>
#include "Student.hpp"
using namespace std;

// Constructor

Student::Student(string id, string firstName, string lastName, string gender, double gpa)
{
    setID(id);
    setFirstName(firstName);
    setLastName(lastName);
    setGender(gender);
    setGPA(gpa);
}

// Set/Get firstName
void Student::setFirstName(string firstName)
{
    this->firstName = firstName;
}

string Student::getFirstName()
{
    return firstName;
}

// Set/Get lastName
void Student::setLastName(string lastName)
{
    this->lastName = lastName;
}

string Student::getLastName()
{
    return lastName;
}

// Set/Get GPA
void Student::setGPA(double gpa)
{
    if(gpa < 0 || gpa > 4){
        gpa = 0;
    }
    // This runs after the conditional
    this->gpa = gpa;
}

double Student::getGPA()
{
    return gpa;
}

// Set/Get gender
void Student::setGender(string gender)
{
    // If not male or female
    if(gender != "male" && gender != "female"){
        gender = "unknown";
    }
    this->gender = gender;
}

string Student::getGender()
{
    return gender;
}

// Set/Get id
void Student::setID(string id)
{
    this->id = id;
}

string Student::getID()
{
    return id;
}

void Student::Print(){
    cout << "Student ID: " << id << endl;   
    cout << "Student First Name: " << firstName << endl;
    cout << "Student Last Name: " << lastName << endl;
    cout << "Student Gender: " << gender << endl;
    cout << "Student GPA: " << gpa << endl;
}
