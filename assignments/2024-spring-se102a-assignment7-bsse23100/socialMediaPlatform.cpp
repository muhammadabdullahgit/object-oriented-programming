//
// Created by Dell on 14/03/2024.
//

#include "socialMediaPlatform.h"

SocialMediaPlatform::SocialMediaPlatform() {
    posts = nullptr;
    users = nullptr;
}

void SocialMediaPlatform::addNewUser(User &u) {
    User *arr = new User[usersCount + 1];
    for (int i = 0; i < usersCount; ++i) {
        arr[i] = users[i];
    }
    arr[usersCount++] = u;
    if (!users) {
        delete[] users;
    }
    users = arr;
}

int SocialMediaPlatform::getUserCount() {
    return usersCount;
}

int SocialMediaPlatform::getPostCount() {
    return postsCount;
}

void SocialMediaPlatform::operator+=(User &u1) {
    addNewUser(u1);
}

void SocialMediaPlatform::addNewPost(Post &p) {
    Post *arr = new Post[postsCount + 1];
    for (int i = 0; i < postsCount; ++i) {
        arr[i] = posts[i];
    }
    arr[postsCount++] = p;
    delete[]posts;
    posts = arr;
}

void SocialMediaPlatform::composePost(User u2, string ID, string postContent) {
    Post p1(ID, postContent);
    for (int i = 0; i < usersCount; ++i) {
        if (users[i].getUserName() == u2.getUserName() && users[i].getUserID() == u2.getUserID()) {
            users[i].addNewPost(p1);
        }
    }
    addNewPost(p1);
}

void SocialMediaPlatform::likePost(User u3, string postId) {
    for (int i = 0; i < usersCount; ++i) {
        if (users[i].getUserName() == u3.getUserName() && users[i].getUserID() == u3.getUserID()) {
            users[i].likeUserPost(postId);
        }
    }
    for (int i = 0; i < postsCount; ++i) {
        if (posts[i].getPostID() == postId) {
            posts[i].makeLike();
        }
    }
}

int SocialMediaPlatform::getPostLikes(string postId) const {
    for (int i = 0; i < postsCount; ++i) {
        if (posts[i].getPostID() == postId) {
            return posts[i].getLikes();
        }
    }
    return 0;
}

ostream &operator<<(ostream &output, SocialMediaPlatform &s) {
    for (int i = 0; i < s.usersCount; ++i) {
        output << "user name  : " << s.users[i].getUserName() << endl;
        output << "user id  : " << s.users[i].getUserID() << endl;
        output << "post id  : " << s.posts[i].getPostID() << endl;
        output << "content  : " << s.posts[i].getContent() << endl;
        output << "user  total likes  : " << s.posts[i].getLikes() << endl;
    }
    return output;
}