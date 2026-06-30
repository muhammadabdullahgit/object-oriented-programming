 //
// Created by AAA on 4/18/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_DATETIME_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_DATETIME_H

#include <iostream>
using namespace std;
class DateTime {
    int day;
    int month;
    int year;
    int hour;
    int minutes;
public:
    DateTime(int day,int month,int year,int hour,int minutes);
    DateTime();
    int getDay();
    int getMonth();
    int getYear();
    int getHour();
    int getMinutes();
    friend ostream& operator<<(ostream& umar,const DateTime& dateTime);
    friend istream& operator>>(istream& umar,DateTime& dateTime);
    DateTime operator=(const DateTime& other);
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_DATETIME_H
