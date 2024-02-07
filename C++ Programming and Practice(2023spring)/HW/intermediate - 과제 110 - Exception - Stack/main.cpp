#include <iostream>
#include "Stack.h"

int main() {

  int N; std::cin >> N;

  switch(N) {
    case 1:
      Stack<char> stack (1);
      stack.push('a');
      stack.pop(); stack.pop();
      stack.print();
      break;

//    case 2:
//      Stack<char> stack (1);
//      stack.push('a');
//      stack.push('b');
//      stack.print();
//      break;
//
//    case 3:
//      Stack<int> stack(1);
//      stack.push(1);
//      stack.pop();
//      stack.push(2);
//      stack.print();
//      stack.pop();
//      break;
//
//    case 4:
//      Stack<int> stack(2);
//      stack.push(1); stack.push(2);
//      stack.pop();    stack.pop();
//      stack.push(3);
//      stack.print();
  }

  return 0;
}
