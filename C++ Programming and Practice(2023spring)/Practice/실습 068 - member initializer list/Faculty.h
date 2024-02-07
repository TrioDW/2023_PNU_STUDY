#include <utility>
#include <string>
#pragma once
using namespace std;

class Faculty {
 public:
  Faculty(string name, int numFaculty, bool exist=true) : name{std::move(name)}, numFaculty{numFaculty}, exist{exist} {}

  void setExist(bool exist) { this->exist = exist; }
  bool getExist() const { return this->exist; }
  string getName() { return name; }
  int getNumFaculty() const { return numFaculty; }

 private:
  string name;
  int numFaculty;
  bool exist;
};



