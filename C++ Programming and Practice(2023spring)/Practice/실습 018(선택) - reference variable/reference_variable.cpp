#include <iostream>
using namespace std;

void my_swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int m, n;
  cin >> m >> n;
  my_swap(m, n);
  cout << m << " " << n;
}