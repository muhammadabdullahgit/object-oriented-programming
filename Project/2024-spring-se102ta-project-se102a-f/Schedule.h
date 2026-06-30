//
// Created by AAA on 4/18/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_SCHEDULE_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_SCHEDULE_H

#include "DateTime.h"
class Schedule {
    DateTime arrivalTime;
    DateTime departureTime;
public:
    Schedule();
    Schedule(const DateTime& arrival,const DateTime& departure);
    DateTime getArrivalTime();
    DateTime getDepartureTime();
    void printSchedule();
    Schedule& operator=(const Schedule& other);
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_SCHEDULE_H
