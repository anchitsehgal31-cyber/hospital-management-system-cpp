#include "Appointment.h"
#include <iostream>
using namespace std;

Appointment::Appointment(int appID, int dID, int pID, string dt)
    : appointmentID(appID), doctorID(dID), patientID(pID), date(dt) {}

void Appointment::displayAppointment() const {
    cout << "\n--- Appointment Details ---\n";
    cout << "Appointment ID: " << appointmentID
         << "\nDoctor ID: " << doctorID
         << "\nPatient ID: " << patientID
         << "\nDate: " << date << endl;
}
