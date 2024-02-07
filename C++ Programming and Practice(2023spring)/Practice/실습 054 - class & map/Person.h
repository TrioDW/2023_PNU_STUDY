#include <string>
using namespace std;

class Person {
 public:
  Person(const string& name,const string& number);
  void modifyNumber(const string& number);
  void print() const;
  string getName() const;
  string getNumber() const;

 private:
  string name;
  string number;
};