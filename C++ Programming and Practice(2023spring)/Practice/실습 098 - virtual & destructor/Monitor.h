#pragma once
#include "OutputDevice.h"

class Monitor : public OutputDevice {
 public:
  Monitor() { std::cout << "Monitor constructor\n"; }
  virtual ~Monitor() { std::cout << "Monitor destructor\n"; }
};
