#include <complex>
#include <iostream>
using namespace std;

template <typename T>
bool operator>(const complex<T>& lhs, const T& rhs) {
	return abs(lhs) > rhs;
}

template <typename T>
bool operator<(const complex<T>& lhs, const T& rhs) {
	return abs(lhs) < rhs;
}

template <typename T, typename U>
bool operator>(const complex<T>& lhs, const U& rhs) {
	return abs(lhs) > static_cast<T>(rhs);
}

template <typename T, typename U>
bool operator<(const complex<T>& lhs, const U& rhs) {
	return abs(lhs) < static_cast<T>(rhs);
}

int main() {
	complex<float> a(4.6, 2.3);
	float b = 7.2;
	
	if (a > b) 
		cout << "a > b";
	else if (a < b) 
		cout << "a < b";
	else 
		cout << "a == b";
	
	complex<double> c(6.2, 14.3);
	float d = 7.8;
	
	if (c > d) 
		cout << "c > d";
	else if (c < d) 
		cout << "c < d";
	else 
		cout << "c == d" << std::endl;
	
	return 0;
}