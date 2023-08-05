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
#include <iomanip>
using namespace std;

int doubleVal(int x) {
    return x * 2.0;
}

double doubleVal(double x) {
    return 2 * x;
}

string doubleVal(const string& hexStr) {
    stringstream ss;
    ss << hex << stoi(hexStr, nullptr, 16) * 2;
    return "0x" + ss.str();
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " number" << endl;
        return 1;
    }

    int intValue;
    double doubleValue;
    string hexValue;
    string x = argv[1];

    istringstream iss(x);

    if (iss.str().find("0x") == 0) {
        int x;
        iss >> hex >> x;
        cout << "0x" << hex << doubleVal(x) << endl;
    }
    else if (iss.str().find(".") != string::npos) {
        double x;
        iss >> x;
        cout.precision(2);
        cout << fixed << doubleVal(x) << endl;
    }
    else {
        int x;
        iss >> x;
        cout << doubleVal(x) << endl;
    }
    return 0;
}
