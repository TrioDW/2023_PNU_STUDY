#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
  string name;
  double price;
  int quantity;
};

bool comp(Item &a, Item &b) {
  return a.price < b.price;
}

int main() {
  vector<Item> inventory = {
      {"Apple", 0.99, 10},
      {"Banana", 0.59, 20},
      {"Cherry", 1.49, 5},
      {"Dates", 2.99, 2},
      {"Elderberry", 3.99, 0},
      {"Fig", 2.49, 15},
      {"Grape", 0.79, 25},
      {"Honeydew", 1.29, 8},
      {"Indian Gooseberry", 2.99, 0},
      {"Jackfruit", 4.99, 1}
  };

  sort(inventory.begin(), inventory.end(), comp);
  for_each(inventory.begin(), inventory.end(), [] (const Item& item) {
    cout << item.name << " " << item.price << " " << item.quantity << "\n";
  });

  cout << "Item found: ";

  auto it = *find_if(inventory.begin(), inventory.end(), [] (const Item& item) {
    return item.name == "Grape";
  });
  cout << it.name << " " << it.price << " " << it.quantity << "\n";

  cout << "Number of expensive items: ";

  cout << count_if(inventory.begin(), inventory.end(), [] (const Item& item) {
    return 2.0 < item.price;
  }) << "\n";

  for_each(inventory.begin(), inventory.end(), [] (const Item& item) {

    if (item.quantity != 0)
      cout << item.name << " " << item.price << " " << item.quantity << "\n";
  });

  // remove_if
  return 0;
}
