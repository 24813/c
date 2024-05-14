//Write a C++ program to capitalize the first letter of each word in a given string. Words must be separated by only one space.

#include <iostream>
#include <string>
using namespace std;

string cap(string input)
{
  for (int i = 0; i < input.length(); i++)
  {
    if (i == 0 || input[i - 1] == ' ')
      input[i] = toupper(input[i]);
  }
  return input;
}

int main ()
{
  string name = "farok yousry  farok";
  cout << cap(name);
}