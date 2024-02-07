#include <memory>
#include <vector>
#pragma once

#include "DiscountCondition.h"
#include "Money.h"

class DiscountPolicy {
public:
    DiscountPolicy(std::vector<std::shared_ptr<DiscountCondition>> conditions);
    Money calculateDiscountAmount(Screening& screening);
    virtual ~DiscountPolicy() noexcept {}
protected:
    virtual Money getDiscountAmount(Screening& screening) = 0;
private:
    std::vector<std::shared_ptr<DiscountCondition>> conditions;
};
