//
// Created by AAA on 4/18/2024.
//

#include "Schedule.h"
//Parameterised Constructor for Schedule Class
Schedule::Schedule(const DateTime& arrival,const DateTime& departure): departureTime(departure), arrivalTime(arrival){

}
//Default Constructor for Schedule Class
Schedule::Schedule() {}
//For returning Arrival Time
DateTime Schedule::getArrivalTime(){
    return arrivalTime;
}
//For returning Departure Time
DateTime Schedule::getDepartureTime(){
    return departureTime;
}
//"=" operator for Schedule Class
Schedule& Schedule::operator=(const Schedule &other) {
    arrivalTime=other.arrivalTime;
    departureTime=other.departureTime;
    return *this;
}
//For Printing Schedule Details
void Schedule::printSchedule() {
    cout<<"Arrival: "<<arrivalTime;
    cout<<"Departure: "<<departureTime;
}