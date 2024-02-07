#include <ostream>

class Complex {
 public:
  Complex(double real=0, double imaginary=0) : r(real), i(imaginary) { };
  friend std::ostream& operator << (std::ostream& os, const Complex& c);
 private:
  double r{0}, i{0};
};