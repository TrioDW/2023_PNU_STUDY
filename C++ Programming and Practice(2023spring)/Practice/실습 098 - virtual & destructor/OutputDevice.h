#pragma once
#include <iostream>

class OutputDevice {
 public:
  OutputDevice() { std::cout << "OutputDevice constructor\n"; }
  virtual ~OutputDevice() { std::cout << "OutputDevice destructor\n"; }
};
