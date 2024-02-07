#pragma once
#include "Monitor.h"
// unique_ptr std::unique_ptr
class LCD_Monitor : public Monitor {
 public :
  LCD_Monitor() { std::cout << "LCD_Monitor constructor\n"; }
  ~LCD_Monitor() override { std::cout << "LCD_Monitor destructor\n"; }
};
