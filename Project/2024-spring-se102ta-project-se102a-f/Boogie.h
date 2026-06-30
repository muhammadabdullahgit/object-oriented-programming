//
// Created by lenovo on 4/21/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_BOOGIE_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_BOOGIE_H
#include <iostream>
#include <vector>
#include <fstream>
#include "nlohmann/json.hpp"                //including all header files
using json=nlohmann::json;
#include "Seats.h"
using namespace std;
//making class
class Boogie {
protected:
    int total_Boogie;
    int boogie_Number;
    int capacity;                   //attributes
    string boogie_Type;
    vector<int>seatsAvailable;
//    vector<Seats>seats;

public:
    //methods
    Boogie();
    Boogie(int total_Boogie, int boogie_Number, int capacity,string boogie_Type);
    void seatInfo();    //get seat info from admin
    void displaySeatInfo();     //display seat info to passenger
    void boogieInfo();      //get boogie info from admin
    void addSeatDataToJson(int newSeat);
    void addBoogieDataToJson(int boogieNo,string boogieType);       //writing data to jsoon
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_BOOGIE_H
