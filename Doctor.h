#ifndef DOCTOR_H
#define DOCTOR_H

#include "Person.h"
#include <string>
using namespace std;

class Doctor : public Person {
    string specialization;
    int doctorID;

public:
    Doctor(string n = "", int a = 0, string g = "", string s = "", int id = 0);

    void displayInfo() const override;

    int getDoctorID() const;
    string getName() const;
};

#endif
