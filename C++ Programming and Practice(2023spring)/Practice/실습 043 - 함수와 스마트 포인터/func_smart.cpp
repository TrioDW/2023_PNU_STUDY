#include <iostream>
#include <vector>
#include <memory>
using namespace std;

struct STUDENT {
  string name;
  int age;
};

unique_ptr<STUDENT> createStudent (string name, int age) {
  auto student = unique_ptr<STUDENT> (new STUDENT());
  student->name = name;
  student->age = age;

  return student;
}

void printStudentInfo(const STUDENT& student) {
  cout << student.name << " " << student.age << "\n";
}

int main() {
  int N, age;
  string name;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> name >> age;
    auto student = createStudent(name, age);
    printStudentInfo(*student);
  }

  return 0;
}
