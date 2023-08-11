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

void showInfoStudent(Student &stu) {
    cout << stu.toString();
}

class SchoolSystem {
    public:
    vector<Student> students;

    void addStudent() {
        Student s;
        cout << "Enter the student name: \n";
        cin >> s.Name;
        cout << "Enter the student ID: \n";
        cin >> s.StudentID;
        students.push_back(s);
    }

    void removeStudent() {
        Student s;
        cout << "Enter the student ID: \n";
        cin >> s.StudentID;
        cout << "Enter the student ID: \n";
        cin >> s.StudentID;
        students.pop_back(s);
    }
};

int main(){
    int choice;
    
    cout << "Testing the application... \n";
    Student s1("Nhat Tran", 3926629);
    Student s2("Phat Tran", 3777773);
    cout << s1.StudentID << " " << s1.Name << "\n";
    
    cout << "Welcome to the School Management System \n";
    cout << "1. View all students \n";
    cout << "2. Add Student \n";
    cout << "3. Remove Student \n";
    cout << "4. Exit \n";
    cout << "Enter your choice: ";
    cin >> choice;

    ofstream myfile;
    myfile.open ("students.dat", );
    myfile << s1.Name << s1.StudentID << "\n";
    myfile << s2.Name << s1.StudentID << "\n";
    myfile.close();
    return 0;
}