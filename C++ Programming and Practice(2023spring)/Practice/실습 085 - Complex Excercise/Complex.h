#include <iostream>
#include <cmath>
#include <array>

template <typename T, size_t N>
auto myFind(std::array<T, N>& arr, T target) {

  for (int i = 0; i < N; i++) {
    if (target == arr[i])
      return &arr[i];
  }
  return arr.end();
}

class Complex {
  float r, i ;
 public:
  Complex(float _r = 0.F, float _i = 0.F) : r(_r), i(_i) { }
  friend std::ostream& operator << (std::ostream& os, const Complex& c);
  bool operator < (const Complex& c) const {
    return size() < c.size() ;
  }
  float size() const { return sqrt(r*r + i*i) ; }
  bool operator == (const Complex& c) const {
    return ( r == c.r && i == c.i ) ; }
};

std::ostream& operator << (std::ostream& os, const Complex& c) {
  os << c.r << " + " << c.i << "i";
  return os;
}