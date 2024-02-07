#include "AmountDiscountPolicy.h"

AmountDiscountPolicy::AmountDiscountPolicy(Money discountAmount, std::vector<std::shared_ptr<DiscountCondition>> conditions)
    : DiscountPolicy{std::move(conditions)}, discountAmount(discountAmount)  {}

Money AmountDiscountPolicy::getDiscountAmount(Screening& screening){
    return discountAmount;
}