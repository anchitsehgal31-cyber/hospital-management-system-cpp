#include "Billing.h"
#include <iostream>
using namespace std;

Billing::Billing() : totalAmount(0) {}

void Billing::calculateBill(float consultationFee, float medicineCost, float roomCharge) {
    totalAmount = consultationFee + medicineCost + roomCharge;
}

void Billing::displayBill() const {
    cout << "\n--- Billing Information ---\n";
    cout << "Total Bill Amount: Rs. " << totalAmount << endl;
}
