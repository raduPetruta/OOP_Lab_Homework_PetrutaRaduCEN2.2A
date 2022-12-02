#include "Car.h"
#include "Driver.cpp"
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Car : Driver {
public:
	string carCode;
	string carMake;
	string engine;
	string yearOfProd;
	int kmRange;
	int horsePower;
	Driver driver;
	Car(string carCode, string carMake, string engine, string yearOfProd, int kmRange, int horsePower, Driver driver) {
		this->carCode = carCode;
		this->carMake = carMake;
		this->engine = engine;
		this->yearOfProd = yearOfProd;
		this->kmRange = kmRange;
		this->horsePower = horsePower;
		this->driver = driver;
	}
};