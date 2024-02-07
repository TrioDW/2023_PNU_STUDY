#include "Array.h"
using namespace std;

Array::Array(std::initializer_list<int> args, size_t size) : _size(size) {
  data = make_unique<int[]> (size);
  int i = 0;
  for (auto element : args)
    data[i++] = element;
}

int& Array::operator [] (int index) {
  return data[index];
}

size_t Array::size() const {
  return _size;
}