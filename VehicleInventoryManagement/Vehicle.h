#pragma once
#include<iostream>
#include<string>

using namespace std;

class Vehicle {
protected:
	string manufacturer;
	int year;
public:
	Vehicle();
	void setManufacturer(string);
	void setYear(int);
	string getManufacturer();
	int getYear();
	virtual void displayInfo();
};
