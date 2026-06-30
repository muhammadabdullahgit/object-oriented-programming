//
// Created by Dell on 16/03/2024.
//
#include <iostream>
#include "MediaContent.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_TVSESSION_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_TVSESSION_H

class TVSeason : public MediaContent {
    int startYear;
    int episodes;
public:
    TVSeason();

    TVSeason(const string &title, const string &genre, int startYear, int episodes);

    int getStartYear();

    int getEpisodes();

    void play() override;

    void displayDetails() override;
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_TVSESSION_H
