#include <string>
using namespace std;

class Vehicle {
 public:
  Vehicle();
  Vehicle(string name, int range, float batteryCapacity);
  Vehicle(string name, int range, bool hasFDS, float batteryCapacity);
  void autoPilot(bool onOff);
  void runFDS() const;
  void displayEfficiency() const;
 private:
  std::string name;
  int range;
  bool hasFDS;
  float batteryCapacity;
};