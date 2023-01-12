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
	Complex operator+(const Complex& other) const {
		return Complex(real + other.real, imaginary + other.imaginary);
	}
};
int main() {
	Complex c1(1, 2);
	Complex c2(3, 4);
	Complex c3= c1 + c2;
	cout << c3.real() << " + " << c3.imag() << "i";
	return 0;
}