//
// Created by Dell on 26/02/2024.
//
# include <iostream>
#include<string>
#include "Account.h"
using namespace std;
#ifndef INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_SAVINGSACCOUNT_H
#define INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_SAVINGSACCOUNT_H
class SavingsAccount:public Account{
public:
    Account account;
    double interestRate;
    SavingsAccount(int accountNumber,const string& accountHolder,double balance,double interestRate);
    void calculateInterest();
};
#endif //INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_SAVINGSACCOUNT_H
