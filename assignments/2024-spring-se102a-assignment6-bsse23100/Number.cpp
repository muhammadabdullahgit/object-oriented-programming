//
// Created by Dell on 08/03/2024.
//

#include "Number.h"

Number::Number() {

}

Number::Number(double value) {
    this->value = value;
}

double Number::getValue() {
    return value;
}

Number Number::operator+(Number &other) {
    Number number;
    number.value = value + other.value;
    return number;
}

Number Number::operator-(const Number &other) {
    Number number;
    number.value = value - other.value;
    return number;
}

Number Number::operator*(const Number &other) {
    Number number;
    number.value = value * other.value;
    return number;
}

Number Number::operator/(const Number &other) {
    Number number;
    number.value = value / other.value;
    return number;
}

Number operator%(const Number &other, const Number &other1) {
    Number number;
    number.value = (int) other.value % (int) other1.value;
    return number;
}

Number operator++(Number &other, int) {
    Number number(other);
    other.value++;
    return number;
}

Number operator--(Number &other, int) {
    Number number(other);
    other.value--;
    return number;
}

bool Number::operator==(const Number &other) const {
    if (value == other.value) {
        return true;
    } else {
        return false;
    }
}

