//
// Created by AAA on 4/16/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ROUTE_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ROUTE_H

#include "Station.h"
#include "Schedule.h"
class Route {
    string routeName;
    vector<Station*> stations;
    Schedule routeSchedule;
public:
    string getRouteName();
    Route();
    void setRouteInfo();
    Schedule getRouteSchedule();
    Route(string name);
    vector<Station*> getStations();
    void setSchedule(Schedule& schedule);
    void addStationToRoute(Station* addStation);
    void deleteStationFromRoute( string& stationName);
    void printRouteDetails();
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ROUTE_H
