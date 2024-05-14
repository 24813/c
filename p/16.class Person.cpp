#include <iostream>
#include <string>
using namespace std;

class Person {
  private: 
    string name;
    int age;
    string country;

  public:
   Person(string n, int a, string c) : name (n) ,age (a),country(c) {}
       
    void setName(string n) 
    {
      name = n;
    }

    void setAge(int a) 
    {
      age = a;
    }

    void setCountry(string c) 
    {
      country = c;
    }

    string getName() 
    {
      return name; 
    }

    int getAge() 
    {
      return age;
    }

    string getCountry() 
    {
      return country;
    }
};

int main() {
Person person("farok", 20, "egy");
/*
  person.setName("farok yousry");
  person.setAge(20);
  person.setCountry("egy");*/
  //put this when you remove constractor***

  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;
  cout << "Country: " << person.getCountry() << endl;

  return 0;
}
