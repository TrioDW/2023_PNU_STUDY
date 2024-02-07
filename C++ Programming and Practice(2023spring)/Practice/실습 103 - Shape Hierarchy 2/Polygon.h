#include "Circle.h"
#include <sstream>
#include <iomanip>
#include <cmath>
#include <vector>
#pragma once

class Polygon : public IShape {
 public:
  Polygon(const std::vector<Point>& points) : IShape(points) { }
  ~Polygon() noexcept override {
    std::cout << "Polygon destructor called" << std::endl;
  };

  double getArea() const override {
    double ans = 0.0;
    int i, j;
    i = points.size() - 1;

    for (j = 0; j < points.size(); ++j) {
      ans += (points[i].x * points[j].y) - (points[j].x * points[i].y);
      i = j;
    }

    if (ans < 0) ans = -ans;
    ans /= 2;

    return ans;
  }

  double getPerimeter() const override {
    double ans = 0.0;
    std::vector<Point> v = points;
    v.emplace_back(points.front());

    for (int i = 0; i < points.size(); i++)
      ans += calcDist(v[i], v[i+1]);
    return ans;
  }

  std::string toString() const override {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << "Polygon Area: " << getArea() << ", Perimeter: " << getPerimeter();
    return ss.str();
  }
};