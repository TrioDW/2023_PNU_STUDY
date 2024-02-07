#pragma once
#include "Cents.h"

class Dollars {
 private:
  int value_;
 public:
  Dollars(int value = 0) : value_(value) {}
  operator Cents() const {
    return Cents(value_ * 100);
  };
};
