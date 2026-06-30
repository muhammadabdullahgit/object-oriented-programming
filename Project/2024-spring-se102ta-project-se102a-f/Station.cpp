//
// Created by AAA on 4/6/2024.
//

#include "Station.h"
//Default Constructor for Station Class
Station::Station() {
    stationName="";
}
//Parameterised Constructor for Station Class
Station::Station(const string& name):stationName(name){

}
//For Deleting Platform from Station
void Station::deletePlatform(const string& name){
    for (int i=0;i<platforms.size();i++) {
        if (name==platforms[i].getPlatformName()){
            platforms.erase(platforms.begin()+i);
            break;
        }
    }
}
//For returning the vector of Platform used in Station Class
vector <Platform> &Station::getPlatforms() {
    return platforms;
}
//For adding Platform
void Station::addPlatform(const Platform&p){
    platforms.push_back(p);
}
//for assigning the attributes of Station
void Station::setStationInfo() {
    cout<<"Enter Station Name: ";
    cin.ignore();
    getline(cin,stationName);
}
//For returning the name of Station
string Station::getStationName(){
    return stationName;
}
//For Printing the Stations
void Station::printStationDetails() {
    cout<<"Station Name: "<<stationName<<endl;
    cout<<"\t  Platforms:\n";
    for (int i = 0; i < platforms.size(); ++i) {
        char loop='a' + i;
        cout<<"\t\t"<<loop<<"."<<platforms[i];
    }
}