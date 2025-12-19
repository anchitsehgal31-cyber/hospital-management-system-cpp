#include "Patient.h"
#include <iostream>
using namespace std;

Patient::Patient(string n, int a, string g, string d, int id)
    : Person(n, a, g), patientID(id), disease(d) {}

void Patient::displayInfo() const {
    cout << "\n--- Patient Information ---\n";
    Person::displayInfo();
    cout << "Disease: " << disease
         << "\nPatient ID: " << patientID << endl;
}

int Patient::getPatientID() const {
    return patientID;
}

string Patient::getName() const {
    return name;
}
