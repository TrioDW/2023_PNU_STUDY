#include "Complex.h"
#include <iostream>
using namespace std;

ostream& operator << (std::ostream& os, const Complex& c) {
  cout << c.r << "+" << c.i << "i";
  return os;
}