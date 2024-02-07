#include <iostream>
#include <string>
#include <vector>
#include <functional>
using namespace std;

struct Champion {
  string name;
  int health;
  int attack;
};

auto findChampionMoreThanHealth(vector<Champion> champions, int health) {
  vector<Champion> result;
  for (auto& c : champions)
    if(c.health > health)
      result.push_back(c);
  return result;
}

auto findChampionMoreThanAttack(vector<Champion> champions, int attack) {
  vector<Champion> result;
  for (auto& c : champions)
    if(c.attack > attack)
      result.push_back(c);
  return result;
}

auto findChampionWithCondition(vector<Champion> champions, function<bool(Champion)> condition) {
  vector<Champion> result;
  for (auto& c : champions)
    if(condition(c))
      result.push_back(c);
  return result;
}

void printChampion(const vector<Champion> champions) {
  for (auto& c : champions)
    cout << c.name << " " << c.health << " " << c.attack << "\n";
}

vector<Champion> createChampion() {
  vector<Champion> champions;
  Champion tryndamere {"Tryndamere", 625, 72};
  Champion kled {"Kled", 740, 35};
  Champion garen {"Garen", 620, 66};
  champions.push_back(tryndamere);
  champions.push_back(kled);
  champions.push_back(garen);
  return champions;
}