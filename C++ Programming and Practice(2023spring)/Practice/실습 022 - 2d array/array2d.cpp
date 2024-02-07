#include <iostream>
using namespace std;

int main() {

  int M, N;
  cin >> M >> N;

  int arr[M][N];

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cin >> arr[i][j];
    }
  }

  int row_sum = 0;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      row_sum += arr[i][j];
    }
    cout << row_sum << " ";
    row_sum = 0;
  }

  cout << "\n";

  int column_sum = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      column_sum += arr[j][i];
    }
    cout << column_sum << " ";
    column_sum = 0;
  }

  return 0;
}