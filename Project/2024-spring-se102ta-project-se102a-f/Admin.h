//
// Created by AAA on 4/18/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ADMIN_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ADMIN_H
#include "Person.h"
#include "Announcements.h"
#include "Route.h"

class Admin: public Person{
    Admin();
    static Admin* instance;
    vector<Route*> routes;
    string password;
    vector<Announcements> adminAnnouncement;
public:
    static Admin& getInstance();
    void addPlatformToStation(string& routeName);
    void addPlatformToStation(Station* newStation);
    void addStationToRoute(string& routeName);
    void deleteStation(string& routeName);
    void deletePlatform(string& routeName);
    void addAnnouncement(Announcements& addAnnouncement);
    void writeRouteToJson();
    void readFromJsonFile();
    void writeAnnouncementsToJson();
    void readAnnouncementsJsonFile();
    void addRoute(Route* addRoute);
    void printRoutes();
    void deleteRoute(const string& name);
    vector<Announcements>& getAnnouncement();
    bool loginAdmin();
    string getPassword();
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ADMIN_H
