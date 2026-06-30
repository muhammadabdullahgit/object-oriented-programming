//
// Created by Dell on 18/03/2024.
//
#include <iostream>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK8_BSSE23100_CUSTOMER_H
#define INC_2024_SPRING_SE102LA_WEEK8_BSSE23100_CUSTOMER_H

class Customer {
    string name;
public:
    Customer(const string &customerName);

    string getName() const;

};

#endif //INC_2024_SPRING_SE102LA_WEEK8_BSSE23100_CUSTOMER_H
