//
// Created by Dell on 22/02/2024.
//

#include "Player.h"

Player::Player() {
}

void Player::drawCard(const Card &card) {
    hand.sizeIncrement();
}

void Player::discardCard(const Card &card, Deck mainDeck) {
    hand.sizeDecrement();
}

Deck Player::getHand() {
    return hand;
}

int Player::getSize() {
    return hand.getSize();
}

Player &Player::operator=(const Player &other) {
    if (this != &other) {
        hand = other.hand;
    }
    return *this;
}