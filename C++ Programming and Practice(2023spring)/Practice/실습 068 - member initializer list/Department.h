#include <utility>
#include <iostream>
#include "Faculty.h"
#pragma once
using namespace std;

class Department {
 public:
  Department(string name, Faculty* faculty=nullptr) : name{std::move(name)}, faculty{faculty} { }
  void setFaculty(Faculty* p_faculty) {
    this->faculty = new Faculty(p_faculty->getName(), p_faculty->getNumFaculty());
    p_faculty->setExist(false);
  }
  void printInfo() {
    cout << "\n" << "Department Name: " << name << "\n";
    cout << "Faculty Name: " << ((faculty != nullptr && faculty->getExist()) ? faculty->getName() : "N/A") << "\n";
    cout << "Number of Faculty Members: " << ((faculty != nullptr && faculty->getExist()) ? to_string(faculty->getNumFaculty()) : "N/A") << "\n";
  }

 private:
  string name;
  Faculty* faculty;
};