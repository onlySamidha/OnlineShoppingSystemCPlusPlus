#ifndef CART_H
#define CART_H
#include <iostream>
#include <string>
using namespace std;

// Cart class represents the shopping cart of a customer.
class Cart {
private:
    int cartId;
    string createDate;

public:
    Cart() : cartId(0) {}

    // Sets and returns the cart ID.
    void setCartId(int cartId) { this->cartId = cartId; }
    int getCartId() const { return cartId; }

    // Sets and returns the cart creation date.
    void setCreateDate(string createDate) { this->createDate = createDate; }
    string getCreateDate() const { return createDate; }

    // Adds an item to the cart.
    void addItem() { cout << "Item added" << endl; }

    // Removes an item from the cart.
    void removeItem() { cout << "Item removed" << endl; }

    // Displays the items in the cart.
    void viewCart() { cout << "viewing" << endl; }
};
#endif
