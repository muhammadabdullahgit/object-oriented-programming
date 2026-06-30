#ifndef _LIBRARY_H
#define _LIBRARY_H

#include "book.h"
#include <string>
#include <iostream>
using namespace std;

struct Library {
    string name;
    string location;
    Book* books;
    int bookCount; 

    Library(string name, string location); 
    ~Library(); 

    void addBook(string title, string author, int year, string ISBN);
    void printLibraryInfo();
    void printBookInfo(string title);
};
void q1();
#endif
