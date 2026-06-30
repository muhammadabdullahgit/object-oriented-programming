//
// Created by Dell on 16/04/2024.
//

#include "Sales.h"
Sales::Sales(int id, const string& customer, double amount)
        : transactionId(id), customerId(customer), amount(amount) {}
int Sales::getTransactionId()  {
    return transactionId;
}

string Sales::getCustomerId()  {
    return customerId;
}

double Sales::getAmount()  {
    return amount;
}