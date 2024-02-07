#include <cstddef>
#include <iostream>
using namespace std;

static int ID_ = 1;

class Person {
 public:
  Person(std::string name, size_t age) : name{name}, age{age}, ID{ID_++} { }

  friend std::ostream& operator << (std::ostream& out, const Person& p) {
    cout << p.ID << " " << p.name << " " << p.age;
    return out;
  }

  bool operator < (const Person& rhs) const {
    return ID < rhs.ID;
  }

  class ComparatorByAge {
   public:
    bool operator()(const Person& lhs, const Person& rhs) const{
      return lhs.age < rhs.age;
    }
  };

  class ComparatorByName {
   public:
    bool operator()(const Person& lhs, const Person& rhs) const {
      return lhs.name < rhs.name;
    }
  };

 private:
  long long ID;
  std::string name;
  size_t age;
};