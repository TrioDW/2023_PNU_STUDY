#include <map>
#include <string>
#include <memory>
#include <iostream>
using namespace std;

class Monster {
 public:
  Monster() = default;
  virtual ~Monster() = default;
  virtual unique_ptr<Monster> clone() = 0;
  virtual void roar() = 0;
};

class Dragon : public Monster {
 public:
  Dragon() = default;
  ~Dragon() override = default;
  unique_ptr<Monster> clone() override { return make_unique<Dragon>(*this); }
  void roar() override { cout << "Dragon roars!\n"; }
};

class Goblin : public Monster {
 public:
  Goblin() = default;
  ~Goblin() override = default;
  unique_ptr<Monster> clone() override { return make_unique<Goblin>(*this); }
  void roar() override { cout << "Goblin roars!\n"; }
};

map<string, unique_ptr<Monster>> monsterRegistry;

void loadMonsters() {
  // Read monster information from file (this is the costly operation)
  // Here, we just pretend to do it and create a Dragon and a Goblin
  monsterRegistry["Dragon"] = make_unique<Dragon>();
  monsterRegistry["Goblin"] = make_unique<Goblin>();
}

unique_ptr<Monster> spawnMonster(const string& type) {
  return monsterRegistry[type]->clone();
}

int main() {
  loadMonsters(); // load monster prototypes
  unique_ptr<Monster> dragon1 = spawnMonster("Dragon"); // clone from prototype
  dragon1->roar();
  unique_ptr<Monster> goblin1 = spawnMonster("Goblin"); // clone from prototype
  goblin1->roar();
  return 0;
}