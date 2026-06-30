//
// Created by Dell on 14/03/2024.
//

#include "post.h"

Post::Post() {

}

Post::Post(string postID, string content) {
    this->postID = postID;
    this->content = content;
    likes = 0;
}

string Post::getPostID() {
    return postID;
}

string Post::getContent() {
    return content;
}

int Post::getLikes() {
    return likes;
}

void Post::makeLike() {
    likes++;
}

ostream &operator<<(ostream &output, Post &p) {
    output << "post id  : " << p.postID << endl;
    output << "content  : " << p.content << endl;
    output << "user  total likes  : " << p.likes << endl;
    return output;
}
