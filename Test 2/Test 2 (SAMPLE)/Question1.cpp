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
        return "Employee name: " + name + " has a salary of " + to_string(salary) + "\n";
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
        return "Manager name: " + name + " has a salary of " + to_string(salary) + " and has an allowance of " + to_string(allowance) + "\n";
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
    Employee e2("Huy Nguyen", 200);
    e1.showInfo();
    e2.showInfo();
    cout << "\n";

    Manager m1("Anna Lyza Felipe", 300, 150);
    Manager m2("Quang Tran", 400, 200);
    m1.showInfo();
    m2.showInfo();
    cout << "\n";

    Manager *mana = new (nothrow) Manager[10] {
        Manager("Tom Huynh", 500, 300),
        Manager("Ling Huo Chong", 300, 170),
        Manager("Long Nguyen", 300, 150),
        Manager("Jonathan Crellin", 350, 200),
        Manager("Joshua Dwight", 350, 150),
        Manager("Tri Dang", 300, 150),
        Manager("Thanh Tran", 400, 200),
        Manager("Bao Nguyen", 250, 150),
        Manager("Sam Goundar", 250, 150),
        Manager("Ushik Khwakhali", 450, 200)
    };
    if (mana == nullptr){
        cout << "No data existed. \n";
        return -1;
    }
    double totalIncome = 0;
    for(int i=0; i<10; i++) {
        totalIncome = totalIncome + mana[i].totalIncome();
    }
    cout << "Average of the managers : " << totalIncome/10 << "\n";
    delete [] mana;
    return 0;
}