#include <iostream>
using namespace std;

class Student {
 public:
  Student();
  Student(int id, string name, int grade);
  bool operator < (const Student& other) const;
  friend std::ostream& operator << (std::ostream& os, const Student& s);
  int getId() const;
  std::string getName() const;
  int getGrade() const;

 private:
  int id_;
  string name_;
  int grade_;
};

bool compareByGrade(const Student& a, const Student& b);