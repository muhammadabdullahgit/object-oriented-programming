#include "BankAccount.h"
BankAccount::BankAccount(string& name, double& initialBalance) {
    ownerName=&name;
    balance=&initialBalance;
}
BankAccount::BankAccount( BankAccount& other) {
    ownerName=other.ownerName;
    balance=other.balance;
    cout<<"shallow copy done "<<endl;
}
BankAccount::BankAccount(BankAccount& other, bool deepCopy) {

    if(deepCopy){
        ownerName=new string(*other.ownerName);
        balance= new double (*other.balance);
        cout<<"deep copy done"<<endl;
        }
    else{
        ownerName=other.ownerName;
        balance=other.balance;
        cout<<"shallow copy done as you did not enter 1"<<endl;
    }

}
BankAccount::~BankAccount() {

}
string BankAccount::getOwnerName(){
    return *ownerName;
}
double BankAccount::getBalance(){
    return *balance;
}
void BankAccount::setOwnerName(string a){
    *ownerName= a;
}
void BankAccount:: setBalance(double b){
    *balance=b;
}
void BankAccount::display() {
    cout<<"owner name ="<<*ownerName<<endl;
    cout<<"balance ="<<*balance<<endl;
}
void q1() {
    string ownerName ;
    double initialBalance ;
    bool type=false;
    cout<<"enter owner name"<<endl;
    cin>>ownerName;
    cout<<"enter initial balance"<<endl;
    cin>>initialBalance;
    BankAccount account(ownerName, initialBalance);
    BankAccount account1(account);
    account.display();
    cout<<"enter (1) for deep copy otherwise (0)"<<endl;
    int x;
    cin>>x;
    if(x==1){
        type=true;
    }
    BankAccount account2(account, type);
    account.display();
}