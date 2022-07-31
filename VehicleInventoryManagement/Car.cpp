#include "Car.h"
#ifndef CAR_H
#define CAR_H

// *********************
//      CONSTRUCTOR
// *********************

Car::Car() {
	manufacturer = "";
	year = 0000;
	numberDoors = 0;
}

// *******************************
//      DISPLAY INFO FUNCTION
// *******************************

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of doors: " << numberDoors << endl;
}

// ***********************
//      SET FUNCTIONS
// ***********************

void Car::setNumDoors(int numDoors) {
	// Input Validation
	if (numDoors < 0) {
		bool isValInput = false;
		while (isValInput == false) {
			cout << "Number of doors cannot be negative! Please enter a valid number of doors: "; cin >> numDoors;
			if (numDoors >= 0) {
				isValInput = true;
			}
		}
	}
	numberDoors = numDoors;
}

// ***********************
//      GET FUNCTIONS
// ***********************

int Car::getNumDoors() {
	return numberDoors;
}

#endif
