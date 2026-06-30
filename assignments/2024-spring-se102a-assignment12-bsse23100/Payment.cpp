//
// Created by Dell on 12/05/2024.
//

#include "Payment.h"

Payment::Payment() {}

Payment::Payment(string paymentType) {
    this->paymentType = paymentType;
}

void Payment::setPaymentType(string method) {
    paymentType = method;
}

string Payment::getPaymentType() {
    return paymentType;
}

void Payment::makePayment() {
    cout << "payment is done" << endl;
    cout << "payment method = " << paymentType << endl;
}