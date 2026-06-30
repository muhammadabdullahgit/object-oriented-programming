//
// Created by AAA on 4/6/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PLATFORM_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PLATFORM_H
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#include "nlohmann/json.hpp"
using json=nlohmann::json;

class Platform {
    string platformName;
    int platformNum;
public:
    Platform();
    Platform(string& name,int num);
    void setPlatformInfo();
    string getPlatformName();
    int getPlatformNum();
    friend ostream& operator<<(ostream&umar,const Platform& platform);
    //    void readFromJson();
//    void writeToJson();
};
#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_PLATFORM_H
