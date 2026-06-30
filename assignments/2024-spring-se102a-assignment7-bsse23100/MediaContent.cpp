//
// Created by Dell on 16/03/2024.
//

#include "MediaContent.h"

MediaContent::MediaContent() {

}

MediaContent::MediaContent(const string &title, const string &genre) {
    this->title = title;
    this->genre = genre;
}

string MediaContent::getTitle() {
    return title;
}

string MediaContent::getGenre() {
    return genre;
}