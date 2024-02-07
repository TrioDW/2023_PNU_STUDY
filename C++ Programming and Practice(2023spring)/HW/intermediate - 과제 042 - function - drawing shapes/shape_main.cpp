#include "shape.h"
#include <iostream>
using namespace std;

int main() {

  bool isQuit = false;

  Point a = {0, 0};
  Point b = {0, 0};
  int x, y, temp;

  while(!isQuit) {
    string command; cin >> command;
    if (command == "RECT") {
      cin >> a.x >> a.y >> b.x >> b.y;
      create_rectangle(a, b);
    } else if (command == "CIRCLE") {
      cin >> a.x >> a.y >> temp;
      create_circle(a, temp);
    } else if (command == "MOVE") {
      cin >> temp >> x >> y;
      move_shape(temp, x, y);
    } else if (command == "SORT") {
      sort_shapes();
    } else if (command == "MAX") {
      temp = find_furthest_shape();
      cout << "ID: " << temp;
    } else if (command == "REMOVE") {
      cin >> temp;
      remove_shape_by_id(temp);
    } else if (command == "ALIGN") {
      align_shapes();
    } else if (command == "PRINT") {
      print_shapes();
    } else if (command == "QUIT") {
      isQuit = true;
    } else {
      cout << "Invalid command." << "\n";
    }
  }
  return 0;
}