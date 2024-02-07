#include "static.h"
using namespace std;

void inc(promise<int> && result) {
  int COUNTER = 0;
  for (int i = 0; i < 100000; i++)
    COUNTER++;
  result.set_value(COUNTER);
}

int getCounter() {
  static int COUNTER = 0;
  COUNTER++;
  return COUNTER;
}