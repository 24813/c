#include <iostream>
using namespace std;
struct birth_date
{
  int day;
  int month;
  int year;
};
struct bank
{
  int id;
  string name;
  float balance;
  birth_date date;
};
int main ()
{
  bank emp1;

  cout << "Enter Id: ";
  cin >> emp1.id;

  cout << "Enter Name: ";
  cin >> emp1.name;

  cout << "Enter balance: ";
  cin >> emp1.balance;

  cout << "Enter Birth date: ";
  cin >> emp1.date.day >> emp1.date.month >> emp1.date.year;

  cout << "ID: " << emp1.id << '\n';
  cout << "Name: " << emp1.name << '\n';
  cout << "Balance: " << emp1.balance << '\n';
  cout << "BD: " << emp1.date.day << '/' << emp1.date.month << '/' << emp1.date.year;
}