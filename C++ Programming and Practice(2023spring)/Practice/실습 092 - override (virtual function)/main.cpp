#include <iostream>
#include <memory>
#include <vector>
using namespace std;

class car {
 public:
  virtual void accelerate() {
    cout << "";
  }
};

class GV70 : public car {
  void accelerate() override {
    cout << "The speed of the gv70 has increased by 30 km/h.\n";
  }
};

class Grandeur : public car {
  void accelerate() override {
    cout << "The speed of the grandeur has increased by 20 km/h.\n";
  }
};

class Carnibal : public car {
  void accelerate() override {
    cout << "The speed of the carnibal has increased by 10 km/h.\n";
  }
};


unique_ptr<car> make_vehicle() {
  std::string choice;
  cin >> choice;
  if (choice == "gv70") return make_unique<GV70>();
  else if (choice == "grandeur") return make_unique<Grandeur>();
  else if (choice == "carnibal") return make_unique<Carnibal>();
  else make_unique<GV70>();
}

int main() {

  std::vector<unique_ptr<car>> test_vehicles;

  test_vehicles.push_back(make_vehicle()); //gv70
  test_vehicles.push_back(make_vehicle()); //grandeur
  test_vehicles.push_back(make_vehicle()); //carnibal

  for (auto& v : test_vehicles)
    (*v).accelerate();
}