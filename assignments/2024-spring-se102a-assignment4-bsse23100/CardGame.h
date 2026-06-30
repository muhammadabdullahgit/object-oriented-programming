//
// Created by Dell on 22/02/2024.
//
#include <iostream>
#include "Deck.h"
#include "Player.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CARDGAME_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CARDGAME_H

class CardGame {
    Deck mainDeck;
    Player players[2];
    bool turn;
public:
    CardGame();

    CardGame(int numCards);

    void playTurn();

    CardGame &operator=(const CardGame &other);

    Deck &getMainDeck();

    bool getPlayerTurn();

    void displayGameState();
};

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT4_BSSE23100_CARDGAME_H
