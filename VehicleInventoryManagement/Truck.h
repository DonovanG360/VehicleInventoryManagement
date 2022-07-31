#pragma once
#include "Vehicle.h"
class Truck : public Vehicle {
	private:
		int towCap;
	public:
		Truck();
		void displayInfo();
		void setTowCap(int);
		int getTowCap();
};

