#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

class ComplNum {
private:
    double real;
    double imag;

ComplNum(int real, double imag) {
    this->real = real;
    this->imag = imag;
}

public:
double getReal() {
	return this->real;
}
void setReal(int real) {
	this->real = real;
}

ComplNum operator-(const ComplNum& other) const {
    return ComplNum(real - other.real, imag - other.imag);
}

ComplNum operator - (double num) const {
    return ComplNum(real - other.real, imag - other.imag);
}

friend ComplNum operator-(double num, double imag) const {
    return ComplNum(real - other.real, imag - other.imag);
}

double getImag() {
    return this->imag;
}
void setImag(double imag) {
    this->imag = imag;
}

public:
    
};

int main() {
    cout << "Code testing \n";
    ComplNum num1(3.0, 4.0);
    ComplNum num2(1.5, 2.5);

    ComplNum result1 = num1 - num2;
    ComplNum result2 = num1 - 2.0;
    ComplNum result3 = 5.0 - num2;
}