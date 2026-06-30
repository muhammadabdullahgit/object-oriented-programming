//
// Created by Dell on 18/03/2024.
//
#include "BankAccount.h"
#include <iostream>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK8_BSSE23100_BANK_H
#define INC_2024_SPRING_SE102LA_WEEK8_BSSE23100_BANK_H

class Bank {
    static Bank *instance;

    Bank();

public:
    static Bank &getInstance();

    void transfer(BankAccount &fromAccount, BankAccount &toAccount, double amount);

};

#endif //INC_2024_SPRING_SE102LA_WEEK8_BSSE23100_BANK_H
