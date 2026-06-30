//
// Created by Dell on 18/04/2024.
//

#include "Payment.h"

Payment::Payment() {}

Payment::Payment(double _price, const string &_transactionId, const string &_paymentMethod)
        : price(_price), transactionId(_transactionId), paymentMethod(_paymentMethod) {}

void Payment::displayPaymentInfo() {
    cout << "Payment Details - Price: $" << price << ", Transaction ID: " << transactionId
         << ", Payment Method: " << paymentMethod << endl;
}

double Payment::getPrice() {
    return price;
}

void Payment::setPaymentClassPrice(double p) {
    price = p;
}

string Payment::getTransactionId() {
    return transactionId;
}

void Payment::setPaymentClassTransactionId(std::string tm) {
    transactionId = tm;
}

string Payment::getPaymentMethod() {
    return paymentMethod;
}

void Payment::setPaymentClassPaymentMethod(std::string pm) {
    paymentMethod = pm;
}