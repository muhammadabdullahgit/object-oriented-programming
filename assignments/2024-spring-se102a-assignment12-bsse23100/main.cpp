#include <iostream>
#include "TollManagement.h"
#include "TollBooth.h"
#include "Payment.h"
#include "Vehicle.h"
#include "Trucks.h"
#include "Buses.h"
#include "Cars.h"
#include "Motorcycles.h"

using namespace std;

int main() {
    TollManagement *tollManagement = TollManagement::getInstance();
    Vehicle *vehicle;
    TollBooth tollBooth("100");
    int x;
    do {
        cout << "enter  1 for truck toll" << endl;
        cout << "enter  2 for buses toll" << endl;
        cout << "enter  3 for cars toll" << endl;
        cout << "enter  4 for motorcycles toll" << endl;
        cout << "enter  5 to check total collected taxes" << endl;
        cout << "enter  6 to add more booth" << endl;
        cout << "enter  7 to remove both" << endl;
        cout << "enter  8 for (VIP,emergency,ETC)vehicle" << endl;
        cout << "enter  9 to exit" << endl;
        cin >> x;
        switch (x) {
            case 1: {
                string id;
                bool checkPeakHour;
                int distance;
                cout << "enter distance" << endl;
                cin >> distance;
                cout << "enter truck id" << endl;
                cin >> id;
                int y;
                cout << "enter 1 for peak hour otherwise 0" << endl;
                cin >> y;
                if (y == 1) {
                    checkPeakHour = true;
                } else {
                    checkPeakHour = false;
                }
                Trucks trucks(id, checkPeakHour);
                vehicle = &trucks;
                double amount;
                amount = vehicle->calculateTollTax(distance, checkPeakHour);
                tollBooth.takeTax(vehicle, distance, checkPeakHour);
                tollManagement->addTrucksTax(amount);
                break;
            }
            case 2: {
                string id;
                bool checkPeakHour;
                int distance;
                cout << "enter distance" << endl;
                cin >> distance;
                cout << "enter bus id" << endl;
                cin >> id;
                int y;
                cout << "enter 1 for peak hour otherwise 0" << endl;
                cin >> y;
                if (y == 1) {
                    checkPeakHour = true;
                } else {
                    checkPeakHour = false;
                }
                Buses buses(id, checkPeakHour);
                vehicle = &buses;
                double amount;
                amount = vehicle->calculateTollTax(distance, checkPeakHour);
                tollBooth.takeTax(vehicle, distance, checkPeakHour);
                tollManagement->addBusesTax(amount);
                break;
            }
            case 3: {
                string id;
                bool checkPeakHour;
                int distance;
                cout << "enter distance" << endl;
                cin >> distance;
                cout << "enter Car id" << endl;
                cin >> id;
                int y;
                cout << "enter 1 for peak hour otherwise 0" << endl;
                cin >> y;
                if (y == 1) {
                    checkPeakHour = true;
                } else {
                    checkPeakHour = false;
                }
                Cars cars(id, checkPeakHour);
                vehicle = &cars;
                double amount;
                amount = vehicle->calculateTollTax(distance, checkPeakHour);
                tollBooth.takeTax(vehicle, distance, checkPeakHour);
                tollManagement->addCarsTax(amount);
                break;
            }
            case 4: {
                string id;
                bool checkPeakHour;
                int distance;
                cout << "enter distance" << endl;
                cin >> distance;
                cout << "enter Motorcycle id" << endl;
                cin >> id;
                int y;
                cout << "enter 1 for peak hour otherwise 0" << endl;
                cin >> y;
                if (y == 1) {
                    checkPeakHour = true;
                } else {
                    checkPeakHour = false;
                }
                Motorcycles motorcycles(id, checkPeakHour);
                vehicle = &motorcycles;
                double amount;
                amount = vehicle->calculateTollTax(distance, checkPeakHour);
                tollBooth.takeTax(vehicle, distance, checkPeakHour);
                tollManagement->addMotorcyclesTax(amount);
                break;
            }
            case 5: {
                tollManagement->displayTaxes();
                break;
            }
            case 6: {
                string boothId;
                cout << "enter booth id" << endl;
                cin >> boothId;
                TollBooth tollBooth1(boothId);
                tollManagement->addTollBooth(&tollBooth1);
                break;
            }
            case 7: {
                string boothId;
                cout << "enter booth id" << endl;
                cin >> boothId;
                tollManagement->removeTollBooth(boothId);
                break;
            }
            case 8: {
                cout << " You can go without paying " << endl;
                break;
            }
            case 9: {
                cout << " exiting " << endl;
                break;
            }
            default: {
                cout << "wrong key pressed in main menu" << endl;
                break;
            }
        }
    } while (x != 9);
    //Make a Menu Driven Program and Call your functions here
    return 0;
}
