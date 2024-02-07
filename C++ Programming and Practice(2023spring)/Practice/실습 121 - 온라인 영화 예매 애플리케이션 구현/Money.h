#pragma once

class Money {
public:
    Money() = default;
    explicit Money (long amount) : amount(amount) {}
    explicit Money (double amount) : amount(amount) {}
    operator long () const {
        return amount;
    }
    Money operator + (const Money& rhs) const {
        return Money (amount + rhs.amount);
    }
    Money operator - (const Money& rhs) const {
        return Money (amount - rhs.amount);
    }
    bool operator < (const Money& rhs) const {
        return amount < rhs.amount;
    }
    bool operator > (const Money& rhs) const {
        return amount > rhs.amount;
    }
    Money times(double percent) {
        return Money(amount * percent);
    }
private:
    long amount=0;
};
