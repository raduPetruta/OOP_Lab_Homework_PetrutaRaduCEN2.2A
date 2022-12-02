#include "Driver.h"
#include <iostream>
#include <string>
#include <list>
using namespace std;

class Driver{
public:
	string name;
	string company;
	int age;
	int score;
	string reactionTime;
	Driver(string name, string company, int age, int score, string reactionTime) {
		this->name = name;
		this->company = company;
		this->age = age;
		this->score = score;
		this->reactionTime = reactionTime;
	}
};