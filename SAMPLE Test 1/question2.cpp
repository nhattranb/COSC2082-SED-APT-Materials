/*
  RMIT University Vietnam
  Course: EEET2482/COSC2082
  Semester: 2023-2
  Lab Assessment: 1 (SAMPLE)
  Author: Tran Minh Nhat
  ID: s3926629
  Compiler used: g++ 8.1.0
  Created  date: 27/7/2023
  Acknowledgement: List the resources that you use to complete this assessment (write 'None' if you don't use any).
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

class Student {
    private:
    string name;
    int scores[3];

    Student(string name, int scores[3]) {
        this->name = name;
        scores[3] = scores[3];
    }

    string inputData() {
        cout << "Please type your name \n";
        cin >> this->name;
        cout << "Enter your scores \n";
        for (int i = 0; i < 3; i++) {
            cin >> scores[i];
        }
    }

    void getInfo() {
        cout << this->name << scores[3] << "\n";
    }
};

int main() {
    Student s1 = ();
    s1.inputData();
}

