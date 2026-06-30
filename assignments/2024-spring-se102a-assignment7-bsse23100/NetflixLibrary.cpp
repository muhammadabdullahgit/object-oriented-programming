//
// Created by Dell on 14/03/2024.
//

#include "NetflixLibrary.h"

NetflixLibrary::NetflixLibrary() {
    this->count = 0;
}

int NetflixLibrary::getMediaContentCount() {
    return count;
}

void NetflixLibrary::addMediaContent(MediaContent *m) {
    //mediaContent.push_back(m);
    //count++;
}

void NetflixLibrary::removeMediaContent(string m1) {
   /* for (int i = 0; i < count; ++i) {
        if (mediaContent[i]->getTitle() == m1) {
            swap(mediaContent[i], mediaContent[count - 1]);
            mediaContent.pop_back();
            count--;
            break;
        }
    }*/
   int index=-10;
    for (int i = 0; i < count; ++i) {
        if (mediaContent[i].getTitle() == m1){
            index=i;
            break;
        }
    }
    if(index!=-10){
        delete mediaContent[index];
        for (int i = index; i <count ; ++i) {
            mediaContent[i]=mediaContent[i+1];
        }
        count-=1;
    }
    else{
        cout<<"title not found"<<endl;
    }
}

void NetflixLibrary::playMediaContent(const string &m2) {
    /*for (int i = 0; i < count; ++i) {
        if (mediaContent[i]->getTitle() == m2) {
            mediaContent[i]->play();
            break;
        }
    }*/
    for (int i = 0; i < count; ++i) {
        if (mediaContent[i].getTitle() == m2) {
            mediaContent[i].play();
            break;
        }
    }
}

void NetflixLibrary::displayMediaContent() {
   /* for (int i = 0; i < count; ++i) {
        mediaContent[i]->displayDetails();
    }*/
    for (int i = 0; i < count; ++i) {
        mediaContent[i].displayDetails();
    }
}