Car::Car(int numWheels, string color, string plateNumber)
{
    this->numWheels = numWheels;
    this->color = color;
    this->plateNumber = plateNumber;
}

void Car::Print()
{
    // endl - C++
    // \n - C
    cout << numWheels << endl
         << color << endl
         << plateNumber << endl;
}
