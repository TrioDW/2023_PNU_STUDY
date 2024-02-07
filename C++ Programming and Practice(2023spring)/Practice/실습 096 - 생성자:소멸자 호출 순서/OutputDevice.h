#pragma once
#include <iostream>

class OutputDevice {
  public:
    OutputDevice() { std::cout << "OutputDevice constructor\n"; }
    ~OutputDevice() { std::cout << "OutputDevice destructor\n"; }
};