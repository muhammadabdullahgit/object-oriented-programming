//
// Created by Dell on 26/02/2024.
//

#include "SavingsAccount.h"
SavingsAccount::SavingsAccount(int accountNumber,const string& accountHolder,double balance,double interestRate){
    this->accountNumber=accountNumber;
    this->accountHolder=accountHolder;
    this->balance=balance;
    this->interestRate=interestRate;
}
void SavingsAccount::calculateInterest(){
    interestRate = balance * (interestRate / 100);
}