//
// Created by lenovo on 4/21/2024.
//

#include "Seats.h"
Seats::Seats() {
    //default constructoor
}
Seats::Seats(int Seat_Number) {
    //constructor
    this->seat_Number=seat_Number;
}
//getter for seat number
int Seats::getSeatNumber()const
{
    return seat_Number;
}

