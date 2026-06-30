//
// Created by Dell on 26/02/2024.
//

#include "CurrentAccount.h"
CurrentAccount::CurrentAccount(int accountNumber,const string& accountHolder,double balance,double overdraftLimits){
    this->accountNumber=accountNumber;
    this->accountHolder=accountHolder;
    this->balance=balance;
    this->overdraftLimits=overdraftLimits;
}
bool CurrentAccount::checkOverdraft(double amount){
    if(overdraftLimits>=amount){
        return true;
    }
    else{
        return false;
    }
}