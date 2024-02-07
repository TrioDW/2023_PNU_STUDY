#include <iostream>
using namespace std;

int main() {
  int SIZE;
  cin >> SIZE;
  int* arr = new int[SIZE];

  for(int i = 0; i < SIZE; ++i)
    cin >> arr[i];

  int temp;
  cin >> temp;

  cout << arr[arr[temp]];
  delete [] arr;

  return 0;
}
