//
// Created by Dell on 16/03/2024.
//
#include <iostream>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_MEDIACONTENT_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_MEDIACONTENT_H

class MediaContent {
protected:
    string title;
    string genre;
public:
    MediaContent();

    MediaContent(const string &title, const string &genre);

    string getTitle();

    string getGenre();

    virtual void play() = 0;

    virtual void displayDetails() = 0;
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_MEDIACONTENT_H
