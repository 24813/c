// pointer vs array
#include <iostream>
using namespace std;
int main ()
{
  // int num1 = 10;
  // int * ptr = &num1;
  // cout << ptr << '\n';
  // cout << * ptr << '\n';

  int nums[5] = {10,20,30,40,50};
  int * ptr = nums;// add --> ind 0

  *ptr = 90; 
  *(ptr + 1) = 80;// index 1
  ptr++; // add --> ind 1
  *(ptr + 1) = 70; // index 1?
  for (int i = 0; i < 5; i++)
  {
    cout << *(nums + i) << ' ';
  }

  cout << "\n-----------\n";

  ptr = nums;
  ptr = &nums[2];  *ptr = 100;
  ptr = nums + 3;  *ptr = 200;

  for (int i = 0; i < 5; i++)
  {
    cout << nums[i] << ' ';
  }

}
