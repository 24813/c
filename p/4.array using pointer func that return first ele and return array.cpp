// print array using function  and how to return array
#include <iostream>
using namespace std;
int num[4];
int * Arr()
{
  for (int i = 0; i < 4; i++)
  {
    cin >> num[i];
  }
  return num;
}

int main ()
{
  int * ptr;
  ptr = Arr();
  for (int i = 0; i < 4; i++)
  {
    
    // cout << *(ptr + i) << '\n';
    
   std :: cout << ptr[i] << '\n';
    
    // std :: cout<< *ptr <<'\n';
    // ptr++;
  }
}
x