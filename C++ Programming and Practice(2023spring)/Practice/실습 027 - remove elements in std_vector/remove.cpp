#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> v(N);
  for(auto &i : v)
    cin >> i;

  int M, O;
  cin >> M;
  cin >> O;

  v.erase(v.begin() + M);

  auto temp = remove(v.begin(), v.end(), O);
  int len = temp - v.begin();

  cout << len << "\n";

  for(int i = 0; i < len; i++)
    cout << v[i] << " ";

  return 0;
}