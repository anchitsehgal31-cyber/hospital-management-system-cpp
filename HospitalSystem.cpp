#include "HospitalSystem.h"
#include "Billing.h"
#include <iostream>
using namespace std;

void HospitalSystem::addDoctor() {
    string name, gender, specialization;
    int age;

    cout << "Enter Doctor Name: ";
    cin >> ws;
    getline(cin, name);

    cout << "Enter Age Gender Specialization: ";
    cin >> age >> gender >> specialization;

    doctors.push_back(Doctor(name, age, gender, specialization, ++docCounter));
    cout << "Doctor added successfully!\n";
}

void HospitalSystem::addPatient() {
    string name, gender, disease;
    int age;

    cout << "Enter Patient Name: ";
    cin >> ws;
    getline(cin, name);

    cout << "Enter Age Gender Disease: ";
    cin >> age >> gender >> disease;

    patients.push_back(Patient(name, age, gender, disease, ++patCounter));
    cout << "Patient added successfully!\n";
}

void HospitalSystem::bookAppointment() {
    int dID, pID;
    string date;

    cout << "Enter Doctor ID, Patient ID, Date (DD/MM/YYYY): ";
    cin >> dID >> pID >> date;

    appointments.push_back(Appointment(++appCounter, dID, pID, date));
    cout << "Appointment booked successfully!\n";
}

void HospitalSystem::generateBill() {
    float consultation, medicine, room;

    cout << "Enter Consultation Fee, Medicine Cost, Room Charge: ";
    cin >> consultation >> medicine >> room;

    Billing bill;
    bill.calculateBill(consultation, medicine, room);
    bill.displayBill();
}

void HospitalSystem::showDoctors() const {
    if (doctors.empty()) {
        cout << "No doctors available.\n";
        return;
    }
    for (const auto &d : doctors)
        d.displayInfo();
}

void HospitalSystem::showPatients() const {
    if (patients.empty()) {
        cout << "No patients registered.\n";
        return;
    }
    for (const auto &p : patients)
        p.displayInfo();
}

void HospitalSystem::showAppointments() const {
    if (appointments.empty()) {
        cout << "No appointments booked.\n";
        return;
    }
    for (const auto &a : appointments)
        a.displayAppointment();
}

void HospitalSystem::menu() {
    int choice;
    do {
        cout << "\n===== Hospital Management System =====\n";
        cout << "1. Add Doctor\n";
        cout << "2. Add Patient\n";
        cout << "3. Book Appointment\n";
        cout << "4. Show Doctors\n";
        cout << "5. Show Patients\n";
        cout << "6. Show Appointments\n";
        cout << "7. Generate Bill\n";
        cout << "8. Exit\n";
        cout << "Enter choice: ";

        cin >> choice;

        switch (choice) {
            case 1: addDoctor(); break;
            case 2: addPatient(); break;
            case 3: bookAppointment(); break;
            case 4: showDoctors(); break;
            case 5: showPatients(); break;
            case 6: showAppointments(); break;
            case 7: generateBill(); break;
            case 8: cout << "Exiting system...\n"; break;
            default: cout << "Invalid option! Try again.\n";
        }
    } while (choice != 0);
}
