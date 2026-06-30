//
// Created by Dell on 18/04/2024.
//
#include<iostream>
#include <vector>

using namespace std;
#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PAYMENT_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PAYMENT_H

class Payment {
    double price;
    string transactionId;
    string paymentMethod;
public:
    Payment();

    Payment(double _price, const string &_transactionId, const string &_paymentMethod);

    void displayPaymentInfo();

    double getPrice();

    void setPaymentClassPrice(double p);

    string getTransactionId();

    void setPaymentClassTransactionId(string tm);

    string getPaymentMethod();

    void setPaymentClassPaymentMethod(string pm);
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PAYMENT_H
