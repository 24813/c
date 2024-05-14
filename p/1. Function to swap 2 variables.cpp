//1. Function to swap 2 variables
#include <iostream>
using namespace std;
void swap_v(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;
}
void swap_v(string &x, string &y)
{
  string temp = x;
  x = y;
  y = temp;
}
int main()
{
  int n1 = 5, n2 = 10;
  string x = "Hello", y = "worled";
  cout << n1 << "  " << n2 << endl;
  swap_v(x, y);
  cout << x << " " << y;
}
