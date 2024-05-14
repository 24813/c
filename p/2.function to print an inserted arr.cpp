// function to print an inserted arr
#include <iostream>
using namespace std;

void insert_arr(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}
void print_arr(int arr[], int size)
{
  for(int i = 0; i < size; i++)
  {
    cout << arr[i] << ' ';
  }
  cout << endl;
}
int main ()
{
  int n;
  cout << "Enter size of arr: ";
  cin >> n;
  int arr1[n];
  insert_arr(arr1, n);
  print_arr(arr1, n);
}