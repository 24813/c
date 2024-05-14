// Code to understand the working of the copy constructor

#include <iostream>
using namespace std;

class Person
{
private:
  string name;
  int age;

public:
  Person(string person_name, int person_age)
  {
    cout << "Constructor for both name and age is called" << endl;
    name = person_name;
    age = person_age;
  }

  Person(const Person &obj)
  {
    cout << "Copy constructor is called" << endl;
    name = obj.name;
    age = obj.age;
  }

  void display()
  {
    cout << "Name of current object: " << name << endl;
    cout << "Age of current object: " << age << endl;
    cout << endl;
  }
};
int main()
{

  Person obj1("First person", 25);

  obj1.display();

  Person obj2(obj1);

  obj2.display();

  return 0;
}
