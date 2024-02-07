#include "Person.h"
#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;

map<string, Person> persons;

void addPerson(const string& name, const string& number) {
  if (! persons.count(name)) {
    Person p = {name, number};
    pair<string, Person> data = {name, p};
    persons.insert(data);
  }
}

void deletePerson(const string& name) {
  auto it = persons.find(name);
  if (it != persons.end())
    persons.erase(it);
}

int main() {

  int N; cin >> N;

  string name; string number;
  for (int i = 0; i < N; i++) {
    cin >> name >> number;
    addPerson(name, number);
  }

  string temp; cin >> temp;
  while(true) {
    if (temp == "ADD") {
      cin >> name >> number;
      addPerson(name, number);
    } else if (temp == "DEL") {
      cin >> name;
      deletePerson(name);
    } else if (temp == "MOD") {
      cin >> name >> number;
      auto it = persons.find(name);
      if (it != persons.end())
        it->second.modifyNumber(number);
    } else if (temp == "FIN") {
      cin >> name;
      auto it = persons.find(name);
      if (it != persons.end())
        cout << it->second.getName() << " " << it->second.getNumber() << "\n";
    } else if (temp == "QUI") {
      for (auto& [name, person] : persons)
        person.print();
      break;
    }
    cin >> temp;
  }

}
