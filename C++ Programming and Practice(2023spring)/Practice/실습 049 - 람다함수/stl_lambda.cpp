#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
  double N, X;
  cin >> N >> X;

  vector<double> vec;

  generate_n(back_inserter(vec), N, [&X] () {
    return *(istream_iterator<double>{cin});;
  });

  copy_if(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "), [=](int x){
    return x < X;
  });

  return 0;
}
