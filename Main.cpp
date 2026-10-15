// Name: Samidha Mote
// Roll no.: 2643
// Main file for the Online Shopping Management System.
// It creates objects, uses setter/getter methods, and calls shopping operations.

#include <iostream>
#include "Customer.h"
#include "Product.h"
#include "Cart.h"
#include "Order.h"
#include "Payment.h"
#include "Shipment.h"
using namespace std;

int main() {
    Customer c;
    c.setCustomerid(10);
    c.setName("Samidha");
    c.setEmail("samidhamote04@gmail.com");

    Product p;
    p.setProductId(1);
    p.setName("laptop");
    p.setPrice(67000);

    Cart cart;
    Order o;
    Payment pay;
    Shipment s;

    cout << "Customer:" << c.getName() << endl;
    cout << "Product:" << p.getName() << endl;
    cout << "price:" << p.getprice() << endl;

    c.registerCustomer();
    c.login();
    cart.addItem();
    o.confirmOrder();
    pay.makePayment();
    s.trackingShipment();

    return 0;
}
