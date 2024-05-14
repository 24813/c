#include <iostream>
using namespace std;
class Test
{
public:
  int x[10];

public:
  void input(int z)
  {
    for (int i = 0; i < z; i++)
    {
      cout << "enter element of array" << endl;
      cin >> x[i];
    }
  }

  void print()
  {
    int arr_size = sizeof(x) / sizeof(x[0]);
    for (int i = 0; i < arr_size; i++)
      cout << x[i] << endl;
  }
};

int main()
{
  Test obj;
  obj.input(10);
  obj.print();

  return 0;
}
