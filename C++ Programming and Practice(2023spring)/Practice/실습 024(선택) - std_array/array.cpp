#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
  array<int, 10> arr;

  for (auto &iter : arr)
    cin >> iter;

  auto min = *min_element(begin(arr), end(arr));
  auto max = *max_element(begin(arr), end(arr));

  cout << max << " " << min;
  return 0;
}