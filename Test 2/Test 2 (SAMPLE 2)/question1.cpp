/* Code inspired by dr Linh Tran (former EEET2482 coordinator)*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Vehicle {
    public:
    string name;
    int year;

    public:
    Vehicle(string name="", int year=0) {
        this->name = name;
        this->year = year;
    }
};

class Car: public Vehicle {
    protected:
    int plateNumber;

    public:
    Car(string name="", int year=0, int plateNumber=0) {
        this->plateNumber = plateNumber;
    }

    virtual string toString() {
        return "Car name: " + name + "is produced in " + to_string(year) + "and have plate number " + to_string(plateNumber);
    }

    void showInfo(Car &c) {
        cout << c.toString();
    }
};

int main() {
    cout << "testing the software. \n";
    
    Car* myCars = new Car[3] {
        Car("Ford", 2023, 123456),
        Car("Toyota", 2020, 999999),
        Car("Thaco", 2022, 654321)
    };
    int oldestCar = 1;
    for (int i = 1; i < 3; i++) {
        if (myCars[i].year < myCars[oldestCar].year) {
            oldestCar = i;
        }
    }
    cout << "the oldest car is a " << myCars[oldestCar].toString() << "\n";
    return 0;
}