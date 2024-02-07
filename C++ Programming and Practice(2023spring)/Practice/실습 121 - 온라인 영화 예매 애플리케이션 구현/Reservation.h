#include <memory>
#include <ostream>
#include "Customer.h"
#include "Money.h"
#pragma once

class Screening;
class Reservation {
public:
    Reservation() = default;
    Reservation(Customer customer, std::shared_ptr<Screening> screening, Money fee, int audienceCount);
private:
public:
    friend std::ostream &operator<<(std::ostream &os, const Reservation &reservation);

private:
    Customer customer;
    std::shared_ptr<Screening> screening;
    Money fee;
    int audienceCount;
};