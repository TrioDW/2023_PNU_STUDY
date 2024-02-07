#include <iostream>
#include <algorithm>
#include <vector>
#include "Manager.h"
#pragma once
using namespace std;

class Department {
 public:
  Department(string name) : name_{name} { }

  void settingManager(Manager *pManager) { this->manager = pManager; }

  void addingEmployee(Employee* employee) { Employees.push_back(employee); }
  void removingEmployee(Employee* employee) {
    Employees.erase(remove(Employees.begin(), Employees.end(), employee));
  }

  void print() const {
    cout << name_ << "\n" << "    |---";
    manager->print();

    vector<Employee*> tmp = Employees;
    sort(tmp.begin(), tmp.end(), [] (Employee *Emp_1, Employee *Emp_2) {
      return Emp_1->getId() < Emp_2->getId();
    });

    for (auto employee : tmp) {
      cout << "    |---";
      employee->print();
    }
  }

 private:
  string name_;
  Manager *manager = nullptr;
  vector<Employee*> Employees;
};