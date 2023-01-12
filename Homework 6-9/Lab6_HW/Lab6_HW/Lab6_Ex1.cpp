#include <cmath>
#include <iostream>
using namespace std;

class Complex {
private:
	double realPart;
	double imaginaryPart;
public:
	Complex(double real, double imag) : realPart(real), imaginaryPart(imag) {}
	double real() { 
		return realPart; 
	}
	double imag() { 
		return imaginaryPart; 
	}
	double abs() { 
		return sqrt(realPart * realPart + imaginaryPart * imaginaryPart); 
	}
	Complex power(int power) {
		if (power == 2) 
			return Complex(realPart * realPart - imaginaryPart * imaginaryPart, 2 * realPart * imaginaryPart);  	
		else 
			cout << "The power is not 2";
	}
	Complex operator+(const Complex& other) const {
		return Complex(realPart + other.realPart, imaginaryPart + other.imaginaryPart);
	}
};

ostream& operator<<(ostream& ostrm, const Complex& nr) {
	ostrm << nr.real() << " + " << nr.imag() << "i";
	return ostrm;
}

int main() {
	Complex c1(15, 61);
	Complex c2(43, 64);

	cout << c1.abs(); 
	cout << c1.power(2);
	cout << c1 + c2; 
	return 0;
}