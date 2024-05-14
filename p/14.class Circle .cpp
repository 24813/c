//1. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include <iostream> 
#include <cmath>
using namespace std;

const double PI = 3.14159;
class Circle 
{ 
  private: 
    double radius;
//---------------------------------------
  public:
    Circle(double rad): radius(rad) {}
    double calculateArea() 
    {
      return PI * pow(radius, 2);
    }
//---------------------------------------
    double calculate_perimeter()
    {
      return 2 * PI * radius;
    }
};

int main() 
{
  Circle circle(5); 

  double area = circle.calculateArea();
  cout << "Area: " << area << endl;

  double perimeter = circle.calculate_perimeter();
  cout << "perimeter: " << perimeter << endl;

  return 0;
}
