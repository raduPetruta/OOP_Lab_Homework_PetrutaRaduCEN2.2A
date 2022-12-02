#include "Hummer.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;
class Hummer {
public:
	int size;
	int price;
	int yearOfProduction;
	int horsePower;
	string serialNumber;
	string color;
	class HummerWheel {
	public:int size;
		  int price;
		  int diameter;
		  string position;
		  string shieldType;
		  string wheelSeason;
		  bool isRemoved = false;
		  HummerWheel(int size, int price, int diameter, string position, string shieldType, string wheelSeason) {
			  this->size = size;
			  this->price = price;
			  this->diameter = diameter;
			  this->position = position;
			  this->shieldType = shieldType;
			  this->wheelSeason = wheelSeason;
		  }
	};
	
	HummerWheel w1 = HummerWheel(16, 40, 26, "Left Front", "No shield", "winter");
	HummerWheel w2 = HummerWheel(16, 40, 26, "Left Back", "Shielded", "winter");
	HummerWheel w3 = HummerWheel(16, 40, 26, "Right Front", "Shielded", "winter");
	HummerWheel w4 = HummerWheel(16, 40, 26, "Right Back", "No shield", "winter");

	list<HummerWheel> theWheels = { w1, w2, w3, w4 };
	void removeHummerWheel(string position) {
		for (HummerWheel wheel : theWheels) {
			if (wheel.position == position && wheel.isRemoved == false) {
				wheel.isRemoved == true;
				cout << "The " << wheel.position << " wheel has been removed!";
				break;
			}
		}
	}
	void replaceHummerWheel(string position) {
		for (HummerWheel wheel : theWheels) {
			if (wheel.position == position && wheel.isRemoved) {
				wheel.isRemoved == false;
				cout << "The " << wheel.position << " has been replaced!";
				break;
			}
		}
	}
	Hummer(int size, int price, int yearOfProduction, int horsePower, string serialNumber, string color) {
		this->size = size;
		this->price = price;
		this->yearOfProduction = yearOfProduction;
		this->horsePower = horsePower;
		this->serialNumber = serialNumber;
		this->color = color;
	}
};