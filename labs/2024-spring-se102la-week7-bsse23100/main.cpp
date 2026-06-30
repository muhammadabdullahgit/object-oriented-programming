#include <iostream>
#include <sstream>
#include "Car.h"
#include "Sedan.h"
#include "SUV.h"
#include "SportsCar.h"
#include "ElectricCar.h"
#include "HybridCar.h"

using namespace std;

int main() {
    int x;
    cout << "enter  1 to Calculate Sedan Mileage" << endl;
    cout << "enter  2 to Calculate SUV Mileage" << endl;
    cout << "enter  3 to Calculate Sports Car Mileage" << endl;
    cout << "enter  4 to Calculate Electric Car Mileage" << endl;
    cout << "enter  5 to Calculate Hybrid Car Mileage" << endl;
    cout << "enter  6 to Compare Sedan and SUV based on Mileage" << endl;
    cout << "enter  7 to Compare Sports Car and Electric Car based on Mileage" << endl;
    cout << "enter  8 to Compare Hybrid Car and Sedan based on Mileage" << endl;
    cout << "enter  9 to Exit" << endl;
    cin >> x;
    switch (x) {
        case 1: {
            Sedan sedan(1500, 150);
            cout << "mileage of sedan : " << sedan.calculateMileage() << endl;
            break;
        }
        case 2: {
            SUV suv(2000, 200);
            cout << "mileage of SUV : " << suv.calculateMileage() << endl;
            break;
        }
        case 3: {
            SportsCar sportsCar(1200, 250);
            cout << "mileage of sportsCar : " << sportsCar.calculateMileage() << endl;
            break;
        }
        case 4: {
            ElectricCar electricCar(60);
            cout << "mileage of electricCar : " << electricCar.calculateMileage() << endl;
            break;
        }
        case 5: {
            HybridCar hybridCar(1800, 150, 30);
            cout << "mileage of hybridCar : " << hybridCar.calculateMileage() << endl;
            break;
        }
        case 6: {
            Car *sedanCar = new Sedan(1500, 150);
            Car *suvCar = new SUV(2000, 200);
            if (sedanCar->calculateMileage() < suvCar->calculateMileage()) {
                cout << "sedan has greater mileage" << endl;
            } else {
                cout << "SUV has greater mileage" << endl;
            }
            delete sedanCar;
            delete suvCar;
            break;
        }
        case 7: {
            Car *sC = new SportsCar(1200, 250);
            Car *eC = new ElectricCar(60);
            if (sC->calculateMileage() > eC->calculateMileage()) {
                cout << "sports car has lower mileage" << endl;
            } else {
                cout << "electric car has lower mileage" << endl;
            }
            delete sC;
            delete eC;
            break;
        }
        case 8: {
            Car *hC = new HybridCar(1800, 150, 30);
            Car *sedanCar = new Sedan(1600, 120);
            if (hC->calculateMileage() > sedanCar->calculateMileage()) {
                cout << "hybrid car has greater mileage" << endl;
            } else {
                cout << "sedan car has greater mileage" << endl;
            }
            delete hC;
            delete sedanCar;
            break;
        }
        case 9: {
            cout << "exiting this program" << endl;
            break;
        }
        default: {
            cout << "wrong key pressed in main menu" << endl;
            break;
        }

    }
}