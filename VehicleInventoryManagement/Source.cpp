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
	coolVehicle.setManufacturer(manufacturer);
	cout << "Enter the year built: "; cin >> year;
	// input validation is included in the member function setYear
	coolVehicle.setYear(year);
	coolVehicle.displayInfo();
	
	cout << "\nCar:" << endl;
	cin.ignore(1, '\n');
	cout << "Enter the manufacturer: "; getline(cin, manufacturer);
	coolCar.setManufacturer(manufacturer);
	cout << "Enter the year built: "; cin >> year;
	coolCar.setYear(year);
	cout << "Enter the number of doors: "; cin >> doors;
	// input validation is included in the member function setNumDoors
	coolCar.setNumDoors(doors);
	coolCar.displayInfo();

	cout << "\nTruck:" << endl;
	cin.ignore(1, '\n');
	cout << "Enter the manufacturer: "; getline(cin, manufacturer);
	coolTruck.setManufacturer(manufacturer);
	cout << "Enter the year built: "; cin >> year;
	coolTruck.setYear(year);
	cout << "Enter the tow capacity: "; cin >> tow;
	// input validation is included in the member function setTowCap
	coolTruck.setTowCap(tow);

	cout << "Thanks for using the program!";
	cout << "\n\n";
	system("pause");
	return 0;
}