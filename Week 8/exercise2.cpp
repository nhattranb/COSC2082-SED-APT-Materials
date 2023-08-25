#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Staff {
    private:
    string name;
    string dep;

    public:
    Staff() {}
    
    Staff(string name="", string dep="") {
        this->name = name;
        this->dep = dep;
    }

    void joinDept(Department &dept) {

    }
};

class Department {
    private:
    string name;
    string location;
    vector<Staff*> list;

    public:
    Department() {}

    Department(string name="", string location="", vector<Staff*> list) {
        this->name = name;
        this->location = location;
        this->list = list;
    }
};

class Academic: public Department {

};

class Service: public Department {

};

int main() {
    cout << "testing the code... ";
    return 0;
}