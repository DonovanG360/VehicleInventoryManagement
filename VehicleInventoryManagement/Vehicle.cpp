#include "Vehicle.h"
#ifndef VEHICLE_H
#define VEHICLE_H

// *********************
//      CONSTRUCTOR
// *********************

Vehicle::Vehicle() {
	manufacturer = "";
	year = 2000;
}

// *******************************
//      DISPLAY INFO FUNCTION
// *******************************

void Vehicle::displayInfo() {
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer:        " << manufacturer << endl;
	cout << "Year:                " << year << endl;
}

// ***********************
//      SET FUNCTIONS
// ***********************

void Vehicle::setManufacturer(string newManu) {
	manufacturer = newManu;
}

void Vehicle::setYear(int nYear) {
	// Input validation to check if nYear is a 4 digit int.
	if (nYear <= 999 || nYear > 9999) {
		bool isValInput = false;
		while (isValInput == false) {
			cout << "Invalid year! please enter new year! ";
			cin >> nYear;
			if (nYear >= 1000 && nYear <= 9999) {
				isValInput = true;
			}
		}
	}
	year = nYear;
}

// ***********************
//      GET FUNCTIONS
// ***********************

string Vehicle::getManufacturer() {
	return manufacturer;
}

int Vehicle::getYear() {
	return year;
}

#endif