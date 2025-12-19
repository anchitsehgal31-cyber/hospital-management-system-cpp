#ifndef PATIENT_H
#define PATIENT_H

#include "Person.h"
#include <string>
using namespace std;

class Patient : public Person {
    int patientID;
    string disease;

public:
    Patient(string n = "", int a = 0, string g = "", string d = "", int id = 0);

    void displayInfo() const override;

    int getPatientID() const;
    string getName() const;
};

#endif
