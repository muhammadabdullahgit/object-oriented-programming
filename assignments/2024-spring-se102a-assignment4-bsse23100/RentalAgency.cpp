//
// Created by Dell on 22/02/2024.
//

#include "RentalAgency.h"

RentalAgency::RentalAgency() {
    CarCount = 0;
    CustomerCount = 0;
}

void RentalAgency::addCar(string carMake, string carModel, string carLicensePlate) {
    Car car(carMake, carModel, carLicensePlate);
    if (CarCount < MAX_CARS) {
        CarCount += 1;
        Cars[CarCount] = car;
        cout << "car is added" << endl;
    } else {
        cout << "no space to add more car" << endl;
    }
}

void RentalAgency::addCustomer(string customerName) {
    Customer customer(customerName);
    if (CustomerCount < MAX_CUSTOMERS) {
        CustomerCount += 1;
        Customers[CustomerCount] = customer;
        cout << "customer is added" << endl;
    } else {
        cout << "no space to add more customers" << endl;
    }
}

void RentalAgency::rentCar(string licensePlate, string customerName) {
    for (int i = 0; i < CarCount; ++i) {
        if (Cars[i].getCarLicensePlate() == licensePlate && Customers[i].getName() == customerName) {
            if (Cars[i].isAvailable()) {
                Customers[i].rentCar(Cars[i]);
                CarCount-=1;
                cout << "car is given to rent" << endl;
                return;

            }
        }
    }
}

void RentalAgency::returnCar(string licensePlate, string customerName) {
    for (int i = 0; i < CarCount; ++i) {
        if (Cars[i].getCarLicensePlate() == licensePlate && Customers[i].getName() == customerName) {
            if (Cars[i].isAvailable()) {
                Customers[i].returnCar(Cars[i]);
                CarCount+=1;
                cout << "car is returned" << endl;
                return;
            }
        }
    }
}

int RentalAgency::getCustomerCount() {
    return CustomerCount;
}

int RentalAgency::getAvailableCarCount() {
    return CarCount;
}

int RentalAgency::getCustomerRentedCarCount(string CustomerName) {

    for (int i = 0; i < CustomerCount; ++i) {
        if (Customers[i].getName() == CustomerName) {
            return Customers[i].getCount();
        }
    }
    return CustomerCount;
}

void RentalAgency::displayAvailableCars(ostringstream &output) {
    for (int i = 0; i < MAX_CARS; ++i) {
        if (Cars[i].getMake() != "") {
            output << Cars[i].getMake() << " " << Cars[i].getModel()
                   << " (License Plate: " << Cars[i].getCarLicensePlate() << ")" << std::endl;
        }
    }
}

void RentalAgency::displayRentedCarsForCustomer(string CustomerName, ostringstream& output) {
    for (int i = 0; i < CustomerCount; ++i) {
        if (Customers[i].getName() == CustomerName&&Cars[i].getMake() != "") {
            output<<Customers[i].displayRentedCars();
        }
    }
}

RentalAgency RentalAgency::operator=(RentalAgency &other) {
    if (this != &other) {
        CarCount = other.CarCount;
        CustomerCount = other.CustomerCount;
        for (int i = 0; i < CarCount; ++i) {
            Cars[i] = other.Cars[i];
        }
        for (int i = 0; i < CustomerCount; ++i) {
            Customers[i] = other.Customers[i];
        }
    }
    return *this;
}