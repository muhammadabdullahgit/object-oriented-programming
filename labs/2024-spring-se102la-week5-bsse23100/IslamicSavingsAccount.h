//
// Created by Dell on 26/02/2024.
//
# include <iostream>
#include<string>
#include "Account.h"
#ifndef INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_ISLAMICSAVINGSACCOUNT_H
#define INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_ISLAMICSAVINGSACCOUNT_H
class IslamicSavingsAccount:public Account{
public:
    double islamicProfitRate;
    IslamicSavingsAccount(int accountNumber,const string& accountHolder,double balance,double islamicProfitRate);
    void calculateIslamicProfit();
};
#endif //INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_ISLAMICSAVINGSACCOUNT_H
