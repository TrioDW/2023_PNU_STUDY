#include <memory>
#include "Faculty.h"
#include "Department.h"
#include "University.h"
using namespace std;

int main() {
  auto faculty = make_shared<Faculty>("Computer Science", 10);

  Department cse("Computer Science and Engineering", faculty.get());
  Department ibe("Information and Biomedical Engineering");
  ibe.setFaculty(faculty.get());

  Department depts[3] = {Department("Math"), ibe, cse };
  University univ("Pusan National University", 3);
  univ.setDepartments(depts);

  univ.printInfo();

  return 0;
}