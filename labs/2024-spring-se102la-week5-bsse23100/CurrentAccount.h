//
// Created by Dell on 26/02/2024.
//
# include <iostream>
#include<string>
#include "Account.h"
#ifndef INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_CURRENTACCOUNT_H
#define INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_CURRENTACCOUNT_H
class CurrentAccount:public Account{
public:
    double overdraftLimits;
    CurrentAccount(int accountNumber,const string& accountHolder,double balance,double overdraftLimits);
    bool checkOverdraft(double amount);
};
#endif //INC_2024_SPRING_SE102LA_WEEK5_BSSE23100_CURRENTACCOUNT_H
