#include <iostream>
#include <vector>
using namespace std;

int main() {

  int N;
  cin >> N;

  vector<int> vec(N);

  for (auto &i : vec)
    cin >> i;

  int sum = 0;
  for(int i = 0; i < N; i++)
    sum += vec[i];

  cout << sum;

  return 0;
}
