#include "Employee.h"
#pragma once
using namespace std;

class Manager : public Employee {
 public:
  Manager() = default;
  Manager(string name, int salary) : Employee(name, salary) { }

  void print() const override {
    cout << "Manager: ";
    Employee::print();
  }
};