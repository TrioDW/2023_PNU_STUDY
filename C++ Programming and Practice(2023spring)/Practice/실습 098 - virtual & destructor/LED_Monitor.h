#pragma once
#include "LCD_Monitor.h"

class LED_Monitor : public Monitor {
 public :
  LED_Monitor() { std::cout << "LED_Monitor constructor\n"; }
  ~LED_Monitor() override { std::cout << "LED_Monitor destructor\n"; }
};
