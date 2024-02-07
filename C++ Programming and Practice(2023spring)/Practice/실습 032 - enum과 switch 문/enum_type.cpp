#include <iostream>
using namespace std;

enum Color {RED, GREEN, BLUE};

int main() {

  int num;
  cin >> num;

  switch (Color(num)) {

    case RED:
      cout << "It's red light!" << "\n";
      break;

    case BLUE:
      cout << "It's blue light!" << "\n";
      break;

    case GREEN:
      cout << "It's green light!" << "\n";
      break;

    default:
      cout << "what's this?" << num << "\n";
  }
  return 0;
}
