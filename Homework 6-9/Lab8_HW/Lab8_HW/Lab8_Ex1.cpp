#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumber {
private:
	double realPart;
	double imaginaryPart;

public:
	double getModule() {
		return std::sqrt(realPart * realPart + imaginaryPart * imaginaryPart);
	}
	ComplexNumber(double r, double i) : realPart(r), imaginaryPart(i) {}
};
int main() {
	ComplexNumber nr1(4, 5);
	ComplexNumber nr2(23, 25);
	
	if (nr1.getModule() < nr2.getModule()) 
		cout << "nr1";
	else
		cout << "nr2";
	return 0;
}