#include "Truck.h"
#ifndef TRUCK_H
#define TRUCK_H

// *********************
//      CONSTRUCTOR
// *********************

Truck::Truck() {
	year = 0000;
	manufacturer = "";
	towCap = 0;
}

// ***********************
//      SET FUNCTIONS
// ***********************

void Truck::setTowCap(int tow) {
	// Input Validation
	if (tow < 0) {
		bool isValInput = false;
		while (isValInput == false) {
			cout << "Truck must have a tow capacity at or above 0! Please enter a valid number: ";
			cin >> tow;
			if (tow >= 0) {
				isValInput = true;
			}
		}
	}

	towCap = tow;

}


// ***********************
//      GET FUNCTIONS
// ***********************

int Truck::getTowCap() {
	return towCap;
}

#endif