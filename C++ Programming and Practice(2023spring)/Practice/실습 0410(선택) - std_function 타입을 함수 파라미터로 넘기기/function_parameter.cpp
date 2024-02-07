#include <iostream>
#include "Champion.h"
using namespace std;

int main() {
  string str;
  cin >> str;

  vector<Champion> champions = createChampion();

  if (str.substr(0, 6) == "health") {
    int health = stoi(str.substr(7, 10));

    function<bool(Champion)> condition1 = [health] (Champion c) { return c.health > health; };
    auto result1 = findChampionWithCondition(champions, condition1);
    printChampion(result1);
  }
  else {
    int attack = stoi(str.substr(7, 9));

    function<bool(Champion)> condition2 = [attack] (Champion c) { return c.attack > attack; };
    auto result2 = findChampionWithCondition(champions, condition2);
    printChampion(result2);
  }

  return 0;
}
