#pragma once
#include "OutputDevide.h"

class Printer : public OutputDevice {
 public:
  Printer() { std::cout << "Printer constructor\n"; }
  ~Printer() { std::cout << "Printer destructor\n"; }
};