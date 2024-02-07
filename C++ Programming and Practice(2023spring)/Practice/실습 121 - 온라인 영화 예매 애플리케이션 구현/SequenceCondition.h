#include "DiscountCondition.h"
#pragma once

class SequenceCondition : public DiscountCondition {
 public:
  SequenceCondition(int seq);
  bool test(Screening& screening) override;
  virtual ~SequenceCondition() noexcept { }

 private:
  int sequence;
};