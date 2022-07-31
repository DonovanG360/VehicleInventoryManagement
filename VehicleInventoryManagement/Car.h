#pragma once
#include "Vehicle.h"
class Car : protected Vehicle {
	private:
		int numberDoors;
	public:
		Car();
		void displayInfo();
		void setNumDoors(int);
		int getNumDoors();
};

