/*
- implement a rectangle class with length & width
- use parametrized constructor to intialize length & width
- create 2 methods (area calculator, perimeter calculator)
*/
#include <iostream> 
using namespace std;
class Rectangle
{
private:
  double length;
  double width;

public:
  Rectangle(double len, double wid) : length(len), width(wid) {}

  double calculateArea()
  {
    return length * width;
  }
//-----------------------------------
  double calculatePerimeter()
  {
    return 2 * (length + width);
  }
};

int main()
{
  double length, width;
  cout << "Input the length of the rectangle: ";
  cin >> length;
  cout << "Input the width of the rectangle: ";
  cin >> width;

  Rectangle rectangle(length, width);

  cout << "\nArea: " << rectangle.calculateArea() << endl;
  cout << "Perimeter: " << rectangle.calculatePerimeter() << endl;

  return 0;
}
