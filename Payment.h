#ifndef PAYMENT_H
#define PAYMENT_H
#include <iostream>
#include <string>
using namespace std;

// Payment class stores payment details and processes payment.
class Payment {
private:
    int paymentId;
    string paymentMethod;
    double amount;
    string paymentStstus; // Kept as named in the original Python code.

public:
    Payment() : paymentId(0), amount(0.0) {}

    // Processes the payment and displays a success message.
    void makePayment() { cout << "Payment Successful" << endl; }
};
#endif
