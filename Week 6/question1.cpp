#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;


class Student {
    public:
    string Name;
    int StudentID;

    Student(string Name="", int StudentID=0) {
        this->Name = Name;
        this->StudentID = StudentID;
        cout << "a student \n";
    }

    virtual string toString() {
        return "Student Name: " + Name + " - Student ID: " + to_string(StudentID) + "\n";
    }

    ~Student(){
        cout << "Student Destructor activated! \n";
    }
};

class Staff {
    public:
    string name;
    int staffID;

    Staff(string name="", int staffID=0) {
        this->name = name;
        this->staffID = staffID;
        cout << "a staff \n";
    }

    virtual string toString() {
        return "Staff Name: " + name + " - Staff ID: " + to_string(staffID) + "\n";
    }

    ~Staff(){
        cout << "Staff Destructor activated! \n";
    }
};

class Tutor: public Staff, public Student {
    public:
    int tutID;
    string tutName;
    
    Tutor(string tutName="", int tutID=0): Staff(name, staffID) {
        this->tutID = tutID;
        this->tutName = tutName;
        cout << "a tutor \n";
    }

    void setName(string tutName) {
 	    cout << "Enter the tutor's name: \n";
        cin >> tutName;
        this->tutName = tutName;
    }

    string consultation() {
        string s = "Doing the consultation!";
        cout << s << "\n";
        return s;
    }

    virtual string toString() {
        return "Tutor Name: " + tutName + " - Tutor ID: " + to_string(tutID) + "\n";
    }

    ~Tutor(){
        cout << "Tutor Destructor activated! \n";
    }
};

void showInfoStudent(Student &stu) {
    cout << stu.toString();
}

void showInfoStaff(Staff &sta) {
    cout << sta.toString();
}

void showInfoTutor(Tutor &tut) {
    cout << tut.toString();
}

int main(){
    int choice;
    
    cout << "Testing the application... \n";
    Student s1("Nhat Tran", 3926629);
    Student s2("Phat Tran", 3777773);
    Staff t1("Anna Felipe", 176672);
    Staff t2("Tom Huynh", 169960);
    Staff t3("Joshua Dwight", 182918);
    Staff t4("Thao Nguyen", 158349);
    Tutor l1("Phuc Nguyen", 296849);
    Tutor l2("Bao Ho", 288882);
    showInfoStaff(t1);
    showInfoStaff(t3);
    showInfoStaff(l2);
    cout << s1.StudentID << " " << s1.Name << "\n";
    cout << t2.staffID << " " << t2.name << "\n";
    cout << t4.staffID << " " << t4.name << "\n";
    cout << l1.tutID << " " << l1.tutName << "\n";
    
    cout << "Welcome to the School Management System \n";
    cout << "1. View all students \n";
    cout << "2. Add Student \n";
    cout << "3. Remove Student \n";
    cout << "4. Exit \n";
    cout << "Enter your choice: ";
    cin >> choice;
    return 0;
}