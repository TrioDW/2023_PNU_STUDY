#include <string>
#include <ostream>
#pragma once

class Customer {
public:
    Customer() = default;
    Customer(long id, std::string name) : id (id), name(name) {}
    friend std::ostream &operator<<(std::ostream &os, const Customer &customer) {
        os << "id: " << customer.id << ", name: " << customer.name;
        return os;
    }

private:
    long id;
    std::string name;
};