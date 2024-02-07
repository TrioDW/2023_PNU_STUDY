#include <iostream>
#include <string>
#include <tuple>

enum GRADE {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class Student {
 public:
  Student(std::string name, GRADE grade) : name(name), grade(grade) {}

  friend std::ostream& operator << (std::ostream& os, const Student& s){
    os << s.grade << "학년, " << s.name;
    return os;
  }

  friend class Compare;

  class Compare {
   public:
    bool operator() (Student &lhs, Student &rhs) {
      return lhs.grade < rhs.grade;
    }
  };

 private:
  std::string name;
  GRADE grade;
};