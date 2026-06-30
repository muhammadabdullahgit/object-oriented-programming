#include "library.h"
#include <iostream>

Library::Library(string name, string location) : name(name), location(location), books(nullptr), bookCount(0) {
    
}

Library::~Library() {
    
}

void Library::addBook(string title, string author, int year, string ISBN) {
    Book *arr=new Book[bookCount+1];
    for (int i = 0; i < bookCount; ++i) {
        arr[i]=books[i];
    }
    arr[bookCount]=Book(title,author,year,ISBN);
    delete [] books;
    books=arr;
    bookCount++;
}

void Library::printLibraryInfo() {
    cout<<"library name ="<<name<<endl;
    cout<<"library location ="<<location<<endl;
    cout<<"book details ="<<endl;
    for (int i = 0; i < bookCount; ++i) {
        cout<<"book title  ="<<books[i].title<<endl;
        cout<<"author name ="<<books[i].author<<endl;
        cout<<"author year ="<<books[i].year<<endl;
        cout<<" book ISBN  ="<<books[i].ISBN<<endl;
        cout<<endl;
    }
}

void Library::printBookInfo(string title) {
    int bookCheck=0;
    for (int i = 0; i <= bookCount; ++i) {
        if(books[i].title==title){
            bookCheck+=1;
            cout<<"book title  ="<<books[i].title<<endl;
            cout<<"author name ="<<books[i].author<<endl;
            cout<<"author year ="<<books[i].year<<endl;
            cout<<" book ISBN  ="<<books[i].ISBN<<endl;
            cout<<endl;
        }
    }
    if(bookCheck==0){
        cout<<"book is not present"<<endl;
    }
}
void q1(){
    string name,location, title,author,ISBN;
    int year;
    cin.ignore();
    cout<<"enter name of library"<<endl;
    getline(cin,name);
    cout<<"enter location of library"<<endl;
    getline(cin,location);
    Library l(name,location);
    cout<<"add books"<<endl;
    for (int i = 0; i <= l.bookCount; ++i) {
        cout << "enter title of book" << endl;
        cin.ignore();
        getline(cin, title);
        cout << "enter author of book" << endl;
        getline(cin, author);
        cout << "enter year of book" << endl;
        cin >> year;
        cout << "enter ISBN of book" << endl;
        cin >> ISBN;
        l.addBook(title, author, year, ISBN);
        cout << endl;
        cout << "enter 1 to add more books" << endl;
        int x;
        cin >> x;
        if (x == 1) {
            l.addBook(title, author, year, ISBN);
            l.bookCount++;
            break;
        } else {
            break;
        }
    }
    cout<<endl;
    cout<<"enter 1 to print library info"<<endl;
    cout<<"enter 2 to print book info"<<endl;
    int a;
    cin>>a;
    switch (a) {
        case 1:{
            l.printLibraryInfo();
            break;
        }
        case 2:{
            cout<<"enter title of book"<<endl;
            string t;
            cin>>t;
            l.printBookInfo(t);
            break;
        }
        default:{
            cout<<"some error occurred in q1"<<endl;
        }
    }
}