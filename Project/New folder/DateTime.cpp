//
// Created by AAA on 4/18/2024.
//

#include "DateTime.h"
//Parameterised Constructor for DateTime Class
DateTime::DateTime(int day,int month,int year,int hour,int minutes):day(day),month(month),year(year),hour(hour),minutes(minutes){

}
//Default constructor for DateTime Class
DateTime::DateTime() {
    day=0;
    month=0;
    year=0;
    hour=0;
    minutes=0;
}
//For returning Day
int DateTime::getDay(){
    return day;
}
//For returning Month
int DateTime::getMonth(){
    return month;
}
//For returning Year
int DateTime::getYear(){
    return year;
}
//For returning Hour
int DateTime::getHour(){
    return hour;
}
//For returning Minutes
int DateTime::getMinutes(){
    return minutes;
}
//"<<" operator for DateTime Class
ostream& operator<<(ostream& umar,const DateTime& dateTime){
    umar<<dateTime.day<<"-"<<dateTime.month<<"-"<<dateTime.year;
    umar<<" at "<<dateTime.hour<<":"<<dateTime.minutes<<endl;
    return umar;
}
//">>" operator for DateTime Class
istream& operator>>(istream& umar,DateTime& dateTime){
    do{
        cout << "Enter the date (day month year): ";
        umar >> dateTime.day >> dateTime.month >> dateTime.year;
    } while(dateTime.day>31 || dateTime.day<1 || dateTime.month< 1 || dateTime.month>12 || dateTime.year<2024);
    do{
        cout << "Enter the time (hour minutes): ";
        umar >> dateTime.hour >> dateTime.minutes;
    } while (dateTime.hour>23 || dateTime.hour<0 || dateTime.minutes<0 ||dateTime.minutes>59);
    return umar;
}
//"=" operator for DateTime Class
DateTime DateTime::operator=(const DateTime &other) {
    day=other.day;
    month=other.month;
    year=other.year;
    hour=other.hour;
    minutes=other.minutes;
    return *this;
}