//
// Created by Dell on 14/03/2024.
//
#include <iostream>
#include<vector>
#include "MediaContent.h"
#include "Movie.h"
#include "TVSeason.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_NETFLIXLIBRARY_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_NETFLIXLIBRARY_H

class NetflixLibrary {
    //vector<MediaContent *> mediaContent;
    MediaContent* mediaContent;
    int count;
public:
    NetflixLibrary();

    int getMediaContentCount();

    void addMediaContent(MediaContent *m);

    void removeMediaContent(string m1);

    void playMediaContent(const string &m2);

    void displayMediaContent();
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_NETFLIXLIBRARY_H
