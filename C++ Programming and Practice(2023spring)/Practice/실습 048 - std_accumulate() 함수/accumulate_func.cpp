#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<double> vec;
  generate_n(back_inserter(vec), N, [] () {
    return *(istream_iterator<double>{cin});
  });

  double sum = accumulate(vec.begin(), vec.end(), 0.0);
  cout << sum;
  return 0;
}
