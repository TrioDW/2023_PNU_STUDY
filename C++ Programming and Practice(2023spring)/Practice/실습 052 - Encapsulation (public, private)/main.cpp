#include <iostream>
#include <iomanip>
#include "Excel.h"
using namespace std;

int main(){
  vector< vector<Cell> > data = {
      {Cell("name"), Cell("C++"), Cell("Java")},
      {Cell("Kim"), Cell(87), Cell(75.7)},
      {Cell("Lee"), Cell(90), Cell(80.6)},
      {Cell("Park"), Cell(70), Cell(90.0)}
  };
  Excel excel(data);

  cout << fixed;
  cout << setprecision(1);
  double score = excel.average(1, 1, 3, 1);
  cout << "C++ Avg. Score: " << score << endl;
  score = excel.average(1, 2, 3, 2);
  cout << "Java Avg. Score: " << score << endl;
}