#include <iostream>
#include "Array.h"
using namespace std;
// try
int main() {
  Array<int> arr(5);
  arr.at(0) = 1;
  arr.at(1) = 2;
  arr.at(2) = 3;
  arr.at(3) = 4;
  arr.at(4) = 5;

  try {
    throw 5;
  }
  catch(int index) {
    cerr << "Out of Range error: " << index << '\n';
  }
  return 0;
}
