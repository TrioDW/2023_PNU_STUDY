#include <vector>
#include "Screening.h"
#include "DiscountPolicy.h"
using namespace std;

class PercentDiscountPolicy : public DiscountPolicy {
 public:
  PercentDiscountPolicy(double percent, vector<shared_ptr<DiscountCondition>> discountCondition);
  virtual ~PercentDiscountPolicy() noexcept override { }

 protected:
  Money getDiscountAmount(Screening& screening) override;

 private:
  double percent;
};