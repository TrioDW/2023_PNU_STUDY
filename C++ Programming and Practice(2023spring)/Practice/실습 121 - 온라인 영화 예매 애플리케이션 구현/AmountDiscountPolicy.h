#include <vector>
#include "DiscountPolicy.h"
#pragma once

class AmountDiscountPolicy : public DiscountPolicy {
public:
    AmountDiscountPolicy(Money discountAmount, std::vector<std::shared_ptr<DiscountCondition>> conditions);
    virtual ~AmountDiscountPolicy() noexcept {}
protected:
    Money getDiscountAmount(Screening& screening) override ;
private:
    Money discountAmount;
};
