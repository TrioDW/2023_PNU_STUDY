#include <iostream>
#include <map>
using namespace std;

int main() {

  int N;
  cin >> N;

  map<string, string> phonebook;

  string name, phonenum;

  for (int i = 0; i < N; i++) {
    cin >> name >> phonenum;
    phonebook.insert(make_pair(name, phonenum));
  }

  while (true) {
    cin >> name;

    if (name == "QUIT")
      break;

    if (phonebook.find(name) == phonebook.end())
      cout << "NOT FOUND \n";
    else
      cout << phonebook[name] << "\n";
  }
  return 0;
}
