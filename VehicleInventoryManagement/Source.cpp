// Donovan Green
// CIS 1202
// 7/30/2021
// Vehicle Management

#include<iostream>
#include<string>
#include "Car.h"
#include "Truck.h"
#include "Vehicle.h"
using namespace std;

int main() {
	int year, doors, tow;
	string manufacturer;
	Vehicle coolVehicle;
	Car coolCar;
	Truck coolTruck;

	cout << "Vehicle Program! " << endl;

	cout << "\nVehicle:" << endl;
	cout << "Enter the manufacturer: "; getline(cin, manufacturer);
	cout << "Enter the year built: "; cin >> year;
	coolVehicle.setManufacturer(manufacturer);
	// input validation is included in the member function for year
	coolVehicle.setYear(year);
	coolVehicle.displayInfo();
	
	cout << "\nCar:" << endl;
	cout << "Enter the manufacturer: "; getline(cin, manufacturer);
	cout << "Enter the year built: "; cin >> year;
	cout << "Enter the number of doors: "; cin >> doors;
	coolCar.setManufacturer(manufacturer);


	cout << "Thanks for using the program!";
	cout << "\n\n";
	system("pause");
	return 0;
}