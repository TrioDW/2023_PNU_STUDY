#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<vector<int>> v (N);

  int num;
  int ans;
  for (int i = 0; i < N; i++) {
    cin >> num;

    for (int j = 0; j < num; j++) {
      cin >> ans;
      v[i].push_back(ans);
    }
  }

  for (int i = 0; i < M; i++) {
    int a, b;
    cin >> a >> b;
    cout << v[a][b] << "\n";
  }

  return 0;
}