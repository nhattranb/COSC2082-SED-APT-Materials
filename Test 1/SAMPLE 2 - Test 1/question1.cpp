/*
  RMIT University Vietnam
  Course: EEET2482/COSC2082
  Semester: 2023-2
  Lab Assessment: 1 (SAMPLE)
  Author: Tran Minh Nhat
  ID: s3926629
  Compiler used: g++ 8.1.0
  Created  date: 29/7/2023
  Acknowledgement: List the resources that you use to complete this assessment (write 'None' if you don't use any).
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
    int x;
    int i;
    char w;
    string name;
    double price;
    cout << "You have entered " << argc << " arguments:"
         << "\n";

    string argv[1];
    
    for (int i = 0; i < argc; ++i) {
        cout << argv[i] << "\n";
        if (argv[1] != "w") {
            cout << "Please enter the number of items: ";
            cin >> x;
            ofstream MyFile("sellingItems.dat");
            for (int i = 0; i <= x; i++) {
            cout << "Enter your item name: ";
            cin >> name;
            cout << "Item price: ";
            cin >> price;
            MyFile << name << " : " << price << "\n";
            }
            MyFile.close();
        }
    }
    cout << "thank you for using this software";
    return 0;
}