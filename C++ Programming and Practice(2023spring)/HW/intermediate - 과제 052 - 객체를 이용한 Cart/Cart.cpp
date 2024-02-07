#include "Cart.h"
#include <iostream>
#include <algorithm>

void Cart::addItem(const Item &item) {
  items.push_back(item);
}

void Cart::deleteItem(int id) {
  for (auto& v : items) {
    if (v.getId() == id)
      items.erase(items.cbegin() + id);
  }
}

int Cart::checkout() {
  return checkout_->calculateTotalPrice(cbegin(), cend());
}

void Cart::viewItemDetails(int id, std::ostream &out) const {

  bool isFind = false;

  for (auto& v : items) {
    if (v.getId() == id) {
      isFind = true;
      out << "Item " << id << ": Name: " << v.getName() << "\nQuantity: " << v.getQuantity() << "\nPrice: " << v.getPrice() << "\n";
      break;
    }
  }

  if (! isFind)
    out << "Item not found.\n";
}

const_iterator Cart::cbegin() const {
  return items.begin();
}

const_iterator Cart::cend() const {
  return items.end();
}