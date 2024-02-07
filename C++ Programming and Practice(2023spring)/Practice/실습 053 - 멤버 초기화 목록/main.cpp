#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  Rectangle rectangle {x1, y1, x2, y2};
  cout << rectangle.area() << "\n";
}
