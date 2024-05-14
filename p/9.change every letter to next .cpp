//write a C++ program to change every letter in a given string with the letter following it in the alphabet
#include <iostream>
#include <string>
using namespace std;

string next (string input)
{
  for (int i = 0; i < input.length(); i++)
  {
    if (input[i] >= 'a' && input[i] < 'z' || input[i] >= 'A' && input[i] < 'Z') input[i]++;
    else if (input[i] == 'z') input[i] = 'a';
    else if (input[i] == 'Z') input[i] = 'A';
  }
  return input;
}
int main ()
{
  string x = "abcd45284";
  cout << next (x);
}