#include <iostream>

template<typename T>
int sum(T v) {
  return v;
}

template <typename T, typename... Types>
int sum(T v, Types&&... args) {
  return v + sum(args...);
}

int main() {
  std::cout << sum(1, 2, 3, 4) << std::endl;
  return 0;
}