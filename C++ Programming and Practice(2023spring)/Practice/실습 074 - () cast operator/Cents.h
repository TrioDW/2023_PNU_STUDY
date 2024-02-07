#pragma once
#include "Dollars.h"

class Cents {
 private:
  int value_;
 public:
  Cents(int value = 0) : value_(value) {}
  operator int() const { return value_; }
};
