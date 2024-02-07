#include <iostream>
#pragma once
using namespace std;

class Employee {
 public:
  static int count;

  Employee() = default;
  Employee(string name, int salary) : name_(name), salary_(salary) { id_ = count++; }

  int getId() const { return id_; }

  virtual void print() const {
    cout << name_ << " " << id_ << " " << salary_ << "\n";
  }

 private:
  int id_;
  int salary_;
  string name_;
};

int Employee::count = 1;