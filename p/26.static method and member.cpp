#include <iostream>
using namespace std;

class A
{
public:
  static int year;
  static int price;
  static string model;
  A(int a, int b, string c)
  {
    year = a;
    price = b;
    model = c;
  }
  A()
  {
    year = 2000;
    price = 100;
    model = "golf";
  }
  static void print()
  {

    cout << "A::staic method  is called\n";
    cout << "yaer is " << year << "\t" << "price is " << price << "\t" << " model is" << model << "\t" << endl;
  }
};

int A::year = 2000;
int A::price = 100;
string A::model = "golf";

int main()
{

  A::print();
  A a(2022, 500000, "BMW");

  a.print();
  A::print();
}
