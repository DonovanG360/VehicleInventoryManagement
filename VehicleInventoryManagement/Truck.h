#pragma once
#include "Vehicle.h"
class Truck : protected Vehicle {
	private:
		int towCap;
	public:
		Truck();
		void displayInfo();
		void setTowCap(int);
		int getTowCap();
};

