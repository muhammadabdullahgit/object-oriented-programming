//
// Created by Dell on 16/03/2024.
//

#include "TVSeason.h"

TVSeason::TVSeason() {

}

TVSeason::TVSeason(const string &title, const string &genre, int startYear, int episodes) {
    this->title = title;
    this->genre = genre;
    this->startYear = startYear;
    this->episodes = episodes;
}

int TVSeason::getStartYear() {
    return startYear;
}

int TVSeason::getEpisodes() {
    return episodes;
}

void TVSeason::play() {
    cout << "Playing TV season: " << title << endl;
}

void TVSeason::displayDetails() {
    cout << "Title: " << title << ", Genre: " << genre << ", Start Year: " << startYear << ", Episodes: " << episodes
         << endl;
}