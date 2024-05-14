//Here is a program to overload three constructors, one to set the area with no parameters,
//the second to set the area with one parameter, and the third to set the area with two parameters.

#include <iostream>
using namespace std;
class Area
{
public:
  int area;
  Area()
  {
    area = 0;
  }
  Area(int side)
  {
    area = side * side;
  }
  Area(int length, int width)
  {
    area = length * width;
  }
  int disp()
  {
    return area;
  }
};

int main()
{
  Area obj1;
  Area obj2(6);
  Area obj3(8, 5);
  cout << "Area of obj1: " << obj1.disp() << endl;
  cout << "Area of obj2: " << obj2.disp() << endl;
  cout << "Area of obj3: " << obj3.disp() << endl;
  return 0;
}