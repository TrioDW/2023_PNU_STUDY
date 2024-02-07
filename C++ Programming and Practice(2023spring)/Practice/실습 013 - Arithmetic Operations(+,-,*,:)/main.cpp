#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float a, b;
  cin >> a >> b;

  cout << fixed;
  cout.precision(2);
  cout << a << " + " << b << " = " << a + b << "\n";
  cout << fixed;
  cout.precision(2);
  cout << a << " - " << b << " = " << a - b << "\n";
  cout << fixed;
  cout.precision(2);
  cout << a << " * " << b << " = " << a * b << "\n";
  cout << fixed;
  cout.precision(2);
  cout << a << " / " << b << " = " << a / b << "\n";
  return 0;
}