#include "Excel.h"
#include <vector>
using namespace std;

Excel::Excel(vector<vector<Cell>> data) : data(data) {};
// STRING INT DOUBLE
double Excel::average(int fromRow, int fromCol, int toRow, int toCol) const {
  double sum = 0.0;
  int numCells = (toRow - fromRow + 1) * (toCol - fromCol + 1);
  for (int i = fromRow; i <= toRow; i++) {
    for (int j = fromCol; j <= toCol; j++) {

      if (data[i][j].getType() == CELL_TYPE(1))
        sum += (data[i][j].getIntVal());
      else
        sum += (data[i][j]).getDoubleVal();
    }
  }

  return sum / numCells;
}