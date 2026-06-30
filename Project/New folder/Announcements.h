//
// Created by AAA on 4/18/2024.
//

#ifndef INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ANNOUNCEMENTS_H
#define INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ANNOUNCEMENTS_H
#include "DateTime.h"

#include <string>
class Announcements{
    string message;
    DateTime announcementTime;
public:
    Announcements();
    DateTime getAnnouncementTime();
    string getAnnouncementMessage();
    void setAnnouncementMessage();
    void setAnnouncementMessage(string& m);
    void setAnnouncementTime(DateTime& dateTime);
    friend ostream& operator<<(ostream& umar,const Announcements& announcement);
};


#endif //INC_2024_SPRING_SE102TA_PROJECT_SE102A_F_ANNOUNCEMENTS_H
