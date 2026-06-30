//
// Created by Dell on 14/03/2024.
//

#include "user.h"

User::User() {
    this->posts = nullptr;
}

User::User(string userName, string userID) {
    this->userName = userName;
    this->userID = userID;
}

void User::addNewPost(Post &post) {
    Post *arr = new Post[size + 1];
    for (int i = 0; i < size; ++i) {
        arr[i] = posts[i];
    }
    arr[size++] = post;
    if (!posts) {
        delete[]posts;
    }
    posts = arr;
}

string User::getUserName() {
    return userName;
}

string User::getUserID() {
    return userID;
}

void User::likeUserPost(string postId) {
    for (int i = 0; i < size; ++i) {
        if (posts[i].getPostID() == postId) {
            posts[i].makeLike();
        }
    }
}

ostream &operator<<(ostream &output, User &u) {
    output << "user name  : " << u.userName << endl;
    output << "user id  : " << u.userID << endl;
    return output;
}