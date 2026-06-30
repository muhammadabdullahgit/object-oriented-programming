// q3.h
#ifndef _Q3_H
#define _Q3_H

#include <string>

using namespace std;

struct Product {
    int productId;
    string productName;
    int quantity;
    float price;
    Product();
    Product(string productName,int productId , int quantity, float price);

    ~Product();
};

Product createProduct( string productName,int productId, int quantity, float price);

void deleteProduct(Product &product);

void printProductDetails(Product &product);

void checkInventoryQuantity(Product &product);
void q3();
#endif
