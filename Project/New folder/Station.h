//
// Created by AAA on 4/6/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_STATION_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_STATION_H

#include "Platform.h"
#include <vector>
class Station {
protected:
    string stationName;
    vector<Platform> platforms;
public:
    Station();
    Station(const string& name);
    void setStationInfo();
    void addPlatform(const Platform&p);
    void deletePlatform(const string& name);
    string getStationName();
    vector<Platform>& getPlatforms();
    void printStationDetails();
//    void writeToJson();
//    friend ostream operator<<(ostream&umar,const Station& station);
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_STATION_H
