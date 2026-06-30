#ifndef ACCOUNT_H
#define ACCOUNT_H

# include <iostream>
#include<string>
using namespace std;
class Account{
protected:
    int accountNumber;
     string accountHolder;
    double balance;
public:
    Account();
    Account(int accountNumber,const string& accountHolder, double balance);
    void deposit(double amount);
    bool withdraw(double amount);
    void setBalance(Account& account);
    double getBalance() const;
    friend ostream& operator<<(ostream& os, const Account& account);
    Account operator+(const Account& rhs)const ;
    Account operator-(const Account& rhs) const;
};
ostream& operator<<(ostream& os, const Account& account);

#endif