//
// Created by Dell on 02/03/2024.
//

#include "VideoClip.h"
VideoClip::VideoClip(string title,string resolution,int duration)  {
    this->title = title;
    this->resolution = resolution;
    this->duration = duration;
}

string VideoClip::displayDetails() {
    string display;
    display = "VideoClip: " + getTitle() +", Resolution: " + resolution + ", Duration: " +
              to_string(getDuration()).substr(0, 3)+" seconds";
    return display;
}