#include "Point.h"

class Rectangle {
 public:
  Rectangle();
  Rectangle(double x1, double y1, double x2, double y2) ;
  double area() const ;
 private:
  Point leftTop, rightBottom;
};