#include <iostream>
#include <vector>
#include "IOrganization.h"
#pragma once
// id id id id id id id id
class Organization : public IOrganization {
 public:
  Organization(string name) : name_(name) { }

  bool moveEmp(sDept &from_department, sDept &to_department, sEmp emp) override {
    from_department->removingEmployee(emp.get());
    to_department->addingEmployee(emp.get());
  }

  void print() const override {
    std::cout << "Organization: " << name_ << "\n";
    for (auto myDepartment : Departments)
      myDepartment->print();
  }

  void addDept(sDept myDept) override { Departments.push_back(myDept); }

  void setDeptManager(sDept myDept, sManager myMng) override { myDept->settingManager(myMng.get()); }

  void addEmpToDept(sDept myDept, sEmp myEmp) override { myDept->addingEmployee(myEmp.get()); }

 private:
  string name_;
  vector<std::shared_ptr<Department>> Departments;
};