//
// Created by Dell on 22/02/2024.
//

#include "Deck.h"

Deck::Deck() {
    size = 0;
    cards = nullptr;
}

Deck::Deck(int numCards) {
    size = numCards;
    cards = new Card[numCards];
    for (int i = 0; i < numCards; ++i) {
        cards[i] = Card(i + 1);
    }
}

Deck::~Deck() {
}

Card Deck::drawCard() {
    cards = new Card(size);
    size -= 1;
    return *cards;
}

void Deck::discardCard(const Card &card, Deck &mainDeck) {
    Card *arr = new Card[size + 1];
    for (int i = 0; i < size; ++i) {
        arr[i] = card;
    }
    delete cards;
    cards = arr;
    size += 1;
}

void Deck::setSize(int size) {
    this->size = size;
}

int Deck::getSize() {
    return size;
}

Card *Deck::getCards() {
    return cards;
}

void Deck::sizeIncrement() {
    size++;
}

void Deck::sizeDecrement() {
    size--;
}

Deck &Deck::operator=(const Deck &other) {
    if (this != &other) {
        size = other.size;
    }
    return *this;
}