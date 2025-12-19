#ifndef HOSPITALSYSTEM_H
#define HOSPITALSYSTEM_H

#include <vector>
#include "Doctor.h"
#include "Patient.h"
#include "Appointment.h"

class HospitalSystem {
    std::vector<Doctor> doctors;
    std::vector<Patient> patients;
    std::vector<Appointment> appointments;

    int docCounter = 100;
    int patCounter = 200;
    int appCounter = 300;

public:
    void addDoctor();
    void addPatient();
    void bookAppointment();
    void generateBill();
    void showDoctors() const;
    void showPatients() const;
    void showAppointments() const;
    void menu();
};

#endif
