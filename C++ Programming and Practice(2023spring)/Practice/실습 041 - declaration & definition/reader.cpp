#include <iostream>
#include <vector>
using namespace std;

extern std::vector<int> vec;

void read() {
  int N;
  cin >> N;

  int temp;
  for (int i = 0; i < N; i++) {
    cin >> temp;
    vec.push_back(temp);
  }
}