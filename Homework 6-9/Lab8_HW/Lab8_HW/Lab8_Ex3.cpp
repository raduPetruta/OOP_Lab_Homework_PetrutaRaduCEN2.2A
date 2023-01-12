#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class Person {
private:
	int theAge;
public:
	Person(int age) : theAge(age) {}
	int getAge() { 
		return theAge;
	}
	void setAge(int age) {
		this->theAge = age;
	}
};

class Car {
private:
	int theAge;
public:
	Car(int age) : theAge(age) {}
	int getAge() { 
		return theAge; 
	}
	void setAge(int age) {
		this->theAge = age;
	}
};

template <typename T>

double averageAge(const list<T>& items) {

	int ageTotal = 0;

	for (const auto& item : items) {
		ageTotal += item.getAge();
	}
	double theRes = totalAge / items.size();
	return theRes;
}

int main() {
	
	list<Person> people = { 
		Person(20), 
		Person(25) 
	};
	
	list<Car> cars = { 
		Car(10), 
		Car(26) 
	};

	cout << "Average age" << averageAge(people);
	cout << "Average age" << averageAge(cars);

	return 0;
}