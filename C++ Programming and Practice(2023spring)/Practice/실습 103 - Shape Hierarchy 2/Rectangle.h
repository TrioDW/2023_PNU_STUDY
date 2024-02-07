#include "Triangle.h"
#include <sstream>
#include <iomanip>
#include <vector>
#pragma once

class Rectangle : public IShape {
 public:
  Rectangle(const std::vector<Point>& points) : IShape(points) { }
  ~Rectangle() noexcept override {
    std::cout << "Rectangle destructor called" << std::endl;
  };

  double getArea() const override {
    auto tmp1 = this->points[0];
    auto tmp2 = this->points[2];

    return (tmp2.x - tmp1.x) * (tmp2.y - tmp1.y);
  }

  double getPerimeter() const override {
    auto tmp1 = this->points[0];
    auto tmp2 = this->points[2];

    return 2 * ((tmp2.x - tmp1.x) + (tmp2.y - tmp1.y));
  }

  std::string toString() const override {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << "Rectangle Area: " << getArea() << ", Perimeter: " << getPerimeter();
    return ss.str();
  }
};