//
// Created by Dell on 22/02/2024.
//
#include <iostream>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CARD_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CARD_H

class Card {
    int value;
public:
    Card();

    Card(int value);

    int getValue();

    Card &operator=(const Card &other);
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CARD_H
