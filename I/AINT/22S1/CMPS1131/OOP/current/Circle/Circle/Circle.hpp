// start of circle.h
// definition
#pragma once
class Circle{
   public:
      Circle(double radius); // Constructs a new circle with the given radius as a real number
      double area(); // Returns the area occupied by the circle (pi*(r^2)) [ getter ]
      double circumference(); // Returns the distance around the circle (2*pi*r) [ getter ]
      double getRadius(); // Returns the radius as a real number [ getter ]
      void setRadius(double radius);  // Sets the radius to the real-number provided [ setter ]
      void Print(); // returns a string representation of a circle in the form "{Circle:radius=radius}"
                           // example "{Circle:radius=7.5}"

   private:
      double pi = 3.1415;
      double radius = false;

};
// end of circle.h
