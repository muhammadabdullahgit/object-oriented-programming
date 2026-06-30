//
// Created by lenovo on 4/26/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_DININGTABLE_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_DININGTABLE_H
#include <iostream>
#include <vector>
using namespace std;
#include <fstream>
#include "nlohmann/json.hpp"
using json=nlohmann::json;
class DiningTable {
private:
    //attribute
    int table_Number;
    bool isOccupied;
public:
    //methods
    DiningTable();
    DiningTable(int table_Number);          //constructor for vector of table
    DiningTable(int table_Number, bool is_Occupied);
    int gettableNumber();                   //getter,setter
    bool checkoccupied();
    void setoccupied(bool available);
    void setTableNo(int no);
    vector<DiningTable>  readDataFromJson();        //reading table before booking
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_DININGTABLE_H
