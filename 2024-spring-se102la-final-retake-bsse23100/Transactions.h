//
// Created by Dell on 18/05/2024.
//
#include <iostream>
#include <fstream>

using namespace std;
#ifndef INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_TRANSACTIONS_H
#define INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_TRANSACTIONS_H


class Transactions {
    string payer;
    string receiver;
    double amount;
    int tax;
    string description;
public:
    Transactions();
    Transactions(string payer, string receiver, double amount, int tax, string description);
    string getPayer();
    void setPayer(double amount);
    string getReceiver();
    void setReceiver(string receiver);
    double getAmount();
    void setAmount(double amount);
    int getTax();
    void setTax(int tax);
    string getDescription();
    void setDescription(string description);

};


#endif //INC_2024_SPRING_SE102LA_FINAL_RETAKE_BSSE23100_TRANSACTIONS_H
