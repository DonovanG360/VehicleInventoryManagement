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
	cout << "Number of doors:   " << numberDoors << endl;
}

// ***********************
//      SET FUNCTIONS
// ***********************

void Car::setNumDoors(int numDoors) {
	numberDoors = numDoors;
}

// ***********************
//      GET FUNCTIONS
// ***********************

int Car::getNumDoors() {
	return numberDoors;
}

#endif
