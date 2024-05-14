#include <iostream>
// print array using function  and how to return array part 2
using namespace std;
#include <array>

array<int, 4> Arr()
{
  array<int, 4> input;
  for (int i = 0; i < 4; i++)
  {
    cin >> input[i];
  }
  return input;
}
int main()
{
  array<int, 4> nums = Arr();
  cout << "Elements: ";
  for (int i = 0; i < 4; i++)
  {
    cout << nums[i] << ' ';
  }
}