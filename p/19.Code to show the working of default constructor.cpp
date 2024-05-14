//Code to show the working of default constructor
#include <iostream>
using namespace std;

class Person
{
private:
  string name;
  int age;

public:
  Person()
  {
    cout << "Default constructor is called" << endl;
    name = "std";
    age = 19;
  }
  Person(string n, int a) : name(n), age(a)
  {
  }

  void display()
  {
    cout << "Name of current object: " << name << endl;
    cout << "Age of current object: " << age << endl;
  }
};
int main()
{

  Person obj1;
  obj1.display();

  Person obj2("Yusuf", 19);
  obj2.display();

  return 0;
}
