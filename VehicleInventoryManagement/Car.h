#pragma once
#include "Vehicle.h"
class Car : public Vehicle {
	private:
		int numberDoors;
	public:
		Car();
		void displayInfo();
		void setNumDoors(int);
		int getNumDoors();
};

