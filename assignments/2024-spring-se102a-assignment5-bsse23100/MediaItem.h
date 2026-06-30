//
// Created by Dell on 02/03/2024.
//
#include <iostream>
#include <vector>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_MEDIAITEM_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_MEDIAITEM_H
class MediaItem{
protected:
    string title;
    int duration;
public:
    MediaItem();
    string getTitle();

    double getDuration();
    MediaItem(string title, int duration);
    string displayDetails();
    MediaItem operator+(const MediaItem &other);
};
string printLibrary(vector<MediaItem> library);
#endif //INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_MEDIAITEM_H
