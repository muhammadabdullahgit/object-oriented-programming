//
// Created by AAA on 4/18/2024.
//
#include "Admin.h"
//It will return the instance for Admin
Admin& Admin::getInstance(){
    if (instance== nullptr){
        instance=new Admin();
    }
    return *instance;
}
//Default and private constructor for Admin
Admin::Admin() {}
//This will point the Admins instance towards null
Admin* Admin::instance= nullptr;
//For returning the vector of announcement used in Admin Class
vector <Announcements> &Admin::getAnnouncement() {
    return adminAnnouncement;
}
//For Adding station in route through Admin class
void Admin::addStationToRoute(string &routeName) {
    for (auto& route:routes) {
        if (routeName==route->getRouteName()){
            Station* station=new Station;
            station->setStationInfo();
            cout<<"How many Platforms are in this Station: ";
            int t_platforms;
            cin>>t_platforms;
            for (int k = 0; k < t_platforms; ++k) {
                addPlatformToStation(station);
            }
            route->addStationToRoute(station);
        }
    }
}
//For adding Platform in the station through Admin Class
void Admin::addPlatformToStation(Station *newStation) {
            string p_name;
            int p_num;
            cout<<"Enter Platform Name: ";
            cin.ignore();
            getline(cin,p_name);
            cout<<"Enter Platform Number: ";
            cin>>p_num;
            Platform platform{p_name,p_num};
            newStation->addPlatform(platform);
}
//For Deleting Station from route through Admin Class
void Admin::deleteStation(string &routeName) {
    for (auto& route:routes) {
        if (routeName==route->getRouteName()){
            string stationName;
            cout<<"Enter Station Name: ";
            cin.ignore();
            getline(cin,stationName);
            route->deleteStationFromRoute(stationName);
            break;
        }
    }
}
//For adding Platform in the station through Admin Class
void Admin::addPlatformToStation(string &routeName) {
    for(auto& route:routes) {
        if (routeName==route->getRouteName()){
            string stationName;
            cout<<"Enter Station Name: ";
            cin.ignore();
            getline(cin,stationName);
            for (auto& station:route->getStations()) {
                if (stationName==station->getStationName()){
                    string p_name;
                    int p_num;
                    cout<<"Enter Platform Name: ";
                    cin.ignore();
                    getline(cin,p_name);
                    cout<<"Enter Platform Number: ";
                    cin>>p_num;
                    Platform platform{p_name,p_num};
                    station->addPlatform(platform);
                }
            }
            break;
        }
    }
}
//For deleting Platform from the station through Admin Class
void Admin::deletePlatform(string &routeName) {
    for (auto &route: routes) {
        if (routeName == route->getRouteName()) {
            string stationName;
            cout << "Enter Station Name: ";
            cin.ignore();
            getline(cin, stationName);
            for (auto& station:route->getStations()) {
                if (stationName==station->getStationName()){
                    string p_name;
                    cout<<"Enter Platform Name: ";
                    cin.ignore();
                    getline(cin,p_name);
                    station->deletePlatform(p_name);
                    break;
                }
            }
        }
    }
}
//For Login Panel of Admin
bool Admin:: loginAdmin()
{
//        bool login= false;
    setNameAndAge();
    cout<<"Enter Password: ";
    cin>>password;
    ifstream file("Admins_login.json");
    json input;
    file>>input;
    file.close();
    for(auto& j:input["Admin"]) {
        if (getName() == j["name"] && password == j["password"]) {
            cout << "Login successful" << endl;
            return true;
        }
    }
    return false;
}
//For returning Password
string Admin:: getPassword(){
    return password;
}
//For adding Route
void Admin::addRoute(Route* addRoute){
    routes.push_back(addRoute);
    writeRouteToJson();
}
//For deleting Route
void Admin::deleteRoute(const string& name){
    for (int i = 0; i <routes.size() ; ++i) {
        if(name==routes[i]->getRouteName()){
            routes.erase(routes.begin()+i);
            writeRouteToJson();
            break;
        }
    }
}
//For printing routes through Admin
void Admin::printRoutes(){
    for (int i = 0; i < routes.size(); ++i) {
        routes[i]->printRouteDetails();
        cout<<"------------------------------------------------\n";
    }
}
//For writing Routes in Json File
void Admin::writeRouteToJson() {
    json writeRoutes;
    for (auto& route : routes) {
        json routeData;

        routeData["name"] = route->getRouteName();
        // Add schedule data
        json scheduleData;
        scheduleData["Arrival Time"]["day"] = route->getRouteSchedule().getArrivalTime().getDay();
        scheduleData["Arrival Time"]["month"] = route->getRouteSchedule().getArrivalTime().getMonth();
        scheduleData["Arrival Time"]["year"] = route->getRouteSchedule().getArrivalTime().getYear();
        scheduleData["Arrival Time"]["hour"] = route->getRouteSchedule().getArrivalTime().getHour();
        scheduleData["Arrival Time"]["minutes"] = route->getRouteSchedule().getArrivalTime().getMinutes();
        scheduleData["Departure Time"]["day"] = route->getRouteSchedule().getDepartureTime().getDay();
        scheduleData["Departure Time"]["month"] = route->getRouteSchedule().getDepartureTime().getMonth();
        scheduleData["Departure Time"]["year"] = route->getRouteSchedule().getDepartureTime().getYear();
        scheduleData["Departure Time"]["hour"] = route->getRouteSchedule().getDepartureTime().getHour();
        scheduleData["Departure Time"]["minutes"] = route->getRouteSchedule().getDepartureTime().getMinutes();
        routeData["Schedule"].push_back(scheduleData);
        // Add stations data
        for (auto& station : route->getStations()) {
            json stationJson;
            stationJson["name"] = station->getStationName();
//             Add platforms data for the station
            for (auto& platform : station->getPlatforms()) {
                json platformJson;
                platformJson["name"] = platform.getPlatformName();
                platformJson["number"] = platform.getPlatformNum();
                stationJson["platforms"].push_back(platformJson);
            }

//            stationJson= platformsJson;
            routeData["Stations"].push_back(stationJson);
        }

        writeRoutes["Routes"].push_back(routeData);
    }

    ofstream output("Routes.json");
    if (!output) {
        cout << "Failed to open JSON file for writing." << endl;
        return;
    }
    output<<setw(4)<<writeRoutes<<endl;
    output.close();
}
//For reading routes from Json File
void Admin::readFromJsonFile() {
    ifstream jsonFile("Routes.json");
    if (!jsonFile) {
        cout << "Failed to open JSON file." << endl;
        return;
    }

    json inputData;
    jsonFile >> inputData;
    jsonFile.close();

    routes.clear(); // Clear existing routes before reading from file

    for (auto& routeJson : inputData["Routes"]) {
        string routeName = routeJson["name"];
        Route* route = new Route(routeName);

        json scheduleData = routeJson["Schedule"][0];
        DateTime arrivalTime{
                scheduleData["Arrival Time"]["day"],
                scheduleData["Arrival Time"]["month"],
                scheduleData["Arrival Time"]["year"],
                scheduleData["Arrival Time"]["hour"],
                scheduleData["Arrival Time"]["minutes"]
        };
        DateTime departureTime{
                scheduleData["Departure Time"]["day"],
                scheduleData["Departure Time"]["month"],
                scheduleData["Departure Time"]["year"],
                scheduleData["Departure Time"]["hour"],
                scheduleData["Departure Time"]["minutes"]
        };
        Schedule schedule(arrivalTime, departureTime);
        route->setSchedule(schedule);

        for (auto& stationJson : routeJson["Stations"]) {
            string stationName = stationJson["name"];
            Station* station = new Station(stationName);

            for (auto& platformJson : stationJson["platforms"]) {
                string platformName = platformJson["name"];
                int platformNumber = platformJson["number"];
                station->addPlatform(Platform(platformName, platformNumber));
            }

            route->addStationToRoute(station);
        }
        addRoute(route);
    }
}
//For writing Announcements in Json File
void Admin::writeAnnouncementsToJson(){
    json writeAnnouncements;
    for (auto& announcement:adminAnnouncement) {
        json j;
        j["message"]=announcement.getAnnouncementMessage();
        j["DateTime"]["day"]=announcement.getAnnouncementTime().getDay();
        j["DateTime"]["month"]=announcement.getAnnouncementTime().getMonth();
        j["DateTime"]["year"]=announcement.getAnnouncementTime().getYear();
        j["DateTime"]["hour"]=announcement.getAnnouncementTime().getHour();
        j["DateTime"]["minutes"]=announcement.getAnnouncementTime().getMinutes();
//        writeAnnouncements.push_back();
        writeAnnouncements["Announcements"].push_back(j);
    }
    ofstream output("Announcements.json");
    if (!output){
        cout<<"File not open\n";
        return;
    }
    output<<setw(4)<<writeAnnouncements<<endl;
    output.close();
}
//For reading Announcements from Json File
void Admin::readAnnouncementsJsonFile(){
    ifstream jsonFile("Announcements.json");
    if (!jsonFile) {
        cout << "Failed to open JSON file." << endl;
        return;
    }

    json inputData;
    jsonFile >> inputData;
    jsonFile.close();

    adminAnnouncement.clear(); // Clear existing routes before reading from file
    for (auto& announcement:inputData["Announcements"]){
        Announcements announcements;
        json a=announcement["DateTime"];
        DateTime d1{a["day"],a["month"],a["year"],a["hour"],a["minutes"]};
        announcements.setAnnouncementTime(d1);
        string i=announcement["message"];
        announcements.setAnnouncementMessage(i);
        addAnnouncement(announcements);
    }
}
//For adding announcements
void Admin::addAnnouncement(Announcements &addAnnouncement) {
    adminAnnouncement.push_back(addAnnouncement);
    writeAnnouncementsToJson();
}

