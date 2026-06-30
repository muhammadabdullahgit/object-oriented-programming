//
// Created by Dell on 18/05/2024.
//

#include "Invoice.h"
Invoice::Invoice(){}

Invoice::Invoice(string client, string period_start, string period_end, double amount, string description){
    this->client=client;
    this->period_start=period_start;
    this->period_end=period_end;
    this->amount=amount;
    this->description=description;
}

string Invoice::getClient(){
    return client;
}

void Invoice::setClient(string client){
    this->client=client;
}

string Invoice::getPeriod_start(){return period_start;}

void Invoice::setPeriod_start(string period_start){this->period_start=period_start;}

string Invoice::getPeriod_end(){return period_end;}

void Invoice::setPeriod_end(string period_end){this->period_end=period_end;}

double Invoice::getAmount(){return amount;}

void Invoice::setAmount(double amount){this->amount=amount;}

string Invoice::getDescription(){return description;}

void Invoice::setDescription(string description){this->description=description;}