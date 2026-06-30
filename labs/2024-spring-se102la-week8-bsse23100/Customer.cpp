//
// Created by Dell on 18/03/2024.
//

#include "Customer.h"

Customer::Customer(const string &customerName) {
    this->name = customerName;
}

string Customer::getName() const {
    return name;
}