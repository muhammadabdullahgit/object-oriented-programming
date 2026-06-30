//
// Created by Dell on 16/03/2024.
//
#include <iostream>
#include "MediaContent.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_MOVIE_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_MOVIE_H

class Movie : public MediaContent {
    int year;
public:
    Movie();

    Movie(const string &title, const string &genre, int year);

    int getYear();

    void play() override;

    void displayDetails() override;
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_MOVIE_H
