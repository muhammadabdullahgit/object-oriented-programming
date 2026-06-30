//
// Created by Dell on 12/05/2024.
//

#include "TollManagement.h"

TollManagement *TollManagement::instance = nullptr;

TollManagement::TollManagement() {
    collectTrucksTax = 0;
    collectBusesTax = 0;
    collectCarsTax = 0;
    collectMotorcyclesTax = 0;
}

TollManagement *TollManagement::getInstance() {
    if (instance == nullptr) {
        instance = new TollManagement();
    }
    return instance;
}

void TollManagement::addTrucksTax(double amount) {
    collectTrucksTax += amount;
}

void TollManagement::addBusesTax(double amount) {
    collectBusesTax += amount;
}

void TollManagement::addCarsTax(double amount) {
    collectCarsTax += amount;
}

void TollManagement::addMotorcyclesTax(double amount) {
    collectMotorcyclesTax += amount;
}

double TollManagement::getCollectTrucksTax() {
    return collectTrucksTax;
}

double TollManagement::getCollectBusesTax() {
    return collectBusesTax;
}

double TollManagement::getCollectCarsTax() {
    return collectCarsTax;
}

double TollManagement::getCollectMotorcyclesTax() {
    return collectMotorcyclesTax;
}

void TollManagement::addTollBooth(TollBooth *booth) {
    tollBoth.push_back(booth);
    cout << endl;
    cout << "booth is added" << endl;
    cout << endl;
}

void TollManagement::removeTollBooth(string id) {
    for (int i = 0; i < tollBoth.size(); ++i) {
        if (id == tollBoth[i]->getBoothId()) {
            tollBoth.erase(tollBoth.begin() + i);
            cout << endl;
            cout << "booth is removed" << endl;
            cout << endl;
            return;
        } else {
            cout << "booth does not exists" << endl;
        }
    }
}

void TollManagement::displayTaxes() {
    cout << endl;
    cout << "trucks total collected taxes = " << collectTrucksTax << endl;
    cout << "buses total collected taxes = " << collectBusesTax << endl;
    cout << "cars total collected taxes = " << collectCarsTax << endl;
    cout << "motorcycles total collected taxes = " << collectMotorcyclesTax << endl;
    cout << endl;
}
