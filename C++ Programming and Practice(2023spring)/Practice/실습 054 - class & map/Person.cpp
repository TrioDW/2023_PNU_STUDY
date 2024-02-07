#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(const string& name, const string& number) : name(name), number(number) {}


void Person::modifyNumber(const string& number) {
  this->number = number;
}

void Person::print() const {
  cout << name << " " << number << "\n";
}

string Person::getName() const {
  return name;
}

string Person::getNumber() const {
  return number;
}