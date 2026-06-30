//
// Created by Dell on 12/05/2024.
//
#include <iostream>
#include "Vehicle.h"
#include "Payment.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_TOLLBOOTH_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_TOLLBOOTH_H


class TollBooth {
    string boothId;
    Payment *payment;

public:
    TollBooth();

    TollBooth(string boothId);

    string getBoothId();

    void takeTax(Vehicle *vehicle, double distance, bool checkPeakHour);

    ~TollBooth();
};


#endif //INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_TOLLBOOTH_H
