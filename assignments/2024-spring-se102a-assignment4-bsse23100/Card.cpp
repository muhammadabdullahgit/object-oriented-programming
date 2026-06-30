//
// Created by Dell on 22/02/2024.
//

#include "Card.h"

Card::Card() {
    value = 0;
}

Card::Card(int value) {
    this->value = value;
}

int Card::getValue() {
    return value;
}

Card &Card::operator=(const Card &other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}