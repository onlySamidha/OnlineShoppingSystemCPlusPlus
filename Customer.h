#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
using namespace std;

// Customer class stores customer details and performs customer-related operations.
class Customer {
private:
    int customerid;
    string name;
    string email;
    string phone;
    string address;

public:
    Customer() : customerid(0) {}

    // Sets and returns the customer ID.
    void setCustomerid(int customerid) { this->customerid = customerid; }
    int getCustomerid() const { return customerid; }

    // Sets and returns the customer name.
    void setName(string name) { this->name = name; }
    string getName() const { return name; }

    // Sets and returns the customer email address.
    void setEmail(string email) { this->email = email; }
    string getEmail() const { return email; }

    // Sets and returns the customer phone number.
    void setPhone(string phone) { this->phone = phone; }
    string getPhone() const { return phone; }

    // Sets and returns the customer address.
    void setAddress(string address) { this->address = address; }
    string getAddress() const { return address; }

    // Logs the customer into the system.
    void login() { cout << "Customer has logged in." << endl; }

    // Registers a new customer.
    void registerCustomer() { cout << "Customer has registered." << endl; }

    // Places an order for the customer.
    void placeOrder() { cout << "Order has been placed." << endl; }
};
#endif
