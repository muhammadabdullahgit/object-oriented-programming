//
// Created by AAA on 4/18/2024.
//

#include "Announcements.h"
//template <typename T>
Announcements::Announcements(){
//message="";
}

string Announcements::getAnnouncementMessage(){
    return message;
}
void Announcements::setAnnouncementMessage(){
    cout<<"Enter your message: ";
    cin.ignore();
    getline(cin,message);
    cin>>announcementTime;
}

DateTime Announcements::getAnnouncementTime() {
    return announcementTime;
}

void Announcements::setAnnouncementMessage(string &m) {
    message=m;
}

void Announcements::setAnnouncementTime(DateTime &dateTime) {
    announcementTime=dateTime;
}
ostream& operator<<(ostream& umar,const Announcements& announcement){
    umar<<"Time: "<<announcement.announcementTime;
    umar<<"Announcement: "<<announcement.message<<endl;
    return umar;
}
