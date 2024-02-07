#include "Helper.h"
#include <sstream>
#include <iomanip>
#include <vector>
#pragma once
// const const const const
class Triangle : public IShape {
 public:
  Triangle(const std::vector<Point>& points) : IShape(points) { }
  ~Triangle() noexcept override {
    std::cout << "Triangle destructor called" << std::endl;
  };

  double getArea() const override {
    auto tmp1 = this->points[0];
    auto tmp2 = this->points[2];

    return (tmp2.x - tmp1.x) * (tmp2.y - tmp1.y) / 2;
  }

  double getPerimeter() const override {
    auto tmp1 = this->points[0];
    auto tmp2 = this->points[2];

    return (tmp2.y - tmp1.y) + (tmp2.x - tmp1.x) + calcDist(tmp1, tmp2);
  }

  std::string toString() const override {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << "Triangle Area: " << getArea() << ", Perimeter: " << getPerimeter();
    return ss.str();
  }
};