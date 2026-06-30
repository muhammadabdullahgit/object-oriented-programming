#include "LibraryBook.h"
LibraryBook::LibraryBook(){
    title=new string ("");
    author= new string ("");
    pages=new int (0);
}
LibraryBook::LibraryBook(string a, string b, int c){
    title=new string (a);
    author= new string (b);
    pages=new int (c);
}
LibraryBook::LibraryBook(LibraryBook&other,bool copyType){
    if(copyType) {
        title = new string(*other.title);
        author = new string(*other.author);
        pages = new int(*other.pages);
        cout<<"deep copy done"<<endl;
    }
    else {
        title = other.title;
        author = other.author;
        pages = other.pages;
        cout<<"shallow copy done"<<endl;
    }
}
void LibraryBook::operator=(const LibraryBook& other){
    title = new string(*other.title);
    author = new string(*other.author);
    pages = new int (*other.pages);
}
string LibraryBook:: getTitle(){
    return *title;
}
string LibraryBook::getAuthor(){
    return *author;
}
int LibraryBook::getPages(){
    return *pages;
}
void LibraryBook::setTitle(string a){
    *title=a;
}
void LibraryBook::setAuthor(string b){
    *author=b;
}
void LibraryBook::setPages(int c){
    *pages=c;
}
void LibraryBook::display(){
    cout<<"title="<<*title<<endl;
    cout<<"author="<<*author<<endl;
    cout<<"pages="<<*pages<<endl;
}
LibraryBook::~LibraryBook(){
}
void q3(){
    LibraryBook b;
    string title;
    string author;
    int pages;
    cout<<"enter title of book"<<endl;
    cin>>title;
    cout<<"enter author of book"<<endl;
    cin>>author;
    cout<<"enter pages of book "<<endl;
    cin>>pages;
    LibraryBook b1(title,author,pages);
    cout<<"enter (1) for deep copy otherwise (0)"<<endl;
    bool type= false;
    int y;
    cin>>y;
    if (y==1){
        type=true;
    }
    LibraryBook b2(b1,type);
    LibraryBook b3;
    b3=b1;
    cout<<"default constructor display"<<endl;
    b.display();
    cout<<"parameterized constructor display"<<endl;
    b1.display();
    cout<<"copy constructor display"<<endl;
    b2.display();
    cout<<"assignment operator display"<<endl;
    b3.display();
    return;
}