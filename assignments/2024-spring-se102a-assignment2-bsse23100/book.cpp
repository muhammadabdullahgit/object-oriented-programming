#include "book.h"

Book::Book() {
     title="";
     author="";
     year=0;
     ISBN="";
}
Book::Book(string title,string author,int year, string ISBN){
title=title;
author=author;
year=year;
ISBN=ISBN;
}
