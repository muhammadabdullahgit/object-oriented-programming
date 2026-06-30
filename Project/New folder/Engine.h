//
// Created by lenovo on 4/24/2024.
//
#include <iostream>
#include <vector>
using namespace std;
#include <fstream>
#include "nlohmann/json.hpp"
using json=nlohmann::json;
#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ENGINE_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ENGINE_H


class Engine {
private:
    //attribute
    int engine_Number;
    bool isAssigned;
public:
    //methods
    Engine();
    Engine(int engine_Number);
    Engine(int engine_Number, bool isAssigned);
    int getengineNumber();              //getter,setter
    bool checkassigned();
    void setassigned(bool assign);
    void setEngineNo(int no);
    vector<Engine>  readDataFromJson();         // reading data for each vector before assigning
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ENGINE_H
