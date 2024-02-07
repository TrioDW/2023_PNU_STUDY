#include <ctime>
#include <ostream>
#include "Customer.h"
#include "Money.h"
#include "Movie.h"
#include "Reservation.h"
#pragma once

class Screening : public std::enable_shared_from_this<Screening> {
public:
    Screening(Movie movie, int sequence, std::tm whenScreened);
    std::tm getStartTime();
    bool isSequence(int sequence) ;
    Money getMovieFee();
    Reservation reserve(Customer customer, int audienceCount);
    friend std::ostream &operator<<(std::ostream &os, const Screening &screening);
private:
    Money calculateFee(int audienceCount);
private:
    Movie movie;
    int sequence;
    std::tm whenScreened;
};
