#include <iostream>
using namespace std;
int main ()
{
int arr[5] = {1, 2, 3, 4, 5};
int *ptr ;
ptr= arr;  // ptr points to the first element of arr

// Accessing array elements using pointer
for (int i = 0; i < 5; i++) {
    cout<<*(ptr + i);
}

}