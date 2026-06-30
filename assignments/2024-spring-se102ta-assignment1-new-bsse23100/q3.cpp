// q3.cpp
#include "q3.h"
#include <iostream>

using namespace std;
Product::Product() {
    productName = "";
    productId = 0;
    quantity = 0;
    price = 0.0;
}
Product::Product(string ProductName, int ProductId, int Quantity, float Price) {
    productName = ProductName;
    productId = ProductId;
    quantity = Quantity;
    price = Price;
}
Product::~Product() {
    
}

Product createProduct(string productName,int productId,  int quantity, float price) {
    cout << "the product is entered" << endl;
    return Product(productName,productId,quantity,price);
}


void deleteProduct(Product *&product,int &size) {
    cout << "enter  product name  to delete" << endl;
    string x;
    cin >> x;
    for (int i = 0; i < size; i++) {
        if (x == product[i].productName) {
            swap(product[i], product[size - 1]);
            size-=1;
        }
    }
    cout<<"product deleted"<<endl;
}


void printProductDetails(Product &product) {
    cout<<" product id ="<<product.productId<<endl;
    cout<<" product name ="<<product.productName<<endl;
    cout<<" product quantity = "<<product.quantity<<endl;
    cout<<" product price ="<<product.price<<endl;
}

void checkInventoryQuantity(Product &product) {
    cout<<" product quantity = "<<product.quantity<<endl;
}
void storingProduct(Product *&arr, int &size) {
    Product *arr1 = new Product[size + 1];
    for (int i = 0; i < size; ++i) {
        arr1[i] = arr[i];
    }
    delete[] arr;
    arr = arr1;
    size+=1;
}
void q3 (){
    string productName;
    int productId=1;
    int quantity=1;
    float price;
    int size=1;
    Product*arr=new Product[1]{Product("",0,0,0.0)};
    for (int i = 0;i<size; i++) {
        cout << "enter product name" << endl;
        cin >> productName;
        cout << "enter product id" << endl;
        cin >> productId;
        cout << "enter  quantity of product" << endl;
        cin >> quantity;
        cout << "enter price" << endl;
        cin >> price;
        arr[i]= createProduct(productName,productId,quantity,price);
        cout<<"enter 1 to add more products"<<endl;
        int x;
        cin>>x;
        if (x==1){
            storingProduct(arr,size);
        }
        else {
            break;
        }
    }
    cout << "enter 1  to delete product" << endl;
    cout << "enter 2  to print product all details" << endl;
    int x;
    cin>>x;
    switch(x){
        case 1:{
            deleteProduct(arr, size);
            break;
        }
        case 2:{
            for (int i = 0; i < size; ++i) {
                printProductDetails(arr[i]);
            }
            break;
        }
        default :{
            cout<<"some error  occurred in q3"<<endl;
            break;
        }
    }
}