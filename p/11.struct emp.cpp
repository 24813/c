#include <iostream>
using namespace std;
struct emp
{
  int id;
  string name;
  float salary;
};
int main ()
{
  /*
  int n;
  cin >> n;
  emp all[n];
  */
  emp all[3];
  for (int i = 0; i < 3; i++)
  {
    cout << "Enter id of emp " << i + 1 << " : ";
    cin >> all[i].id;
    cout << "Enter name of emp " << i + 1 << " : ";
    cin >> all[i].name;
    cout << "Enter salary of emp " << i + 1 << " : ";
    cin >> all[i].salary;
  }

  for (int i = 0; i < 3; i++)
  {
    cout << "Emp no." << i + 1 << '\n';
    cout << "ID: "<<all[i].id << '\n';
    cout << "Name: "<<all[i].name << '\n';
    cout << "Salary: "<<all[i].salary << '\n';
  }
}