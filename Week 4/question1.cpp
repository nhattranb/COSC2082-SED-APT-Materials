#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class ComplNum {
private:
    int real;
    double imag;

int getReal() {
	return this->real;
}
void setReal(int real) {
	this->real = real;
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
}