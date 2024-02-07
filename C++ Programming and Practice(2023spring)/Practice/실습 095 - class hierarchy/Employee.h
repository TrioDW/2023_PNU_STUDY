#include <iostream>
using namespace std;

class Employee {
 public:
  Employee(string name, int salary) : name_(name), salary_(salary) {}
  virtual void print_report() const {
    cout << "Name: " << name_ << endl;
    cout << "Salary: " << salary_ << endl;
    cout << "Years of service: " << years_of_service_ << endl;
    cout << "Performance score: " << performance_score_ << endl;
  }
  string get_name() const {
    return name_;
  }
 protected:
  string name_;
  int salary_;
  int years_of_service_ = 0;
  int performance_score_ = 0;
};

class Manager : public Employee {
 public :
  string department_;
  Manager(string name, int salary, string department) : Employee(name, salary), department_(department) { }

  void set_goals() { cout << "Set goals for " << department_ << "\n"; }
  void print_report() const override {
    Employee::print_report();
    cout << "Department: " << department_ << "\n";
  }
};

class Programmer : public Employee {
 public:
  string language_;
  Programmer(string name, int salary, string language) : Employee(name, salary), language_(language) {
    performance_score_ = 10;
  }
  void write_code() { cout << "Writing code in " << language_ << "\n"; }
  void print_report() const override {
    Employee::print_report();
    cout << "Language: " << language_ << "\n";
  }
};

class Salesperson : public Employee {
 public:
  int revenue_;
  Salesperson(string name, int salary, int revenue) : Employee(name, salary), revenue_(revenue) {
    performance_score_ = 20;
  }
  void sell() { cout << "Selling products, generated " << revenue_ << " in revenue\n"; }
  void print_report() const override {
    Employee::print_report();
    cout << "Sales: " << revenue_ << "\n";
  }
};