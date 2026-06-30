//
// Created by lenovo on 4/19/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PASSENGER_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PASSENGER_H
#include <iostream>
#include <vector>
using namespace std;
#include <fstream>
#include "nlohmann/json.hpp"
using json=nlohmann::json;
class Passenger {
private:
    //attributes
    string user_Name;
    int age;
    int passenger_Number;
    string cnic;
    static vector<Passenger>passengers; //use static to keep the same vector information for all passengers
public:
    //methods
    Passenger();
    Passenger(string user_Name, int age, int passenger_Number, string cnic);
    string getusername()const;
    int getage()const;
    int getpaseengernumber()const;      //getter,setter
    string getcnic()const;
    void inputPassengerInfo();          //take info from passenger
    void addPassenger();                //use input function to add number of data of passenger
    void displayPassengerInfo();        //displaying passenger info
    void addPassengerDataToJson(const Passenger& newPassenger);     //writing data to file
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PASSENGER_H
