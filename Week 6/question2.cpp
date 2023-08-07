#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
using namespace std;


class Student {
    public:
    string Name;
    int StudentID;

    Student(string Name, int StudentID) {
        this->Name = Name;
        this->StudentID = StudentID;
    }

    string toString() {
        return "Student Name: " + Name + " - Student ID: " + to_string(StudentID) + "\n";
    }

    ~Student(){
        cout << "Destructor activated! \n";
    }
};

class Staff {
    public:
    string name;
    int staffID;

    Staff(string name, int staffID) {
        this->name = name;
        this->staffID = staffID;
    }

    string toString() {
        return "Staff Name: " + name + " - Staff ID: " + to_string(staffID) + "\n";
    }

    ~Staff(){
        cout << "Destructor activated! \n";
    }
};

class Tutor: public Staff, public Student {
    private:
    int tutID;
    
    public:
    Tutor(int tutID): Staff(name, staffID), Student(Name, StudentID) {
        this->tutID = tutID;
    }

    void setName(string tutName) {
 	    cout << "Enter the tutor's name: \n";
        cin >> tutName;
    }

    string consultation() {
        cout << "Doing the consultation! \n";
    }
};

int main(){
    Student s1("Nhat Tran", 3926629);
    Student s2("Teddy", 3777773);
    Staff t1("Anna Lyza Felipe", 176671);
    Staff t2("Ling Huo Chong", 169960);
}