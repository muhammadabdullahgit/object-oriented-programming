//
// Created by Dell on 14/03/2024.
//
#include <iostream>
#include <sstream>

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_POST_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_POST_H

class Post {
    string postID;
    string content;
    int likes;
public:
    Post();

    Post(string postID, string content);

    string getPostID();

    string getContent();

    int getLikes();

    void makeLike();

    friend ostream &operator<<(ostream &output, Post &p);

};

ostream &operator<<(ostream &output, Post &p);

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_POST_H
