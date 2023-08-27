#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Employee {
    protected:
    string name;
    double salary;

    public:
    Employee(string name="", double salary=0) {
        this->name = name;
        this->salary = salary;
    }

    virtual string toString() {
        return "Employee name: " + name + "has a salary of " + to_string(salary) + "\n";
    }

    void showInfo() {
        cout << toString();
    }
};

class Manager: public Employee {
    protected:
    double allowance;

    public:
    Manager(string name="", int salary=0, double allowance=0): Employee(name, salary) {
        this->allowance = allowance;
    }

    virtual string toString() {
        return "Manager name: " + name + "has an allowance of" + to_string(allowance) + "\n";
    }

    void showInfo() {
        cout << toString();
    }

    double totalIncome() {
        return salary + allowance;
    }
};

int main() {
    Employee e1("Nhat Tran Minh", 300000);
    e1.showInfo();
    cout << "\n";

    Manager m1("Anna Lyza Felipe", 1600000, 3200000);
    m1.showInfo();
    cout << "\n";
}