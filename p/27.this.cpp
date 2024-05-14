#include <iostream>
using namespace std;

class Test
{
public:
  int x;
  int y;

public:
  Test(int x, int y)
  {
    this->x = x;
    this->y = y;
  }
  Test()
  {
    this->x = 26;
    this->y = 20;
  }

  void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
  Test obj;
  obj.print();

  Test o(11, 10);
  o.print();
  return 0;
}
