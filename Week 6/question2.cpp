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

    ~Tutor(){
        cout << "Destructor activated! \n";
    }
};

class StudentSystem {
    public:
    vector <Student> students;

    void AddStudent() {

    }

    void RemoveStudent() {

    }
};

int main(){
    int choice;
    
    cout << "Testing the application... \n";
    Student s1("Nhat Tran", 3926629);
    Student s2("Teddy", 3777773);
    Staff t1("Anna Lyza Felipe", 176671);
    Staff t2("Ling Huo Chong", 169960);
    cout << s1.StudentID << s1.Name << "\n";
    cout << t1.staffID << t1.name << "\n";
    
    cout << "Welcome to the School Management System \n";
    cout << "1. View all students \n";
    cout << "2. Add Student \n";
    cout << "3. Remove Student \n";
    cout << "4. Exit \n";
    cout << "Enter your choice: ";
    cin >> choice;
    return 0;
}