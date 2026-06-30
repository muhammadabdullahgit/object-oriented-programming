#include "Account.h"
Account::Account() {

}
Account::Account(int accountNumber,const string& accountHolder, double balance){
    this->accountNumber=accountNumber;
    this->accountHolder=accountHolder;
    this->balance=balance;
}
void Account::deposit(double amount){
    balance+=amount;
}
bool Account::withdraw(double amount){
    if(balance<amount){
        return false;
    }
    else{
        balance-=amount;
        return true;
    }
}
double Account::getBalance() const{
    return this->balance;
}
void Account::setBalance(Account& account) {
    balance=account.balance;
}
ostream& operator<<(ostream& os, const Account& account){
    os<<"(account number="<<account.accountNumber<<")"<<"       "
    <<"(account holder name="<<account.accountHolder<<")"<<"        "
    <<"(account holder balance="<<account.balance<<")"<<endl;
    return os;
}
Account Account::operator+(const Account& rhs)const {
    Account temp;
    temp.balance=balance+rhs.balance;
    return temp;

}
Account Account::operator-(const Account& rhs) const{
    Account temp;
    temp.balance=balance-rhs.balance;
    return temp;
}