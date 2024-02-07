#include <cstddef>
#include <iostream>
#include <vector>
using namespace std;

class matrix {
 public :
  matrix() = default;
  matrix(size_t row = 0, size_t col = 0);
  matrix (const matrix& other);

  matrix(initializer_list<vector<int>> m);

  friend ostream& operator << (ostream& os, matrix& m);
  int& operator [] (int index);

  matrix operator + (const matrix& other);
  matrix inverse();

 private :
  int *data = nullptr;
  size_t row = 0;
  size_t col = 0;
};