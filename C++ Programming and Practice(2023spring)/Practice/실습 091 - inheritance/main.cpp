#include <iostream>
#include <string>
using namespace std;

class Person {
  string name ;
  int age ;
  string address ;
 public:
  Person(const string& theName, int theAge = 1, const string& theAddress = "") {
    name = theName;
    age = theAge;
    address = theAddress;
    cout << "Person is constructed!\n";
  }
  void print() {
    cout << "Person Name: " << this->name << "\n";
  }
  ~Person() {
    cout << "Person is destructed!\n";
  }
};

class Student : public Person {
  string schoolName ;
 public:
  Student(const string& theName, const string& theSchoolName) : Person(theName) {
    schoolName = theSchoolName;
    cout << "Student is constructed!\n";
  }
  ~Student() {
    cout << "Student is destructed!\n";
  }
  void print() {
    Person::print();
    cout << "School Name: " << this->schoolName << "\n";
  }
};

int main() {
  Person p1 {"Park"};
  p1.print();

  Student s1 {"Kim", "PNU"};
  s1.print();

  return 0;
}