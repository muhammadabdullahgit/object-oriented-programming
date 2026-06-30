//
// Created by Dell on 02/03/2024.
//

#include "AudioTrack.h"
AudioTrack::AudioTrack(string title,string artist,int duration)  {
    this->title = title;
    this->artist = artist;
    this->duration = duration;
}

string AudioTrack::displayDetails() {
    string display;
    display = "AudioTrack: " + getTitle() +" by "+artist +", Duration: " +
            to_string(getDuration()).substr(0, 3)+" seconds";
    return display;
}