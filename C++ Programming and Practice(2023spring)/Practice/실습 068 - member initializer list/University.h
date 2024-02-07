#include "Department.h"
#pragma once
using namespace std;

class University {
 public:
  University(string name, int numDepartments, Department* departments= nullptr):name{std::move(name)}, numDepartments{numDepartments}, departments{departments} { }
  void setDepartments(Department* departments) {
    this->departments = departments;
  }
  void printInfo() {
    cout << "\n" << "University Name: " << name << "\n";
    cout << "Number of Departments: " << numDepartments << "\n";
    for(int i = 0 ; i < numDepartments ; i++)
      departments[i].printInfo();
  }

 private:
  string name;
  int numDepartments;
  Department* departments;
};
