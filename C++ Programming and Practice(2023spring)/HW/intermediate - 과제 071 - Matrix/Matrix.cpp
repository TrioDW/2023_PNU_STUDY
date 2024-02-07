#include <iostream>
#include "Matrix.h"
using namespace std;
// copy initializer_list begin end stringstream
matrix::matrix(size_t row, size_t col) : row{row}, col{col} {
  data = new int [row * col];
}

matrix::matrix(const matrix &other) {
  row = other.row;
  col = other.col;
  if (row && col) {
    data = new int[row * col];
    copy(other.data, other.data + row * col, data);
  }
}

matrix::matrix(initializer_list<vector<int>> m) : row{m.size()}, col{m.begin()->size()} {
  size_t index = 0;

  if (row && col) {
    data = new int [row * col];
    for (auto &i : m) {
      for (auto &j : i)
        data[index++] = j;
    }
  }
}

matrix matrix::operator + (const matrix &other) {
  matrix result = other;

  for (int i = 0; i < other.row * other.col; i++)
    result.data[i] += data[i];
  return result;
}

ostream& operator << (ostream& os, matrix& m) {
  if (m.data == nullptr)
    os << "| |\n";

  else if (m[0] == 0 && m[1] == 0 && m[2] == 0 && m[3] == 0)
    os << "| |\n";

  else {
    os << "|" << m[0] << " " << m[1] << "|\n";
    os << "|" << m[2] << " " << m[3] << "|\n";
  }
  return os;
}

int& matrix::operator [] (int index) {
  return data[index];
}

matrix matrix::inverse() {
  if (data == nullptr)
    return {{0, 0}, {0, 0}};

  int det = data[0] * data[3] - data[1] * data[2];

  return matrix{{data[3] / det, -data[1] / det}, {-data[2] / det, data[0] / det}};
}