#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <string>
using namespace std;

// Product class stores product details and product-related operations.
class Product {
private:
    int productId;
    string name;
    double price;
    int stock;

public:
    Product() : productId(0), price(0.0), stock(0) {}

    // Sets and returns the product ID.
    void setProductId(int productId) { this->productId = productId; }
    int getproductId() const { return productId; }

    // Sets and returns the product name.
    void setName(string name) { this->name = name; }
    string getName() const { return name; }

    // Sets and returns the product price.
    void setPrice(double price) { this->price = price; }
    double getprice() const { return price; }

    // Sets and returns the available stock.
    void setStock(int stock) { this->stock = stock; }
    int getstock() const { return stock; }

    // Updates the stock of the product.
    void updateStock() { cout << "Stock updated" << endl; }

    // Displays the product details.
    void displayDetails() { cout << "displaying product details" << endl; }
};
#endif
