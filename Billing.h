#ifndef BILLING_H
#define BILLING_H

class Billing {
    float totalAmount;

public:
    Billing();

    void calculateBill(float consultationFee, float medicineCost, float roomCharge = 0);

    void displayBill() const;
};

#endif
