//
// Created by Dell on 16/04/2024.
//

#include "Customer.h"
Customer::Customer(int id, const string& customer, const string& productName, int qty)
        : orderId(id), customerId(customer), product(productName), quantity(qty) {}

int Customer::getOrderId()  {
    return orderId;
}

string Customer::getCustomerId()  {
    return customerId;
}

string Customer::getProduct()  {
    return product;
}

int Customer::getQuantity()  {
    return quantity;
}