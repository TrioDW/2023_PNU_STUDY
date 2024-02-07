#include <iostream>
#include "Student.h"
using namespace std;

Student::Student() { }

Student::Student(int id, string name, int grade) : id_(id), name_(name), grade_(grade) { }

bool Student::operator < (const Student& other) const {
  return name_ < other.name_;
}

bool compareByGrade(const Student& a, const Student& b) {
  return a.getGrade() > b.getGrade();
}

std::ostream& operator << (std::ostream& os, const Student& s) {
  cout << "Id: " << s.id_ << " Name: " << s.name_ << " Grade: " << s.grade_;
  return os;
}

int Student::getId() const { return id_; }

std::string Student::getName() const { return name_; }

int Student::getGrade() const { return grade_; }