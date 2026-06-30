//
// Created by lenovo on 4/21/2024.
//
#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_SEATS_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_SEATS_H
#include <iostream>
using namespace std;                //including libraries
#include <fstream>
#include "nlohmann/json.hpp"
using json=nlohmann::json;
class Seats {
private:
    //attribute
    int seat_Number;
public:
    //methods
    Seats();
    Seats(int Seat_Number);
    int getSeatNumber() const;


};

#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_SEATS_H
