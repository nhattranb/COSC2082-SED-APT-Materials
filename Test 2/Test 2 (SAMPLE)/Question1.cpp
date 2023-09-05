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
    int salary;

    public:
    Employee(string name="", double salary=0) {
        this->name = name;
        this->salary = salary;
    }

    string toString() {
        return "Employee name: " + name + "has a salary of " + to_string(salary) + "\n";
    }

    void showInfo() {
        cout << toString();
    }
};

class Manager: public Employee {
    protected:
    int allowance;

    public:
    Manager(string name="", int salary=0, double allowance=0): Employee(name, salary) {
        this->allowance = allowance;
    }

    string toString() {
        return "Manager name: " + name + " has a salary of" + to_string(salary) + " and has an allowance of" + to_string(allowance) + "\n";
    }

    void showInfo() {
        cout << toString();
    }

    double totalIncome() {
        return salary + allowance;
    }
};

int main() {
    cout << "Units are in DOLLARS. \n";
    
    Employee e1("Nhat Tran Minh", 100);
    e1.showInfo();
    cout << "\n";

    Manager m1("Anna Lyza Felipe", 280, 130);
    m1.showInfo();
    cout << "\n";

    Manager *mana = new (nothrow) Manager[5] {
        Manager("Tom Huynh", 350, 150),
        Manager("Ling Huo Chong", 260, 120),
        Manager("Long Nguyen", 290, 145),
        Manager("Jonathan Crellin", 300, 160),
        Manager("Joshua Dwight", 325, 125)
    };
    if (mana == nullptr){
        cout << "No data existed. \n";
        return -1;
    }
    double totalIncome = 0;
    for(int i=0; i<5; i++) {
        totalIncome = totalIncome + mana[i].totalIncome();
    }
    cout << "Average of the managers : " << totalIncome/5 << "\n";
    delete [] mana;
    return 0;
}