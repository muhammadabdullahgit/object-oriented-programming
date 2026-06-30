//
// Created by Dell on 16/03/2024.
//

#include "Movie.h"

Movie::Movie() {

}

Movie::Movie(const string &title, const string &genre, int year) {
    this->title = title;
    this->genre = genre;
    this->year = year;
}

int Movie::getYear() {
    return year;
}

void Movie::play() {
    cout << "Playing movie: " << title << endl;
}

void Movie::displayDetails() {
    cout << "Title: " << title << ", Genre: " << genre << ", Release Year: " << year << "\n";
}