#include "Rectangle.h"
#include <sstream>
#include <iomanip>
#include <cmath>
#include <vector>
#pragma once

class Circle : public IShape {
 public:
  int r = 0;
  Point points;

  Circle(Point points, int r) : points(points), r(r) { }
  ~Circle() noexcept override {
    std::cout << "Circle destructor called" << std::endl;
  };

  double getArea() const override {
    return M_PI * r * r;
  }

  double getPerimeter() const override {
    return 2 * M_PI * r;
  }

  std::string toString() const override {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << "Circle Area: " << getArea() << ", Perimeter: " << getPerimeter();
    return ss.str();
  }
};