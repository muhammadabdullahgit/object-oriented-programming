//
// Created by Dell on 02/03/2024.
//
#include "MediaItem.h"
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_VIDEOCLIP_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_VIDEOCLIP_H
class VideoClip:public MediaItem{
public:
string resolution;
    VideoClip(string title,string resolution, int duration);
    string displayDetails();
};
#endif //INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_VIDEOCLIP_H
