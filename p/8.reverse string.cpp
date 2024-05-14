  #include <iostream>
#include <string>
using namespace std;

string rev (string input)
{
  string result = "";
  for (int i = 0; i < input.length(); i++)
  {
    
    result = input[i] + result;
  }
  return result;
}
int main ()
{
  string x;
  cout << "Enter string: ";
  cin >> x;
  cout << rev(x);
}

