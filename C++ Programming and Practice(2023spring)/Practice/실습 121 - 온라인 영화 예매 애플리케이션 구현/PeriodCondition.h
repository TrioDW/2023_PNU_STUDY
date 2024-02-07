#include "DiscountCondition.h"
#pragma once

enum DayOfWeek {SUN=0, MON, TUE, WEN, THU, FRI, SAT};
class PeriodCondition : public DiscountCondition {
public:
    PeriodCondition(DayOfWeek dayOfWeek, std::tm startTime, std::tm endTime);
    bool test(Screening& screening) override;
    virtual ~PeriodCondition() noexcept {}
private:
    DayOfWeek dayOfWeek;
    std::tm startTime;
    std::tm endTime;
};
