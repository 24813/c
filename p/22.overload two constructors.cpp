//Here is a program to overload two constructors, one to set the name and age of a student with no parameters, and the second to set the name and age of a student with a two - parameter.
#include <iostream>
using namespace std;

class Student
{
private:
  string Name;
  int Age;

public:
  Student()
  {
    Name = "Rohan";
    Age = 23;
  }
  Student(string str, int x)
  {
    Name = str;
    Age = x;
  }
  string get_Name()
  {
    return Name;
  }
  int get_Age()
  {
    return Age;
  }
};

int main()
{
  Student stu1, stu2("Mohit", 25);
  cout << "Student1 Name: " << stu1.get_Name() << " Student1 Age: " << stu1.get_Age() << endl;
  cout << "Student2 Name: " << stu2.get_Name() << " Student2 Age: " << stu2.get_Age() << endl;
  return 0;
}