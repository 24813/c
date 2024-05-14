// useful methods
#include <array>
#include <iostream>
using namespace std;

int main()
{
  array <int, 4> n1 {10,20,60,50};
  array <int, 0> n2;

  cout << n1.size() << '\n'; // 4
  cout << n2.size() << '\n'; // 0

  cout << boolalpha;
  cout << n1.empty() << '\n'; // 0 = false
  cout << n2.empty() << '\n'; // 1 = true

  cout << n1[1] << '\n';
  cout << n1.at(1) << '\n';

  cout << n1.front() << '\n';
  cout << n1.back() << '\n';

  array <char, 4> alpha {'a', 'b', 'c', 'd'};
  cout << alpha.front() <<'\n';
  cout << alpha.back() <<'\n';
}