#include "PercentDiscountPolicy.h"
using namespace std;

PercentDiscountPolicy::PercentDiscountPolicy(double percent,
                                             vector<shared_ptr<DiscountCondition>> discountCondition)
                                             : DiscountPolicy{move(discountCondition)}, percent{percent} { }

Money PercentDiscountPolicy::getDiscountAmount(Screening &screening) {
  return screening.getMovieFee().times(percent);
}