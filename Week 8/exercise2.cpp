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
    Staff(string name="", string dep="") {
        this->name = name;
        this->dep = dep;
    }
};

class Department {
    private:
    string name;
    string location;
    vector<Staff*> list;
};

class Academic: public Department {

};

class Service: public Department {

};