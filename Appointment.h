#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
using namespace std;

class Appointment {
    int appointmentID;
    int doctorID;
    int patientID;
    string date;

public:
    Appointment(int appID = 0, int dID = 0, int pID = 0, string dt = "");

    void displayAppointment() const;
};

#endif
