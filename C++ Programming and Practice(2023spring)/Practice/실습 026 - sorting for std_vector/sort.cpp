#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int num;
  cin >> num;

  vector<int> v(num, 0);
  for(auto &i : v)
    cin >> i;

  sort(begin(v), end(v));

  for(auto &i : v)
    cout << i << " ";

  return 0;
}