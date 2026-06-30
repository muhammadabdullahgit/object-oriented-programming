//
// Created by Dell on 14/03/2024.
//
#include <iostream>
#include <sstream>
#include "post.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_USER_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_USER_H

class User {
    string userName;
    string userID;
    Post *posts;
    int size;
public:
    User();

    User(string userName, string userID);

    void addNewPost(Post &post);

    string getUserName();

    string getUserID();

    void likeUserPost(string postId);

    friend ostream &operator<<(ostream &output, User &u);
};

ostream &operator<<(ostream &output, User &u);

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_USER_H
