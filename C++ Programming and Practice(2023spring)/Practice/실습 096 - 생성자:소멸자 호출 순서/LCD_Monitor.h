#pragma once
#include "Monitor.h"

class LCD_Monitor : public Monitor {
 public :
  LCD_Monitor() { std::cout << "LCD_Monitor constructor\n"; }
  ~LCD_Monitor() { std::cout << "LCD_Monitor destructor\n"; }
};