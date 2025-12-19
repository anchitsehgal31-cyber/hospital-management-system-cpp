#include "Doctor.h"
#include <iostream>
using namespace std;

Doctor::Doctor(string n, int a, string g, string s, int id)
    : Person(n, a, g), specialization(s), doctorID(id) {}

void Doctor::displayInfo() const {
    cout << "\n--- Doctor Information ---\n";
    Person::displayInfo();
    cout << "Specialization: " << specialization
         << "\nDoctor ID: " << doctorID << endl;
}

int Doctor::getDoctorID() const {
    return doctorID;
}

string Doctor::getName() const {
    return name;
}
