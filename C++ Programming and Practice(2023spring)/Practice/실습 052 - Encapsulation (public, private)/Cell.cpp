#include "Cell.h"
#include <string>
using namespace std;

Cell::Cell(string val) { type = CELL_TYPE(0); stringVal = val; };
Cell::Cell(int val) { type = CELL_TYPE(1); intVal = val; };
Cell::Cell(double val) { type = CELL_TYPE(2); doubleVal = val; };

CELL_TYPE Cell::getType() const { return type; };
string Cell::getStringVal() const { return stringVal; };
int Cell::getIntVal() const { return intVal; };
double Cell::getDoubleVal() const { return this->doubleVal; };