#include "GarageManager.h"
#include "Driver.cpp"
#include "Car.cpp"
#include <iostream>
#include <string>
#include <list>
using namespace std;

class GarageManager {
public:
	list<Car> cars;
	list<Driver> drivers;
	void addDriver(Driver theDriver) {
		bool isAlreadyInList = false;
		for (Driver driver : drivers) {
			if (driver.name == theDriver.name) {
				cout << "The driver " << driver.name << " is already on the list.";
				isAlreadyInList = true;
				break;
			}
		}
		if (isAlreadyInList == false)
		   this->drivers.push_back(theDriver);
	}
	void addCar(Car theCar) {
		bool isAlreadyInList = false;
		for (Car car : cars) {
			if (car.carCode == theCar.carCode) {
				cout << "The driver " << car.carCode << " is already on the list.";
				isAlreadyInList = true;
				break;
			}
		}
		if (isAlreadyInList == false)
			this->cars.push_back(theCar);
	}
	void showDrivers() {
		for (Driver driver : drivers) {
			cout << driver.name << "\n";
		}
	}
	void showCars() {
		for (Car car : cars) {
			cout << car.carCode << "\n";
		}
	}
};