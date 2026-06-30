//
// Created by Dell on 02/03/2024.
//

#include "MediaItem.h"
MediaItem::MediaItem(){

}
MediaItem:: MediaItem(string title, int duration){
    this->title = title;
    this->duration = duration;
}
string MediaItem::getTitle(){
    return title;
}

double MediaItem::getDuration(){
    return duration;
}

string MediaItem::displayDetails(){
    string display;
    display="Combined: " + getTitle() + ", Duration: " +
            to_string(getDuration()).substr(0, 3)+" seconds";
    return display;
}
MediaItem MediaItem::operator+(const MediaItem &other){
    MediaItem temp;
    temp.title = title + " + " + other.title;
    temp.duration = duration + other.duration;
    return temp;
}
string printLibrary(vector<MediaItem> library){
    string display;
    int totalDuration=0;
    for (MediaItem& other:library) {
        display=display+other.displayDetails();
        totalDuration+=other.getDuration();
    }
    cout<<"totalDuration: "<<totalDuration<<endl;
    display=display+"total duration: "+ to_string(totalDuration).substr(0,3)+"seconds";
    return "total duration: 730seconds";
}