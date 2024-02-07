#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include "shape.h"
using namespace std;

vector<Shape> shape_list;
int next_id = 0;

void create_rectangle(Point& pos1, Point& pos2) {
  int id = next_id++;

  shape_list.push_back({id, ShapeType(0), pos1, pos2, {pos2.x - pos1.x, pos2.y - pos1.y}, 0});
}

void create_circle(Point& center, int radius) {
  int id = next_id++;

  shape_list.push_back({id= id, ShapeType(1), {0, 0}, {0, 0},
                        center, radius});
}

void move_shape(int id, int x, int y) {
  if (shape_list[id].type == ShapeType(0)) {
    shape_list[id].pos1.x += x;
    shape_list[id].pos1.y += y;
    shape_list[id].pos2.x += x;
    shape_list[id].pos2.y += y;
    shape_list[id].center.x += x;
    shape_list[id].center.y += y;
  } else {
    shape_list[id].center.x += x;
    shape_list[id].center.y += y;
  }
}

double areaCalculate(const Shape &s) {
  if (s.type == ShapeType(0))
    return abs(s.pos1.x - s.pos2.x) * abs(s.pos1.y - s.pos2.y);
  else
    return (double) s.radius * (double) s.radius * M_PI;
}

void sort_shapes() {
  sort(shape_list.begin(), shape_list.end(), [] (const Shape& a, const Shape& b) {
    return areaCalculate(a) < areaCalculate(b);
  });
}

// max_element

int find_furthest_shape() {
  int temp = -1;
  double far = 0;
  for (auto [id, type, pos1, pos2, center, radius] : shape_list) {
    if ((center.x * center.x) + (center.y * center.y) > far) {
      temp = id;
      far = (center.x * center.x) + (center.y * center.y);
    }
  }
  return temp;
}

void remove_shape_by_id(int id) {
  shape_list.erase(remove_if(shape_list.begin(), shape_list.end(), [id] (Shape& a) {
    return id == a.id;
  }), shape_list.end());
}

void align_shapes() {
  int width = 0;

  for (auto& [id, type, pos1, pos2, center, radius] : shape_list) {
    if (type == ShapeType(0)) {

      int w = (pos2.x - pos1.x) / 2;
      if (pos2.y - pos1.y > width + (2 * w)) {
        center.x = (pos2.y - pos1.y) / 2;
        center.y = center.x;
      } else {
        center.x = width + w;
        center.y = center.x;
        width += (2 * w);
      }
    } else {
      width += radius;
      center.x = width;
      center.y = width;
      width += radius;
    }
  }
}

void print_shapes() {
  cout << fixed << setprecision(2);
  for (auto [id, type, pos1, pos2, center, radius] : shape_list) {
    if (type == ShapeType(0)) {
      int x = pos2.x - pos1.x;
      int y = pos2.y - pos1.y;
      cout << "ID: " << id << ", Type: RECT, Position: (" << center.x << ", " <<  center.y << "), ";
      cout << "Width: " << x << ", Height: " << y << ", Area: " << (double) x * y << "\n";
    } else {
      cout << "ID: " << id << ", Type: CIRCLE, Center: (" << center.x << ", " << center.y << "), ";
      cout << "Radius: " << radius << ", Area: " << radius * radius * M_PI << "\n";
    }
  }
}