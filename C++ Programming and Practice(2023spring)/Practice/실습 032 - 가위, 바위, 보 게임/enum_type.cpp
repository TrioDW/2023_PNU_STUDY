#include <iostream>
using namespace std;

enum Choice {ROCK, PAPER, SCISSORS};

int main() {

  int num;
  cin >> num;

  switch(Choice(num)) {

    case ROCK:
      cout << "You chose rock. \n";
      cout << "The computer chose rock. \n";
      cout << "You tied! \n";
      break;

    case PAPER:
      cout << "You chose paper. \n";
      cout << "The computer chose scissors. \n";
      cout << "The computer won! \n";
      break;

    case SCISSORS:
      cout << "You chose scissors. \n";
      cout << "The computer chose paper. \n";
      cout << "You won! \n";
      break;

    default:
      break;
  }
  return 0;
}
