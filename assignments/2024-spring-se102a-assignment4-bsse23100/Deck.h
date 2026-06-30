//
// Created by Dell on 22/02/2024.
//
#include <iostream>
#include "Card.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_DECK_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_DECK_H

class Deck {
    Card *cards;
    int size;
public:
    Deck();

    Deck(int numCards);

    ~Deck();

    Card drawCard();

    void discardCard(const Card &card, Deck &mainDeck);

    void setSize(int size);

    int getSize();

    Card *getCards();

    void sizeIncrement();

    void sizeDecrement();

    Deck &operator=(const Deck &other);
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_DECK_H
