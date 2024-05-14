#include <iostream>
using namespace std;

class Test{ 
  public :
  Test() // constructor
  {
    cout << "Test class object created.";
  }
  
  ~Test() // destructor
  {
    cout << endl << "Test class object destroyed.";
  }
};
int main() 
{
  Test testObj;
  return 0;
}