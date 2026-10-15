#ifndef SHIPMENT_H
#define SHIPMENT_H
#include <iostream>
#include <string>
using namespace std;

// Shipment class stores shipment details and tracks a shipment.
class Shipment {
private:
    int shipmentId;
    string trackingNumber;
    string shipmentDate;
    string deliveryStatus;

public:
    Shipment() : shipmentId(0) {}

    // Displays the shipment tracking status.
    void trackingShipment() { cout << "Tracking shipment" << endl; }
};
#endif
