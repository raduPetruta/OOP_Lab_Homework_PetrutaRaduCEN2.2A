#include <cmath>
#include <iostream>
using namespace std;

class Complex {

private:
	double real;
	double imaginary;

public:
	Complex(double real, double imag) : real(real), imaginary(imag) {}
	double real() { 
		return real; 
	}
	double imag() { 
		return imaginary; 
	}
	double abs() { 
		return sqrt(real * real + imaginary * imaginary); }
	bool operator<(const Complex& op) {
		return abs() < op.abs();
	}
};
int main() {
	
	Complex c1(1, 2);
	Complex c2(3, 4);
	cout << boolalpha << (c1 < c2);
	cout << boolalpha << (c2 < c1);
	return 0;
}