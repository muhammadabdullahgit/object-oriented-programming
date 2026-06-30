//
// Created by Dell on 02/03/2024.
//
#include "MediaItem.h"
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_EBOOK_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_EBOOK_H
class EBook:public MediaItem{
public:
    string author;
    EBook(string title,string author, int duration);
    string displayDetails();
};
#endif //INC_2024_SPRING_SE102A_ASSIGNMENT5_BSSE23100_EBOOK_H
