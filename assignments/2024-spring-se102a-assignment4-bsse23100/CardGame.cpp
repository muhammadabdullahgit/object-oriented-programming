//
// Created by Dell on 22/02/2024.
//

#include "CardGame.h"

CardGame::CardGame() {
}

CardGame::CardGame(int numCards) {
    mainDeck.setSize(numCards);
    turn = false;
}

void CardGame::playTurn() {
    this->turn = !(turn);
}

CardGame &CardGame::operator=(const CardGame &other) {
    mainDeck = other.mainDeck;
    for (int i = 0; i < 2; ++i) {
        players[i] = other.players[i];
    }
    return *this;
}

Deck &CardGame::getMainDeck() {
    return mainDeck;
}

bool CardGame::getPlayerTurn() {
    return turn;
}

void CardGame::displayGameState() {
    Deck deck;
    deck = getMainDeck();
    cout << "Main Deck Size: " << deck.getSize()<<endl;
    cout << "Player1 Hand Size: " << players[0].getSize()<<endl;
    cout<< "Player2 Hand Size: " << players[1].getSize() << endl;
}