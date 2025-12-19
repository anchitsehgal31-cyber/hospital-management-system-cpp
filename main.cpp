// main.cpp
#include <iostream>
#include "HospitalSystem.h"
using namespace std;

int main() {
    HospitalSystem hms;  // Object of HospitalSystem class
    cout << "Welcome to the Hospital Management System (OOP Project)\n";
    hms.menu();          // Calling class method using object
    return 0;
}
