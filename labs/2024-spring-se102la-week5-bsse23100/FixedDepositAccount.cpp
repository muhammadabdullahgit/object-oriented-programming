//
// Created by Dell on 26/02/2024.
//

#include "FixedDepositAccount.h"
FixedDepositAccount::FixedDepositAccount(int accountNumber,const string& accountHolder,double balance,int fdPeriod,double fdInterestRate){
    this->accountNumber=accountNumber;
    this->accountHolder=accountHolder;
    this->balance=balance;
    this->fdPeriod=fdPeriod;
    this->fdInterestRate=fdInterestRate;
}
void FixedDepositAccount::calculateInterest(){
    fdInterestRate = balance * (fdInterestRate / 100);
}
bool FixedDepositAccount::prematureWithdrawal(){
if(fdPeriod>=10){
    return false;
}
else{
    return true;
}
}