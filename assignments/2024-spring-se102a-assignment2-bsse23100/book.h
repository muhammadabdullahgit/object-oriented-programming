#ifndef _BOOK_H
#define _BOOK_H
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
    string ISBN;

    Book();
    Book(string title,string author,int year, string ISBN);
};

#endif
