//
// Created by Dell on 26/02/2024.
//
# include <iostream>
#include<string>
#include "Account.h"
#ifndef INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_FIXEDDEPOSITACCOUNT_H
#define INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_FIXEDDEPOSITACCOUNT_H
class FixedDepositAccount:public Account{
public:
    int fdPeriod;
    double fdInterestRate;
    FixedDepositAccount(int accountNumber,const string& accountHolder,double balance,int fdPeriod,double fdInterestRate);
    void calculateInterest();
    bool prematureWithdrawal();

};
#endif //INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_FIXEDDEPOSITACCOUNT_H
