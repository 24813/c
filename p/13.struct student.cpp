#include <iostream>
using namespace std;
struct student
{
  char name[10];
  int id;
  float GPA;
}
x[2];
int main ()
{
  // student x[2];
  for (int i = 0; i < 2; i++)
  {
    cout << "Enter data for Std no." << i + 1 << endl;
    
    cout << "Enter ID: ";
    cin >> x[i].id;

    cout << "Enter Name: ";
    cin >> x[i].name;

    cout << "Enter GPA: ";
    cin >> x[i].GPA;
  }

  for (int i = 0; i < 2; i++)
  {
    cout << "ID: " << x[i].id << '\n';
    cout << "Name: " << x[i].name << '\n';
    cout << "GPA: " << x[i].GPA << '\n';
  }
}