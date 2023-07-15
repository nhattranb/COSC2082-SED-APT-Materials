#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
    public:
    int score;
    string name;
    Student(string myName, int myScore) {
        name = myName;
        score = myScore;  
    }
};

int main() {
    cout << "It's Object-Oriented Programming Time! \n";
    Student student1("Nhat", 71);
    Student student2("Quang", 80);
    cout << student1.name << " " << student2.name << "\n";
    cout << student1.name << " " << student2.name << "\n";
    return 0;
}