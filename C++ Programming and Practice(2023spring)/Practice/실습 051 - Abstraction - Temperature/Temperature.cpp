#include <iostream>
#include <iomanip>
#include <sstream>
#include "Temperature.h"
using namespace std;

string Temperature::print() const {
  stringstream ss;
  ss << fixed;
  ss << setprecision(1);
  if (this->scale == FAHRENHEIT) {
    ss << this->temperature << " F\n";
  } else {
    ss << this->temperature << " C\n";
  }
  return ss.str();
}

Temperature::Temperature(double temp, SCALE scale) : temperature(temp), scale(scale) {}

Temperature Temperature::add(Temperature other) {

  if (this->scale != other.scale) {
    if (this->scale == CELSIUS)
      other.convertToCelsius();
    else
      other.convertToFahrenheit();
  }

  return Temperature {this->temperature + other.temperature, this->scale};
}

void Temperature::convertToCelsius() {
  this->temperature = (this->temperature - 32) * 5.0 / 9.0;
}

void Temperature::convertToFahrenheit() {
  this->temperature = (this->temperature * 1.8) + 32.0;
}