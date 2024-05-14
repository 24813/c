// Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
  string company;
  string model;
  int year;

public:
  
  Car(string comp,string mdl, int yr) : company(comp), model(mdl), year(yr) {}

  string getCompany()
  {
    return company;
  }

  string getModel()
  {
    return model;
  }

  int getYear()
  {
    return year;
  }

  void setCompany(string comp)
  {
    company = comp;
  }

  void setModel(string mdl)
  {
    model = mdl;
  }

  void setYear(int yr)
  {
    year = yr;
  }
};

int main()
{
  Car car("AUDI", "A6", 2023);

  cout << "Company: " << car.getCompany() << endl;
  cout << "Model: " << car.getModel() << endl;
  cout << "Year: " << car.getYear() << endl;

  car.setCompany("BMW");
  car.setModel("M4");
  car.setYear(2022);


  cout << "\nUpdated Company: " << car.getCompany() << endl;
  cout << "Updated Model: " << car.getModel() << endl;
  cout << "Updated Year: " << car.getYear() << endl;

  return 0;
}
