//
// Created by Dell on 26/02/2024.
//

#include "IslamicSavingsAccount.h"
IslamicSavingsAccount::IslamicSavingsAccount(int accountNumber,const string& accountHolder,double balance,double islamicProfitRate){
    this->accountNumber=accountNumber;
    this->accountHolder=accountHolder;
    this->balance=balance;
    this->islamicProfitRate=islamicProfitRate;
}
void IslamicSavingsAccount::calculateIslamicProfit(){
    islamicProfitRate = balance * (islamicProfitRate / 100);
    balance+=islamicProfitRate;
}