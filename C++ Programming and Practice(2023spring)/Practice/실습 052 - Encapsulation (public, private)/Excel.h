#include <iostream>
#include <vector>
#include "Cell.h"
using namespace std;

class Excel {
 public:
  Excel(vector<vector<Cell>> data);
  double average(int fromRow, int fromCol, int toRow, int toCol) const;
 private:
  vector<vector<Cell>> data;
};