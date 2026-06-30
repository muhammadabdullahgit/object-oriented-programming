//
// Created by Dell on 02/03/2024.
//

#include "EBook.h"
EBook::EBook(string title,string author,int duration)  {
    this->title = title;
    this->author = author;
    this->duration = duration;
}

string EBook::displayDetails() {
    string display;
    display = "EBook: " + getTitle() +" by "+author +", Duration: " +
              to_string(getDuration()).substr(0, 3)+" seconds";
    return display;
}