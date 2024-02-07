#include <iostream>
using namespace std;

int main() {
  int SIZE = 0;

  cin >> SIZE;
  int arr[SIZE];

  for (int i = 0; i < SIZE; i++)
    cin >> arr[i];

  for (int i = SIZE - 1; i > -1; i--)
    cout << arr[i] << " ";

  return 0;
}