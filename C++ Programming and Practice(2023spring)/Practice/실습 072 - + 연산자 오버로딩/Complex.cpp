#include <iostream>
#include "Complex.h"
using namespace std;

std::ostream& operator << (std::ostream& os, const Complex& c) {
  cout << c.r << "+" << c.i << "i";
  return os;
}

Complex Complex::operator + (const Complex rhs) {
  return Complex(r + rhs.r, i + rhs.i);
}

Complex Complex::operator - (const Complex rhs) {
  return Complex(r - rhs.r, i - rhs.i);
}