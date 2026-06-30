//
// Created by Dell on 12/05/2024.
//

#include "TollBooth.h"

TollBooth::TollBooth() {}

TollBooth::TollBooth(string boothId) {
    this->boothId = boothId;
}

string TollBooth::getBoothId() {
    return boothId;
}

void TollBooth::takeTax(Vehicle *vehicle, double distance, bool checkPeakHour) {
    double tax;
    tax = vehicle->calculateTollTax(distance, checkPeakHour);
    cout << "tax =  " << tax << endl;
    string method;
    cout << "enter payment method(cash,card,M-TAG)" << endl;
    cin >> method;
    //payment->setPaymentType(method);
    payment = new Payment(method);
    payment->makePayment();
}

TollBooth::~TollBooth() {}