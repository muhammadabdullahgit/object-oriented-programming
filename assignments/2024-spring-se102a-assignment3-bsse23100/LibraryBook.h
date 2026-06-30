# include<iostream>
using namespace std;
#ifndef INC_2024_SPRING_SE102A_ASSIGNMENT3_BSSE23100_LIBRARYBOOK_H
#define INC_2024_SPRING_SE102A_ASSIGNMENT3_BSSE23100_LIBRARYBOOK_H
class LibraryBook {
private:
    string* title;
    string* author;
    int *pages;

public:
    LibraryBook();
    ~LibraryBook();
    LibraryBook(string a, string b, int c);
    LibraryBook(LibraryBook&other,bool copyType);
    void operator=(const LibraryBook& other);
    string getTitle();
    string getAuthor();
    int getPages();
    void setTitle(string a);
    void setAuthor(string b);
    void setPages(int c);
    void display();
    // Implement the constructor, copy constructor, assignment operator,
    // and member functions with appropriate access modifiers.

};
void q3();
#endif //INC_2024_SPRING_SE102A_ASSIGNMENT3_BSSE23100_LIBRARYBOOK_H
