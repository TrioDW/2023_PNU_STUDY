#pragma once
#include "OutputDevide.h"

class Monitor : public OutputDevice {
 public:
    Monitor() { std::cout << "Monitor constructor\n"; }
    ~Monitor() { std::cout << "Monitor destructor\n"; }
};