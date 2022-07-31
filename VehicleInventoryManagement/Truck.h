#pragma once
#include "Vehicle.h"
class Truck : protected Vehicle {
	private:
		int towCap;
	public:
		Truck();
		void displayInfo(Vehicle&);
		void setTowCap(int);
		int getTowCap();
};

