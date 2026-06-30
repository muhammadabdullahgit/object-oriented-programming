//
// Created by Dell on 12/05/2024.
//
#include <iostream>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_PAYMENT_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_PAYMENT_H


class Payment {
    string paymentType;
public:
    Payment();

    Payment(string paymentType);

    void setPaymentType(string method);

    string getPaymentType();

    void makePayment();
};


#endif //INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_PAYMENT_H
