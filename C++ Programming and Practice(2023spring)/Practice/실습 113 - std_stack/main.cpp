#include <iostream>
#include <stack>
using namespace std;

int main() {

  int N; cin >> N;
  stack<int> stk;

  string instr; int temp;
  for (int i = 0; i < N; i++) {
    cin >> instr;
    if (instr == "push") {
      cin >> temp;
      stk.push(temp);
    } else if (instr == "size") {
      cout << stk.size() << "\n";
    } else if (instr == "pop")
      if (stk.size() <= 0) {
        cout << "-1\n";
      } else {
        cout << stk.top() << "\n";
        stk.pop();
      } else if (instr == "empty") {
        if (stk.size() == 0)
          cout << "1\n";
        else
          cout << "0\n";
      }

  }
  return 0;
}