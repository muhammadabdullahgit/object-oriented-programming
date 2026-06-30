//
// Created by Dell on 18/05/2024.
//

#include "Client.h"
Client::Client(){}
Client::Client(string name,double taxAmount,double remainingAmount){
    this->name=name;
    this->taxAmount=taxAmount;
    this->remainingAmount=remainingAmount;
}
void Client::setName(string name){this->name=name;}
void Client::setTaxAmount( double taxAmount){this->taxAmount=taxAmount;}
void Client::setRemainingAmount(double remainingAmount){this->remainingAmount=remainingAmount;}
string Client::getName(){return name;}
double Client::getTaxAmount(){return taxAmount;}
double Client::getRemainingAmount(){return remainingAmount;}
void  Client::display(){
    cout<<"name ="<<name<<endl;
    cout<<"tax amount ="<<taxAmount<<endl;
    cout<<"remaining amount ="<<remainingAmount<<endl;
}
void  Client::calculateTax(double amount){
    if(amount>=0&&amount<=600000){
        remainingAmount-=0;
    }
    if(amount>=600000&&amount<=1200000){
        double newAmount=((amount/100)*2.5);
        remainingAmount-=newAmount;
    }
}