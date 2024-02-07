#include "Point.h"
#include <cmath>

Point::Point(double x, double y) : x {x}, y {y} { }

double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::norm() const { return sqrt(x*x + y*y); }