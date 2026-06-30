//
// Created by lenovo on 4/26/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_TRAIN_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_TRAIN_H
#include <iostream>
#include "Engine.h"
using namespace std;
#include <fstream>
#include "nlohmann/json.hpp"                //including all header files
using json=nlohmann::json;

class Train {
private:
    static Train*instance;        //singleton class
    //private constructor
    Train();
    //attributes
    string train_Name;
    int train_Number;
    int no_Of_Engines;
    vector<Engine>engines;          //vector of engines composed in train
    vector<int>trains;              //vector of trains
public:
    //singleton method
    static Train*getInstance();
    Train(int no_Of_Engines, string train_Name, int train_Number);
    void trainInfo();           //methods for different purposes
    void trainData();
    void addengineInfo();
    void engineInfo();
    void assignEngine();
    void addTrainDataToJson(string trainName,string engineID);       //writing data to jsoon
    void addEngineDataToJson(int engineNo,bool availability);       //writing data before assigning
    void changeAssignedDataInJson(int no);      //writing data after assigning
    void readEngineDataFromJson();              //read data before assigning engines
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_TRAIN_H
