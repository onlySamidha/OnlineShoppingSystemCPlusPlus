#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include <string>
using namespace std;

// Order class stores order details and can confirm or cancel an order.
class Order {
private:
    int orderId;
    double totalAmount;
    string orderDate;
    string status;

public:
    Order() : orderId(0), totalAmount(0.0) {}

    // Sets and returns the order ID.
    void setOrderId(int orderId) { this->orderId = orderId; }
    int getOrderId() const { return orderId; }

    // Sets and returns the order date.
    void setOrderDate(string orderDate) { this->orderDate = orderDate; }
    string getOrderDate() const { return orderDate; }

    // Sets and returns the total order amount.
    void setTotalAmount(double totalAmount) { this->totalAmount = totalAmount; }
    double getTotalAmount() const { return totalAmount; }

    // Sets and returns the order status.
    void setStatus(string status) { this->status = status; }
    string getStatus() const { return status; }

    // Confirms the customer order.
    void confirmOrder() { cout << "order has been confirmed" << endl; }

    // Cancels the order.
    void cancelOrder() { cout << "order has been cancelled" << endl; }
};
#endif
