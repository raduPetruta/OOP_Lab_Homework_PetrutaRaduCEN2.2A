#include "Carriage.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;
class Carriage {
public:
	int size;
	int price;
	int yearOfProduction;
	int horsePower;
	string serialNumber;
	string color;
	class CarriageWheel {
	public :int size;
		    int price;
    		int diameter;
	    	string position;
		    bool isRemoved = false;
		    CarriageWheel(int size, int price, int diameter, string position) {
			    this->size = size;
		    	this->price = price;
			    this->diameter = diameter;
			    this->position = position;
		    }
	};
	
	CarriageWheel w1 = CarriageWheel(12, 50, 22, "Left Front");
	CarriageWheel w2 = CarriageWheel(12, 50, 22, "Left Back");
	CarriageWheel w3 = CarriageWheel(12, 50, 22, "Right Front");
	CarriageWheel w4 = CarriageWheel(12, 50, 22, "Right Back");
	list<CarriageWheel> theWheels = { w1, w2, w3, w4};

	void removeWheel(string position) {
		for (CarriageWheel wheel : theWheels) {
			if (wheel.position == position && wheel.isRemoved == false) {
				wheel.isRemoved == true;
				cout << "The " << wheel.position << " wheel has been removed!";
				break;
			}
		}
	}
	void replaceWheel(string position) {
		for (CarriageWheel wheel : theWheels) {
			if (wheel.position == position && wheel.isRemoved) {
				wheel.isRemoved == false;
				cout << "The " << wheel.position << " has been replaced!";
				break;
			}
		}
	}
	Carriage(int size, int price, int yearOfProduction,	int horsePower, string serialNumber, string color) {
		this->size = size;
		this->price = price;
		this->yearOfProduction = yearOfProduction;
		this->horsePower = horsePower;
		this->serialNumber = serialNumber;
		this->color = color;
	}
};