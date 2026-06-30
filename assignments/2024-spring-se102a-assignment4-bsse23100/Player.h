//
// Created by Dell on 22/02/2024.
//
#include <iostream>
#include "Deck.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_PLAYER_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_PLAYER_H

class Player {
    Deck hand;
public:
    Player();

    void drawCard(const Card &card);

    void discardCard(const Card &card, Deck mainDeck);

    Deck getHand();

    int getSize();

    Player &operator=(const Player &other);
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_PLAYER_H
