#pragma once

class Screening;

class DiscountCondition {
public:
    virtual bool test(Screening& screening) = 0;
    virtual ~DiscountCondition() noexcept {}
};
