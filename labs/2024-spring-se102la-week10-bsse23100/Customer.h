//
// Created by Dell on 16/04/2024.
//
# include <iostream>

using namespace std;

#include <vector>

#ifndef INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_CUSTOMER_H
#define INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_CUSTOMER_H


class Customer {
    int orderId;
    string customerId;
    string product;
    int quantity;

public:
    Customer(int id, const string &customer, const string &productName, int qty);

    int getOrderId();

    string getCustomerId();

    string getProduct();

    int getQuantity();
};


#endif //INC_2024_SPRING_SE102LA_WEEK10_BSSE23100_CUSTOMER_H
