// start of Circle.h

class Circle
{

public:
    Circle(double radius);
    double area();
    double circumference();
    double getRadius();
    void setRadius(double radius);
    void Print();

private:
    double radius = 0;
    double pi = 3.14;
};

// end of Circle.h