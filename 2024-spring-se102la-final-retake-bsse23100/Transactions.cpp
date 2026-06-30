//
// Created by Dell on 18/05/2024.
//

#include "Transactions.h"
Transactions::Transactions(){}
Transactions::Transactions(string payer, string receiver, double amount, int tax, string description){
    this->payer=payer;
    this->receiver=receiver;
    this->amount=amount;
    this->tax=tax;
    this->description=description;
}
string Transactions::getPayer(){
    return payer;
}
void Transactions::setPayer(double amount){
    this->amount=amount;
}
string Transactions::getReceiver(){
    return receiver;
}
void Transactions::setReceiver(string receiver){
    this->receiver=receiver;
}
double Transactions::getAmount(){
    return amount;
}
void Transactions::setAmount(double amount){
    this->amount=amount;
}
int Transactions::getTax(){return tax;}
void Transactions::setTax(int tax){this->tax=tax;}
string Transactions::getDescription(){return description;}
void Transactions::setDescription(string description){this->description=description;}