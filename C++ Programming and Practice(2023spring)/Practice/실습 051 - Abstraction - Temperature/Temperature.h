#include <iostream>
using namespace std;

enum SCALE {
  CELSIUS,
  FAHRENHEIT
};

class Temperature {
 public:
  Temperature(double temp, SCALE scale=CELSIUS);
  Temperature add(Temperature other);
  string print() const;
 private:
  void convertToCelsius();
  void convertToFahrenheit();
 private:
  double temperature;
  SCALE scale;
};