#include "Checkout.h"
#include <vector>
#include <string>
using namespace std;

int Checkout::calculateTotalPrice(vector<Item>::const_iterator begin,
                                  vector<Item>::const_iterator end) const {
  int sumOfMyPrice = 0;
  for(auto iterator = begin; iterator < end; iterator++) {
    sumOfMyPrice += (iterator->getPrice() * iterator->getQuantity());
  }

  switch(discountCode) {
    case NO_DISCOUNT:
      return sumOfMyPrice;
    case DISCOUNT_20:
      return sumOfMyPrice * 0.8;
    case DISCOUNT_50:
      return sumOfMyPrice * 0.5;
    default:
      break;
  }
}

void Checkout::setDiscountCode(DiscountCode discountCode) {
  this->discountCode = discountCode;
}

void Checkout::setShippingAddress(const string &shippingAddress) {
  this->shippingAddress = shippingAddress;
}

// hello world ! hello world !
// I want to submit my cpp homework code ...