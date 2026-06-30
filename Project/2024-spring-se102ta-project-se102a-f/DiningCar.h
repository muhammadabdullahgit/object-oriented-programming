//
// Created by lenovo on 4/26/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_DININGCAR_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_DININGCAR_H
#include <iostream>
#include "DiningTable.h"
#include "Boogie.h"         //including header files
#include <vector>
#include <fstream>
#include "nlohmann/json.hpp"
using json=nlohmann::json;
using namespace std;
class DiningCar:public Boogie{
private:
    //attributes
    int table_capacity;
    //vector od dining table class composed in Dining car
    vector<DiningTable>tables;
public:
    //methods
    DiningCar();
    DiningCar(int table_capacity);
    void addableInfo();     //adding table info asking from admin
    void tableInfo();       //displayng table info
    void booktable();       //booking table
    void changeBookingDataInJson(int no);       //json function to write data after booking
    void readTableDataFromJson();               //json function to read data
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_DININGCAR_H
