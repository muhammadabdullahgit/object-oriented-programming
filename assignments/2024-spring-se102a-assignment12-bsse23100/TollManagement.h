//
// Created by Dell on 12/05/2024.
//
#include <iostream>
#include "TollBooth.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_TOLLMANAGEMENT_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_TOLLMANAGEMENT_H


class TollManagement {
    static TollManagement *instance;
    vector<TollBooth *> tollBoth;
    double collectTrucksTax;
    double collectBusesTax;
    double collectCarsTax;
    double collectMotorcyclesTax;

    TollManagement();

public:
    static TollManagement *getInstance();

    void addTrucksTax(double amount);

    void addBusesTax(double amount);

    void addCarsTax(double amount);

    void addMotorcyclesTax(double amount);

    double getCollectTrucksTax();

    double getCollectBusesTax();

    double getCollectCarsTax();

    double getCollectMotorcyclesTax();

    void addTollBooth(TollBooth *booth);

    void removeTollBooth(string id);

    void displayTaxes();
};


#endif //INC_2024_SPRING_SE102A_ASSIGNMENT12_BSSE23100_TOLLMANAGEMENT_H
