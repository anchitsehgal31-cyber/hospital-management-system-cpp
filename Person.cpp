#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string n, int a, string g) {
    name = n;
    age = a;
    gender = g;
}

void Person::displayInfo() const {
    cout << "Name: " << name
         << "\nAge: " << age
         << "\nGender: " << gender << endl;
}
