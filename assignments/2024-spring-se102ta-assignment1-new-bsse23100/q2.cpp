// q2.cpp
#include "q2.h"
#include <iostream>

using namespace std;

Car::Car(){
    licensePlate = "";
    make = "";
    model = "";
    parkingLocation = 0;
}
Car::Car(string licensePlate, string make, string model, int parkingLocation) {
    this->licensePlate=licensePlate;
    this-> make=make;
    this-> model=model;
    this-> parkingLocation=parkingLocation;
}


Car::~Car() {

}


Car addCar(string licensePlate, string make, string model, int parkingLocation) {
   cout<<"car details is entered "<<endl;
    return Car(licensePlate, make, model, parkingLocation);
}


void deleteCar(Car *&car,int &size) {
    cout << "enter car license plate number" << endl;
    string x;
    cin >> x;
    for (int i = 0; i < size; i++) {
        if (x == car[i].licensePlate) {
            swap(car[i],car[size-1]);
            size-=1;
        }
    }
}


void printCarDetails(Car &car) {
    cout<<" car licensePlate ="<<car.licensePlate<<endl;
    cout<<" car make ="<<car.make<<endl;
    cout<<" car model ="<<car.model<<endl;
    cout<<" car parking location ="<<car.parkingLocation<<endl;

}


void checkCarParkingLocation(Car &car) {
    cout<<" car parking location ="<<car.parkingLocation<<endl;
}
void storingCar(Car *&arr, int &size) {
    Car *arr1 = new Car[size * 2];
    for (int i = 0; i < size; ++i) {
        arr1[i] = arr[i];
    }
    delete[] arr;
    arr = arr1;
    size+=1;
}
void q2(){
    string licensePlate;
    string make;
    string model;
    int parkingLocation;
    int size =1;
    Car *arr = new Car[1]{Car("", "", "", 0)};
    for (int i = 0;i<size; ++i) {
        cout<<"enter license plate number"<<endl;
        cin >> licensePlate;
        cout << "enter your make " << endl;
        cin >> make;
        cout << "enter your model" << endl;
        cin >> model;
        cout << "enter your parkingLocation" << endl;
        cin >> parkingLocation;
        arr[i] = addCar(licensePlate, make, model, parkingLocation);
        cout << "enter 1 to add more cars " << endl;
        int x;
        cin >> x;
        if (x == 1) {
            storingCar(arr, size);
        }
        else {
            break;
        }
}
    cout << "enter 1 to  delete Car" << endl;
    cout << "enter 2  to print Car details" << endl;
    cout << "enter 3  to check car parking location" << endl;
    int x;
    cin >> x;
    switch (x) {
        case 1: {
            deleteCar(arr,size);
            cout<<"car is deleted "<<endl;
            break;
        }
        case 2: {
            for (int i = 0; i < size; ++i) {
                printCarDetails(arr[i]);
            }
            break;
        }
        case 3: {
            for (int i = 0; i < size; ++i) {
                checkCarParkingLocation(arr[i]);
            }
            break;
        }
    }
    delete[] arr;
}