//
// Created by Dell on 02/03/2024.
//
#include "MediaItem.h"
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_AUDIOTRACK_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_AUDIOTRACK_H
class AudioTrack:public MediaItem{
public:
    string artist;
    AudioTrack(string title,string artist, int duration);
    string displayDetails();
};
#endif //INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_AUDIOTRACK_H
