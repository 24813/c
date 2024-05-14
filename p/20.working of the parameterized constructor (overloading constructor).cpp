// Code to understand the working of the parameterized constructor (overloading constructor)
// overloading constructor

#include <iostream>
using namespace std;

class Person
{

private:
  string name;
  int age;

public:
  Person(string person_name)
  {
    cout << "Constructor to set name is called" << endl;
    name = person_name;
    age = 12;
  }

  Person(int person_age)
  {
    cout << "Constructor to set age is called" << endl;
    name = "Student";
    age = person_age;
  }

  Person(string person_name, int person_age)
  {
    cout << "Constructor for both name and age is called" << endl;
    name = person_name;
    age = person_age;
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

  Person obj1("First person");
  obj1.display();

  Person obj2(25);
  obj2.display();

  Person obj3("Second person", 15);
  obj3.display();

  return 0;

}