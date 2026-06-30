//
// Created by Dell on 14/03/2024.
//
#include <iostream>
#include <sstream>
#include "user.h"
#include "post.h"

using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_SOCIALMEDIAPLATFORM_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_SOCIALMEDIAPLATFORM_H

class SocialMediaPlatform {
    User *users;
    Post *posts;
    int usersCount;
    int postsCount;
public:
    SocialMediaPlatform();

    void addNewUser(User &u);

    int getUserCount();

    int getPostCount();

    void operator+=(User &u1);

    void addNewPost(Post &p);

    void composePost(User u2, string ID, string postContent);

    void likePost(User u3, string postId);

    int getPostLikes(string id) const;

    friend ostream &operator<<(ostream &output, SocialMediaPlatform &s);
};

ostream &operator<<(ostream &output, SocialMediaPlatform &s);

#endif //INC_2024_SPRING_SE102A_ASSIGNMENT7_BSSE23100_SOCIALMEDIAPLATFORM_H
