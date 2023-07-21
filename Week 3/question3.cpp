#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
    private:
    string password;
    
    public:
    int score;
    string name;

    int getScore() {
	     return this->score;
    }
    void setScore(int score) {
	     this->score = score;
    }

    string getName() {
    	return this->name;
    }
    void setName(string name) {
    	this->name = name;
    }

    Student(string myName, int myScore) {
        name = myName;
        score = myScore;  
    }

    public:
        void changePwd() {
            fstream Password;
            Password.open("pass.dat");
            Password << "UTIMstudent2020 \n";
            Password.close();
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