//
// Created by Dell on 18/03/2024.
//
#include "Customer.h"
#include <iostream>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK8_BSSE23100_BANKACCOUNT_H
#define INC_2024_SPRING_SE102LA_WEEK8_BSSE23100_BANKACCOUNT_H

class BankAccount {
    Customer &accountHolder;
    double balance;
    string accountNumber;
public:
    BankAccount(Customer &holder, double initialBalance);

    string getAccountHolder() const;

    double getBalance() const;

    void setBalance(double finalBalance);

    void deposit(double amount);

    void withdraw(double amount);
};

#endif //INC_2024_SPRING_SE102LA_WEEK8_BSSE23100_BANKACCOUNT_H
