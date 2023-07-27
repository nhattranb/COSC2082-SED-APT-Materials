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

int doubleVal(int x) {
    return 2 * x;
}

double doubleVal(double x) {
    return 2 * x;
}

template <typename T>
T doubleVal(T x) {
    return 2 * x;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " number" << endl;
        return 1;
    }

    stringstream ss(argv[1]);
    if (ss.str().find("0x") == 0) {
        int x;
        ss >> hex >> x;
        cout << "0x" << hex << doubleVal(x) << endl;
    }
    else if (ss.str().find(".") != string::npos) {
        double x;
        ss >> x;
        cout.precision(2);
        cout << fixed << doubleVal(x) << endl;
    }
    else {
        int x;
        ss >> x;
        cout << doubleVal(x) << endl;
    }
    return 0;
}
