#include <iostream>
using namespace std;

int main() {
  int num = 0, sum = 0;
  int max = -100, min = 100;

  while (cin >> num) {
    sum += 1;

    if (num > max)
      max = num;
    if (num < min)
      min = num;
  }

  cout << sum << " " << min << " " << max;

  return 0;
}
