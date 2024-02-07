#pragma once
#include "Monitor.h"

class LED_Monitor : public Monitor {
 public :
  LED_Monitor() { std::cout << "LED_Monitor constructor\n"; }
  ~LED_Monitor() { std::cout << "LED_Monitor destructor\n"; }
};